/*
 HallSensor.cpp - Libreria per utilizzo sensori effetto Hall tipo ACS71x
 Created by Mauro Serafin, October 27, 2010. [Happy birthday my lovely son Tommaso!!!]
 v1.0.0 : 2010-10-27 : prima stesura
 */

//#include "Arduino.h"
#include "HallSensor.hpp"
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// Costruttore; necessario anteporre Conversione::
HallSensor::HallSensor()
{
    //nrSamples = 0;
    //mVperAmps = 0;
}

// Distruttore; necessario anteporre Conversione::
HallSensor::~HallSensor()
{
    
}

void HallSensor::set_values (int x, int y)
{
    nrSamples = x;
    mVperAmps = y;
}

float HallSensor::getVPP()
{
    float total = 0;
    float result = 0;
    
    for (int i = 0; i < nrSamples; i++)
    {
        float current = abs((509 + ((rand() % 4) + 1) - 512));
        total += current * current ;
    }
    
    double value = sqrt (total / nrSamples);
    result = ((value * 5.0 ) / 1024); //calcolo Volt picco picco
    
    return result;
}

