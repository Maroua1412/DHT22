

#include "stm32l1xx_hal.h"

#ifndef INC_CALCULE_H_
#define INC_CALCULE_H_

void Data_Output (GPIO_TypeDef *PORT, uint16_t PIN);
void Data_Input (GPIO_TypeDef *PORT, uint16_t PIN);
void Read_data (uint8_t *data);

#endif /* INC_CALCULE_H_ */
