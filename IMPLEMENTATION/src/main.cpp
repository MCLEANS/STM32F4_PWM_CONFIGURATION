/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "clockconfig.h"
#include "PWM.h"
			
custom_libraries::clock_config system_clock;

custom_libraries::channel pwm_channel = custom_libraries::channel2;
custom_libraries::alternate_function pin_alternate_function = custom_libraries::AF1;
custom_libraries::PWM pwm(TIM1,pwm_channel,GPIOA,9,pin_alternate_function,1000,100);

int main(void)
{
	//---------Configure PLL 168MHz as clock source-------------
	system_clock.initialize();
	pwm.set_duty_cycle(100);
	pwm.begin();


	while(1){



	}
}
