#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	
	// Get the joint number
	int j1 = myBase.joint1.getNumber();

	while(1){
		// Print the joint number to serial
		pc.printf("%d \r\n", j1);
		wait_ms(100);

	}

}