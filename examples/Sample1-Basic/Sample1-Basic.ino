#include <Arduboy.h>
#include "ArdVoicelib.h"
#include "voices.h"

Arduboy arduboy;
ArdVoicelib ardvoice;

void setup() {
	arduboy.begin();
	arduboy.setFrameRate(30);
	ardvoice.playVoice(merry_q6);
}


void loop() {
	if (!(arduboy.nextFrame()))
		return;

	if (arduboy.pressed(B_BUTTON)){
		ardvoice.playVoice(merry_q6);
	}

	if (arduboy.pressed(A_BUTTON)){
		ardvoice.stopVoice();
	}
}

