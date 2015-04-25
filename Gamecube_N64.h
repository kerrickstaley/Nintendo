/*
Copyright (c) 2014-2015 NicoHood
See the readme for credit to other people.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

// include guard
#pragma once

#include <Arduino.h>

//================================================================================
// Settings
//================================================================================

// timeout for the reading function for the pin to go low/high
#define NINTENDO_GAMECUBE_N64_TIMEOUT NINTENDO_GAMECUBE_N64_TIMEOUT_US(28)

// timeout for the reading function for the pin to go low/high
#define NINTENDO_GAMECUBE_N64_TIMEOUT_US(uS) (uS * F_CPU / (1000000 * 7))

//================================================================================
// Function prototypes
//================================================================================

// functions to communicate with the gc/n64 controller
void gc_n64_send(uint8_t* buff, uint8_t len,
	volatile uint8_t* modePort, volatile uint8_t* outPort, uint8_t bitMask);

uint8_t gc_n64_get(uint8_t* buff, uint8_t len,
	volatile uint8_t* modePort, volatile uint8_t* outPort, volatile uint8_t * inPort, uint8_t bitMask);