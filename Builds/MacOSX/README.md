# audio_plugins

## Purpose

This project aims to provide practical training on audio plugin software development.

## Scope and Objective

This project will include:
* Initializing plugin project with the help of "Projucer", the JUCE builder.
* Objective-oriented class design for building audio plugins in C++.
* Block-based sample-level digital signal processing in C++.

This project will NOT include:
* Handling connection between audio plugin and audio APIs (VST, AudioUnit, etc). This part is hugely done by JUCE library, which partly makes it worth the price to develop audio software. For those interested in the implementation of the communication between JUCE and audio APIs, please go to [JUCE website](http://www.juce.com).
* Developing audio software development in general (DAW, audio editor, music player, music library browser, etc). This project will only focus on building audio plugins for the time being.

## Content

Thought highly depend on schedule, plugins to be build include:
* Delay
* Reverb
* Parametric Equalizer
* FFT
* Vibrato
* Compressor
* PSOLA
* ...more to come if the schedule allowed.

## Credit
Ying-Shu Kuo (Jan 14 2016)