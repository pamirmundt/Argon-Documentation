#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	
	// Get encoding mode
	int j1 = myBase.joint1.getEncodingMode();

	while(1){
		// Print encoding mode to serial
		pc.printf("%d \r\n", j1);
		wait_ms(100);

	}

}