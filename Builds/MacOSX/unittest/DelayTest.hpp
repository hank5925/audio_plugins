//
//  DelayTest.hpp
//  audio_plugins
//
//  Created by Ying-Shu Kuo on 2/3/16.
//
//

#ifndef DelayTest_hpp
#define DelayTest_hpp

#include <stdio.h>
#include "JuceHeader.h"
#include "Delay.hpp"

class DelayTest : public UnitTest
{
public:
    DelayTest()  : UnitTest ("Delay Test") {}
    void runTest() override
    {
        Delay* delay = new Delay();
        //float *buffer = new float[1024];
        beginTest ("Part 1");
        expect (delay->testFunction() == 100);
    }
};

// Creating a static instance will automatically add the instance to the array
// returned by UnitTest::getAllTests(), so the test will be included when you call
// UnitTestRunner::runAllTests()
static DelayTest test;

#endif /* DelayTest_hpp */
