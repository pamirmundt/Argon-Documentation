#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	
	// Get gear ratio
	float j1 = myBase.joint1.getGearRatio();

	while(1){
		// Print gear ratio
		pc.printf("%f \r\n", j1);
		wait_ms(100);

	}

}