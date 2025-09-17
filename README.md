# PicoClapper

Project to build a new custom version of a clapper using modern hardware

## Commercial Version of the Clapper

[Reference](https://spectrum.ieee.org/clapper)

### Function

- Allows plug passthrough to mains
- Slider to choose from 2 or 3 claps to activate
- Clap toggles the current power state

### Issues
  
- Clapping not distinguished from TV noises, other sharp noises etc
- Users not clapping consistently
- Easily muffled

## My Version

### Features

- Plug passthrough to mains
- Button to allow you to record a sound profile as your trigger
- Higher level signal processing to avoid false positives

### Hardware Requirements

- Pi Pico (Micro python? C/C++?)
- Opto-couplers with relays for power circuit
- Mains isolation
- Microphone
- Custom PCB??
- Custom Plastics??
- [FFT Library](https://github.com/kosme/arduinoFFT)
  