## TODO

* Design plugin testing framework (JUCE built-in or DIY)
* Design plugin program framework
...more to come later

## Solved Issues

* Solve Audacity plugin unreadable issue
  Since Audacity only support 32-bit version, before Cmd-B building the plugin, check the project file => Targets => Build Settings => Architectures => Architectures, set the value as 32-bit Intel (i386).
  Tested in Xcode 7.2, MacOSX 10.11.2, Audacity 2.1.1

## Credit
Ying-Shu Kuo (Jan 15 2016)