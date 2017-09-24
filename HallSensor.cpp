//
//  HallSensor.cpp
//  Libreria per utilizzo sensori effetto Hall tipo ACS71x
//
//  Created by Mauro Serafin on 2010-10-27.
//  Copyright © 2016 SΞRΔF. All rights reserved.
//
//#include "Arduino.h"
#include "HallSensor.hpp"
#include <math.h>
#include <stdlib.h>
#include <iostream>

// testo di prova
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

