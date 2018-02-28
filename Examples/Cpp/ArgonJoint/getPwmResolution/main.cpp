#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){

	// Get PWM resolution
	int j1 = myBase.joint1.getPwmResolution();

	while(1){
		// Print PWM resolution
		pc.printf("%d \r\n", j1);
		wait_ms(100);

	}

}