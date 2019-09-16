#include "robot-config.h"
//This program is for making the robot do a swing turn with a two motor drive
using namespace vex;//Reference the vex class

int main(){
    //To make the robot, you have to set the two motors to different speeds
    //In a swing turn, one side of the chassis moves while the other stays still
    //Right Swing Turn:
    MtrLeft.spin(directionType::fwd, 100, velocityUnits::pct);//Set the left motor to 100% power forwards
    MtrRight.spin(directionType::fwd, 0, velocityUnits::pct);//Set the right motor to 0% power
    task::sleep(1000);//Pause for 1 second (1000 milliseconds)
    MtrLeft.stop();
    MtrRight.stop();//Stop both motors (They are still spinning after task::sleep(1000);)
    //Change which motor moves to do a left swing turn
}
