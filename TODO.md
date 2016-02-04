## TODO

* Design plugin testing framework (JUCE built-in or DIY)
    Trying to use command line tool in Xcode + UnitTest in JUCE to build testing framework.
    This means that I can no more use XCTest framework for testing, which means there is no fance feature that shows green and red pass/fail indicators :(
    Hope I can make the UnitTestRunner work.
* Design plugin program framework
...more to come later

## Solved Issues

* Solve Audacity plugin unreadable issue
  Since Audacity only support 32-bit version, before Cmd-B building the plugin, check the project file => Targets => Build Settings => Architectures => Architectures, set the value as 32-bit Intel (i386).
  Tested in Xcode 7.2, MacOSX 10.11.2, Audacity 2.1.1

## Credit
Ying-Shu Kuo (Jan 15 2016)