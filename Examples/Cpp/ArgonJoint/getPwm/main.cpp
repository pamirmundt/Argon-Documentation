#include "mbed.h"
#include "Argon.h"

// Create a ArgonBase object
ArgonBase myBase;

// Create a Serial object
Serial pc(serialTX, serialRX);

int main(){
	// Set PWM
	myBase.joint1.setPwm();

	// Get PWM
	int j1 = myBase.joint1.getPwm();

	while(1){
		// Print pwm value
		pc.printf("%d \r\n", j1);
		wait_ms(100);

	}

}