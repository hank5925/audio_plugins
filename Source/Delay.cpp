//
//  Delay.cpp
//  audio_plugins
//
//  Created by Ying-Shu Kuo on 1/15/16.
//
//

#include "Delay.hpp"

Delay::Delay() {
    counter = 0;
    std::cout << "delay: constructor" << std::endl;
}
Delay::~Delay() {
    std::cout << "delay: destructor" << std::endl;
}
void Delay::prepareToPlay(double sampleRate, int samplesPerBlock) {
    std::cout << "delay: prepare to play" << std::endl;
}
void Delay::releaseResource() {
    std::cout << "delay: release resource" << std::endl;
}
void Delay::processBlock(float* buffer) {
    counter += 1;
    std::cout << "delay: process block " << counter << std::endl;
}
