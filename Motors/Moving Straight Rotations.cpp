#include "robot-config.h"
//This program is for making the robot move straight with a two motor drive
using namespace vex;//Reference the vex class
int main(){
    //Make the robot drive straight for 2 rotations
    MtrLeft.resetRotation();//Reset the motor encoder rotations
    MtrRight.resetRotation();
    MtrLeft.spin(directionType::fwd, 100, velocityUnits::pct);
    MtrRight.spin(directionType::fwd, 100, velocityUnits::pct);//Set each motor to 100% power forwards
    
    while (MtrLeft.rotation(rotationUnits::rev) < 2){//This is the only line of code different from the degree program
        task::sleep(25);//Check every 25 milliseconds
    }//wait until the left motor has gone 2 rotations
    MtrLeft.stop();
    MtrRight.stop();//Stop both motors (They are still spinning)
}
