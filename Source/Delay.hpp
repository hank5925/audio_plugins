//
//  Delay.hpp
//  audio_plugins
//
//  Created by Ying-Shu Kuo on 1/15/16.
//
//

#ifndef Delay_hpp
#define Delay_hpp

#include <iostream>


#endif /* Delay_hpp */

class Delay {
public:
    Delay();
    ~Delay();
    void prepareToPlay(double sampleRate, int samplesPerBlock);
    void releaseResource();
    void processBlock(float* buffer);
    int testFunction();
    
private:
    int counter;
};