/*
 * stepper_driver.c
 *
 *  Created on: Jun 12, 2022
 *      Author: LunaPlena
 */

#include "stepper_driver.h"

void stepperDriverInit(StepperDriver* spdv){

}

void rotate(StepperDriver* spdv, long deg){
	move(spdv,calcStepsForRotation(spdv,deg));
}

void move(StepperDriver* spdv,long steps){
	spdv->step_pulse = steps;

	quota_steps =
}


long calcStepsForRotation(StepperDriver* spdv,double deg){
	return deg * spdv->motor_steps*spdv->microstep_resolution/360;
}
