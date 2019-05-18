/*
   Experimental class for Invensense MPU6000 IMU on STM32F4 

   Copyright (C) 2019 Simon D. Levy 

   This file is part of Hackflight.

   Hackflight is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Hackflight is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Hackflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

//#include <stdint.h>

#include "MPU.h"

class MPU6000 : public MPUIMU {

    protected:

        virtual void readMPURegisters(uint8_t subAddress, uint8_t count, uint8_t * dest) override;

        virtual void writeMPURegister(uint8_t subAddress, uint8_t data) override;

    public:

        MPU6000(Ascale_t ascale, Gscale_t gscale, uint8_t sampleRateDivisor=0);

        MPU6000::Error_t begin(void);

        bool readAccel(int16_t & x, int16_t & y, int16_t & z);

        bool readGyro(int16_t & x, int16_t & y, int16_t & z);

}; // class MPU6000
