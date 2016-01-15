# initialize

## Purpose

A quick guide of how the audio plugin is created, from zero to initial audio plugin.

## Content

### Projucer and Xcode

* Use Projucer to build the first project.
* Select Audio Plugin as the project.
* Select Xcode as the default IDE.
* Get rid of unnecessary JUCE modules.

### Project Structure

At this point, we will have several subfolders in our project folder.
1. JuceLibraryCode, serves as the interface to JUCE module library.
2. Source, the place we put our code in. Several files are put in:
  * PluginEditor = the place where we set GUI, and use it to command our plugin.
  * PluginProcessor = the place where we actually process signals.
3. Builds, where the plugin component is built.

### Build the First Empty Plugin

* Cmd-B to build the plugin
* If it builds successfully, then audio_plugins.vst should be built and send to the directory of /Users/`[username]`/Library/Audio/Plug-Ins/VST, and audio_plugins.component should be built and put in /Users/`[username]`/Library/Audio/Plug-Ins/Components. The former one is VST plugin, and the latter one the AudioUnit plugin.

### Where to Use the Plugin?

Audacity is an open-source, light-weight DAW. The installed plugins would appear inside Generate / Effect / Analyze. For the other kinds of DAW, please refer to their guide.

## Credit
Ying-Shu Kuo (Jan 14 2016)