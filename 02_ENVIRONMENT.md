# environment

## Purpose

An introduction to the plugin environment (PluginProcessor and PluginEditor). This would help making the decision of building a testing framework and audio effects class design.

## Content

### PluginEditor
PluginEditor is the front-end of the plugin software. It manages how the graphical user interface (GUI) looks like and decides the way we interact with the plugin by providing sliders, buttons, and parameter settings.

PluginEditor has a PluginProcessor, which means one can simply design a slider to change parameters in the PluginProcessor.

There are 3 functions that we have to bear in mind when designing the GUI:
1. Constructor is the place if any parameters needs to be set before the GUI has been created. Like the preset of the buttons and sliders.
2. paint() is the main function that we should take care of. It describes how the GUI looks like and where should the buttons and sliders be at.
3. resized() is used when the dimension of the GUI is changed. If not specified, then the GUI items will stay at the same position related from the origin of the GUI window.

More information on building the GUI are available in [JUCE tutorial](http://learn.juce.com/tutorials).

### PluginProcessor
PluginProcessor is the back-end of the plugin software. It get instructions and parameters from PluginEditor, and execute functions that process block-based signals. The functions like audio filters, FXs, FFT, and stuff like that will be called by PluginProcessor.

There are 3 functions that we have to bear in mind when designing the structure of the plugin processor:
1. prepareToPlay(samplerate, samplesperblock) tells PluginProcessor to get ready to start working, given the information of how many samples per second and how many samples are there in a block. Usually this is the place where we allocate appropriate amount of memory for further use like circular buffer.
2. processBlock(buffer&) process a block of signals. It will decide which of the audio processing functions to execute and push back to buffer&. JUCE will take care of the rest of the data flow, bringing the buffer& to the DAW and DAW will eventually playback the signal in the buffer&.
3. releaseResources() is just a place to undo prepareToPlay(...). Free the memory after the process is finished.


## Credit
Ying-Shu Kuo (Jan 15 2016)