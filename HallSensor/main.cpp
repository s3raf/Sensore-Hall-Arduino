//
//  main.cpp
//  HallSensor
//
//  Created by Mauro Serafin on 26/10/2016.
//  Copyright © 2016 SΞRΔF. All rights reserved.
//

#include "HallSensor.hpp"
#include <iostream>
#include <stdio.h>

int main() {
    
    using namespace std;
    
    HallSensor ACS712;
    
    ACS712.set_values (1000,100); //nrSamples set to 10000;mVperAmps 100 for ACS712
    float VPP = ACS712.getVPP();
    cout << "calcolo volt VPP = ";
    cout << VPP << endl;
    
    return 0;
}
