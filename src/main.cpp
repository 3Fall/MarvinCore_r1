/*
Hi there!
This project provides interfaces to Marvin's peripherals is structured to be built upon.
This is the main.cpp of Marvin FC's flight software core.
*/

#include <Arduino.h>

// MarvinPinout contains the pin definitions
#include <MarvinPinout.h>

// MarvinConfig contains all the board's settings
#include <MarvinConfig.h>

// MarvinSensors wrapps the functionality of the board's sensors
#include <MarvinSensors.h>

// MarvinMemory is the data logging handler object - interfaces the memory card and the flash chip
#include <MarvinMemory.h>

// MarvinSystemManager is the interface for Marvin's system manager IC - ATTiny3227
#include <MarvinSystemManager.h>

void setup()
{
  // if this code runs, it means the system manager ic is online, and has enabled the 3.3V line;
  // ask it for all the parameters, log them to the debug serial interface,
}

void loop()
{
  // put your main code here, to run repeatedly:
}