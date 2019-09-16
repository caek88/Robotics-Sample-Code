#include "robot-config.h"
//This program is for using ditigal sensors
//Digital sensors return a state of only 0 or 1

using namespace vex;

//Create a bumper object on three wire port A called BumpFoo
//Create a limit switch object on three wire port B called LimFoo
//Create a generic digital input on three wire port C called DitigalFoo

int main() {
    while (true){
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("%s", BumpFoo.pressing()?"true":"false");//Print whether the bumper switch is pressed
        Brain.Screen.newLine();
        Brain.Screen.print("%s", LimitFoo.pressing()?"true":"false");//Print whether the limit switch is pressed
        Brain.Screen.newLine();
        Brain.Screen.print("%d", DigitalFoo.value());//Print whether the digital input is 0 or 1
        task::sleep(10);
    }
}
