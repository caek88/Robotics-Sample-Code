#include "robot-config.h"
//This program uses an alternative function to make the motors move a certain more distance
//This function is more accurate than the other methods
using namespace vex;//Reference the vex class

int main(){
    //Make the robot drive straight for 720 degrees (2 rotations)
    MtrLeft.resetRotation();//Reset the motor encoder rotations
    MtrRight.resetRotation();
    MtrLeft.startRotateTo(720, rotationUnits::deg, 100, velocityUnits::pct); //Make the left motor move to 720 degrees
    MtrRight.startRotateTo(720, rotationUnits::deg, 100, velocityUnits::pct); //Make the right motor move to 720 degrees
    //The startRotateTo command will move to 720 degrees and then holds position
    //it doesn't wait for the rotation to be completed before continuing in the program
    //The startRotateTo command can be used to make multiple motors spin to different distances (The left motor goes to one position while the right motor goes to the other)
    while (!MtrLeft.isSpinning() && !MtrRight.isSpinning()){
        task::sleep(25);//Check every 25 milliseconds, so that the processor is not overloaded with the loop
    }//wait until both motors have stopped
}
