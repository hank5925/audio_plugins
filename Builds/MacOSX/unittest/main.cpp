//
//  main.cpp
//  unittest
//
//  Created by Ying-Shu Kuo on 2/3/16.
//
//

#include <iostream>
#include "JuceHeader.h"

class TestRun : public UnitTestRunner
{
public:
    TestRun() : UnitTestRunner () {}
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    TestRun myTestRun = new TestRun();
    myTestRun->runAllTests();

    
    return 0;
}
