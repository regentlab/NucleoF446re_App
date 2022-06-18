/*
 * stepper_driver.h
 *
 *  Created on: Jun 12, 2022
 *      Author: LunaPlena
 *
 *  This is simple code for stepper motor driver with A4948
 */

#ifndef INC_STEPPER_DRIVER_H_
#define INC_STEPPER_DRIVER_H_

#include "main.h"

#define ENABLE_1 	GPIO_Pin_0
#define MS1_1 		GPIO_Pin_6
#define MS2_1 		GPIO_Pin_2
#define MS3_1 		GPIO_Pin_3
#define STEP_1		GPIO_Pin_4
#define DIR_1		GPIO_Pin_5


typedef struct{
	int step_degree;
}StepperMotor;


typedef struct  {
	short step_pin;
	short dir_pin;
	short enable_pin;

	short microstep_resolution;//(1,2,4,8,...)

	long step_pulse;
	short dir_state;

	//Motor setting
	short motor_steps; //motor steps is 200(=360/1.8) if your motor have 1.8 step.
}StepperDriver;

void stepperDriverInit(StepperDriver* spdv);
void rotate(StepperDriver* spdv, long deg);
void move(StepperDriver* spdv,long steps);
static long calcStepsForRotation(StepperDriver* spdv,double deg);


#endif /* INC_STEPPER_DRIVER_H_ */
