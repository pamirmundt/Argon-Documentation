#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	
	// Get the availability of joints
	int j1 = myBase.joint1.getAvailable();
	int j2 = myBase.joint2.getAvailable();
	int j3 = myBase.joint3.getAvailable();
	int j4 = myBase.joint4.getAvailable();

	while(1){
		// Print the joint availabilities to serial
		pc.printf("%d %d %d %d", j1, j2, j3, j4);
		wait_ms(100);

	}

}