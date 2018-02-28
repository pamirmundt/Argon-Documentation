#include "mbed.h"
#include "Argon.h"

// Create an ArgonBase object
ArgonBase myBase;

int main(){
	
	// ArgonJoint objects can be accessed directly through a ArgonBase object
	myBase.joint1.setPWM(512);
	myBase.joint2.setPWM(512);
	myBase.joint3.setPWM(512);
	myBase.joint4.setPWM(512);

	while(1){

		// Loop

	}

}