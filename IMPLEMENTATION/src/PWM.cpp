/*
 * PWM.cpp
 *
 *  Created on: Apr 1, 2020
 *      Author: MCLEANS
 */

#include "PWM.h"

namespace custom_libraries {

PWM::PWM(TIM_TypeDef *TIMER,
		channel input_channel,
		GPIO_TypeDef *PORT,
		uint8_t PIN,
		uint16_t prescaler,
		uint16_t auto_reload_value ):TIMER(TIMER),
									input_channel(input_channel),
									PORT(PORT),
									PIN(PIN),
									prescaler(prescaler),
									auto_reload_value(auto_reload_value)
										{
	//Enable Timer RCC
	if(TIMER == TIM1) RCC->APB2ENR |= RCC_APB2ENR_TIM1EN;
	if(TIMER == TIM2) RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	if(TIMER == TIM3) RCC->APB1ENR |= RCC_APB1ENR_TIM3EN;
	if(TIMER == TIM4) RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
	if(TIMER == TIM5) RCC->APB1ENR |= RCC_APB1ENR_TIM5EN;
	if(TIMER == TIM6) RCC->APB1ENR |= RCC_APB1ENR_TIM6EN;
	if(TIMER == TIM7) RCC->APB1ENR |= RCC_APB1ENR_TIM7EN;
	if(TIMER == TIM8) RCC->APB2ENR |= RCC_APB2ENR_TIM8EN;
	if(TIMER == TIM9) RCC->APB2ENR |= RCC_APB2ENR_TIM9EN;
	if(TIMER == TIM10) RCC->APB2ENR |= RCC_APB2ENR_TIM10EN;
	if(TIMER == TIM11) RCC->APB2ENR |= RCC_APB2ENR_TIM11EN;
	if(TIMER == TIM12) RCC->APB1ENR |= RCC_APB1ENR_TIM12EN;
	if(TIMER == TIM13) RCC->APB1ENR |= RCC_APB1ENR_TIM13EN;
	if(TIMER == TIM14) RCC->APB1ENR |= RCC_APB1ENR_TIM14EN;



	TIMER->PSC = this->prescaler;
	TIMER->ARR = this-> auto_reload_value;

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
