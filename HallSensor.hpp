//
//  HallSensor.h
//  Libreria per utilizzo sensori effetto Hall tipo ACS71x
//
//  Created by Mauro Serafin on 2010-10-27.
//  Copyright © 2016 SΞRΔF. All rights reserved.
//

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
