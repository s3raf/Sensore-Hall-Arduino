/*
 HallSensor.h - Libreria per utilizzo sensori effetto Hall tipo ACS71x
 Created by Mauro Serafin, October 27, 2010. [Happy birthday my lovely son Tommaso!!!]
 v1.0.0 : 2010-10-27 : prima stesura
 */

#ifndef HALLSENSOR_H
#define HALLSENSOR_H

//#include "Arduino.h"

class HallSensor
{
    int nrSamples, mVperAmps;
    
public:
    
    HallSensor();    // un solo costruttore
    ~HallSensor();   // il distruttore
    
    void set_values (int,int);
    float getVPP();
};

#endif
