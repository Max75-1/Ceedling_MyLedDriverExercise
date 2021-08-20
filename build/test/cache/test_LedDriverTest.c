#include "build/temp/_test_LedDriverTest.c"
#include "Core/Inc/LedDriver.h"
#include "C:/tools/ruby27/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


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







 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

((void *)0)

), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_HEX16);

}



void test_SingleLedTurnedOn()

{





 SingleLedTurnedOn(&virtualLeds);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

((void *)0)

), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_HEX16);

}



void test_SingleLedTurnedOff()

{





 SingleLedTurnedOn(&virtualLeds);

 SingleLedTurnedOff(&virtualLeds);

 UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((virtualLeds)), (

((void *)0)

), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_HEX16);

}
