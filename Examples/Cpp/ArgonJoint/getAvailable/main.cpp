#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	
	// Get availability
	int j1 = myBase.joint1.getAvailable();

	while(1){
		// Print availability to serial
		pc.printf("%d \r\n", j1);
		wait_ms(100);

	}

}