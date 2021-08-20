#include <stdint.h>
#include "unity.h"
#include "LedDriver.h"

uint16_t virtualLeds= 0xffff;

void setUp()
{
	AllLedsOff(&virtualLeds);
}

void tearDown()
{

}

void test_AllLedsAreOff()
{
	//TEST_FAIL_MESSAGE("Start here !");
	//uint16_t virtualLeds= 0xffff;
	//AllLedsOff(&virtualLeds);
	TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}

void test_SingleLedTurnedOn()
{
	//uint16_t virtualLeds=0xffff;
	//AllLedsOff(&virtualLeds);
	SingleLedTurnedOn(&virtualLeds);
	TEST_ASSERT_EQUAL_HEX16(1, virtualLeds);
}

void test_SingleLedTurnedOff()
{
	//uint16_t virtualLeds=0xffff;
	//AllLedsOff(&virtualLeds);
	SingleLedTurnedOn(&virtualLeds);
	SingleLedTurnedOff(&virtualLeds);
	TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}
