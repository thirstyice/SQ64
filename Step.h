#pragma once

class Step {
public:
	enum Mode {
		Chord,
		Arp
	};
	unsigned char notes[8];
	void tick();
	void setMode(Mode newMode);
private:
	Mode mode;
	unsigned char gate;
	bool trail=false;

}; // class Step
