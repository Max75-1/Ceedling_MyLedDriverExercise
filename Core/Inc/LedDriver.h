/*
 * LedDriver.h
 *
 *  Created on: 18 Aug 2021
 *      Author: telar
 */

#ifndef INC_LEDDRIVER_H_
#define INC_LEDDRIVER_H_

void LedDriver_Create();
void LedDriver_Destroy();
void AllLedsOff(uint16_t *);
void SingleLedTurnedOn(uint16_t *);
void SingleLedTurnedOff(uint16_t *);

#endif /* INC_LEDDRIVER_H_ */
