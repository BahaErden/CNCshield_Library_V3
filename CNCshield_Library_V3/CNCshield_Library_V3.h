#ifndef CNCshield_Library_V3_h
#define CNCshield_Library_V3_h
#include "Arduino.h"

class CNCshield_Library_V3 {
    private:
    int enablePin = 8;

    int StepXPin = 5;
    int directionXPin = 2;

    int StepYPin = 6;
    int directionYPin = 3;

    int StepZPin = 7;
    int directionZPin = 4;

    int StepAPin = 13;
    int directionAPin = 12;

    public:
    CNCshield_Library_V3();
    void pinSetup();
    void StepX(int stepX, int speedX);
    void StepY(int stepY, int speedY);
    void StepZ(int stepZ, int speedZ);
    void StepA(int stepA, int speedA);
    void stepsON();
    void stepsOFF();

    void InvertPin(int x, int y, int z, int a);

    void XdirRight();
    void XdirLeft();

    void YdirRight();
    void YdirLeft();

    void ZdirRight();
    void ZdirLeft();

    void AdirRight();
    void AdirLeft();
};

#endif