/*
 * PWM.h
 *
 *  Created on: Apr 1, 2020
 *      Author: MCLEANS
 */

#ifndef PWM_H_
#define PWM_H_

#include "stm32f4xx.h"

namespace custom_libraries {

class PWM {
private:
	TIM_TypeDef *TIMER;
	GPIO_TypeDef *PORT;
	uint8_t PIN;

	uint16_t prescaler;
	uint16_t auto_reload_value;
	uint16_t duty_cycle = 0;

private:
	void enable_TIMER_RCC(TIM_TypeDef *TIMER);
	void enable_GPIO_RCC(GPIO_TypeDef *PORT);
public:
public:

public:
	PWM(TIM_TypeDef *TIMER, GPIO_TypeDef *PORT, uint8_t PIN, uint16_t prescaler = 0, uint16_t auto_reload_value = 0);
	~PWM();
	void set_prescaler(uint16_t);
	uint16_t get_prescaler(void) const;
	void set_auto_reload_value(uint16_t);
	uint16_t get_auto_reload_value(void) const;
	void set_duty_cycle(uint16_t);
	uint16_t get_duty_cycle(void) const;
};

} /* namespace custom_libraries */

#endif /* PWM_H_ */
