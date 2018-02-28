#include "mbed.h"
#include "Argon.h"

// Create an ArgonBase object
ArgonBase myBase;

int main(){
	
	while(1){

		// Make the robot go forward, %12.5 power
		myBase.joint1.setPower(12.5f);
		myBase.joint2.setPower(12.5f);
		myBase.joint3.setPower(12.5f);
		myBase.joint4.setPower(12.5f);

		wait_ms(2000);

		// Make the robot stop
		myBase.joint1.setPower(0.0f);
		myBase.joint2.setPower(0.0f);
		myBase.joint3.setPower(0.0f);
		myBase.joint4.setPower(0.0f);

		wait_ms(2000);

		// Make the robot rotate right, %12.5 power
		myBase.joint1.setPower(12.5f);
		myBase.joint2.setPower(-12.5f);
		myBase.joint3.setPower(12.5f);
		myBase.joint4.setPower(-12.5f);

		wait_ms(2000);

		// Make the robot stop
		myBase.joint1.setPower(0.0f);
		myBase.joint2.setPower(0.0f);
		myBase.joint3.setPower(0.0f);
		myBase.joint4.setPower(0.0f);

	}

}