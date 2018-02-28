#include "mbed.h"
#include "Argon.h"

// Create an ArgonBase object
ArgonBase myBase;

int main(){
	
	while(1){

		// Make the robot go forward, %12.5 speed
		myBase.joint1.setPWM(512);
		myBase.joint2.setPWM(512);
		myBase.joint3.setPWM(512);
		myBase.joint4.setPWM(512);

		wait_ms(2000);

		// Make the robot stop
		myBase.joint1.setPWM(0);
		myBase.joint2.setPWM(0);
		myBase.joint3.setPWM(0);
		myBase.joint4.setPWM(0);

		wait_ms(2000);

		// Make the robot rotate right, %12.5 speed
		myBase.joint1.setPwm(512);
		myBase.joint2.setPwm(-512);
		myBase.joint3.setPwm(512);
		myBase.joint4.setPwm(-512);

		wait_ms(2000);

		// Make the robot stop
		myBase.joint1.setPWM(0);
		myBase.joint2.setPWM(0);
		myBase.joint3.setPWM(0);
		myBase.joint4.setPWM(0);

	}

}