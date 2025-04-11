#ifndef MEASURMENTS_HPP
#define MEASURMENTS_HPP

#include <Arduino.h>
#include <SPI.h>

class Pomiar{
    private:
    const float vRef = 5.0;
    const float VoltageScalling = 0.96;
    const float scaleVoltage = (10.0+1.2)/1.2;

    const float zeroCurrentVoltage = 2.407;
    const float sensitivityACS = 0.040;
    const float constCurrentScalling = 1.06;

    uint8_t cs1, cs2, cs3, cs4;

    float ADCtoVoltage(uint16_t adcValue);
    float ADCtoCurrent(uint16_t adcValue);
    uint16_t readADC(uint8_t pinCS, uint8_t channel);

    public:
    Pomiar(uint8_t cs1, uint8_t cs2);
    void begin();
    //Pomiary wykonajPomiar();
};


#endif