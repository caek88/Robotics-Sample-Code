#include "robot-config.h"
//This program is for using the potentiometer
//A potentiometer is used to measure how far an axle has turned and has a limited range of turning (It will break if you turn it too far)
//This is an analog sensor
using namespace vex;
//Create the potentiometer object on three wire port A called PotFoo
int main() {
    while (true){
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("%d\n", PotFoo.value(percentUnits::pct));//Measure as a percentage
        Brain.Screen.newLine();
        Brain.Screen.print("%d\n", PotFoo.value(rotationUnits::deg));//Measure as an angle * currently doesn't work
        Brain.Screen.newLine();
        Brain.Screen.print("%d", PotFoo.value(analogUnits::mV));//Measure in millivolts
        task::sleep(10);
    }
}
