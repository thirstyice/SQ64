#pragma once

#include "Step.h"

class Pattern {
public:
	enum Division : unsigned char {
		Whole=1,
		Half=2,
		HalfTrip=3,
		Quarter=4,
		QuarterTrip=6,
		Eighth=8,
		EighthTrip=12,
		Sixteenth=16,
		SixteenthTrip=24,
		Thirtysecond=32,
		ThirtysecondTrip=48
	};
	void tick();
	Step steps[64];
private:
	unsigned char notesPerBar;
	unsigned char length;
	unsigned char offset;
	char name[16];
	unsigned char currentStep;
}; // class Pattern
