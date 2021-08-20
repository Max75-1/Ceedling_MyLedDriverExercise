#include <stdint.h>
#include "LedDriver.h"

void LedDriver_Create()
{

}

void LedDriver_Destroy()
{

}

void AllLedsOff(uint16_t *leds)
{
	*leds=0;
}

void SingleLedTurnedOn(uint16_t *leds)
{
	*leds=1;
}

void SingleLedTurnedOff(uint16_t *leds)
{
	*leds=0;
}


