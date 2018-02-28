#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	
	// Get encoder tick per round
	int j1 = myBase.joint1.getEncoderTicksPerRound();

	while(1){
		// Print encoder ticks per round to serial
		pc.printf("%d \r\n", j1);
		wait_ms(100);

	}

}