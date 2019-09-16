#include "robot-config.h"
//This program is for using the yaw rate gyroscope
//A gyroscope is used to measure how far the robot has turned.
using namespace vex;
//Create the gyro object on three wire port A called GyroC
int main() {
    GyroC.startCalibration();//Start the gyro's calibration
    while (GyroC.isCalibrating()){//Wait for the gyro to finish
        task::sleep(25);
    }
    while (true){
        //Print the gyro's value to the brain screen
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("%d", GyroC.value(analogUnits::range12bit));//Use analogUnits::range12bit instead of rotationUnits::deg, because it is glitched
        //The gyro's angle will be printed as tenths of degrees, not degrees
        task::sleep(10);
    }
}
