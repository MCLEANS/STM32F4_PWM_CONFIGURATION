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

PWM::~PWM() {
	// TODO Auto-generated destructor stub
}

} /* namespace custom_libraries */
