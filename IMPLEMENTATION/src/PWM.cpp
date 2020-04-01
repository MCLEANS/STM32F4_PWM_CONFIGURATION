/*
 * PWM.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: MCLEANS
 */

#include "PWM.h"

namespace custom_libraries {

PWM::PWM(TIM_TypeDef *TIMER, GPIO_TypeDef *PORT, uint8_t PIN, uint16_t prescaler,uint16_t auto_reload_value ):TIMER(TIMER),
																												PORT(PORT),
																												PIN(PIN),
																												prescaler(prescaler),
																												auto_reload_value(auto_reload_value)
																													{


}

void PWM::set_prescaler(uint16_t prescaler){
	this->prescaler = prescaler;

}

uint16_t PWM::get_prescaler(void)const{
	return this->prescaler;

}

void PWM::set_auto_reload_value(uint16_t auto_reload_value){
	this->auto_reload_value = auto_reload_value;
}

uint16_t PWM::get_auto_reload_value(void) const{
	return this->auto_reload_value;
}

void PWM::set_duty_cycle(uint16_t duty_cycle){
	this->duty_cycle = duty_cycle;
}

uint16_t PWM::get_duty_cycle(void) const{
	return this->duty_cycle;
}
PWM::~PWM() {
	// TODO Auto-generated destructor stub
}

} /* namespace custom_libraries */
