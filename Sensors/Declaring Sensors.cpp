//See the declaring motors.cpp file for information about object oriented programming

//To declare a potentiometer: 
pot potentiometerName = pot(Brain.ThreeWirePort.A);//Declares a potentiometer object on port A

//To declare a bumper switch:
bumper bumperName = bumper(Brain.ThreeWirePort.A);//Declares a bumper switch object on port A

//To declare a limti switch:
limit limitName = limit(Brain.ThreeWirePort.A); //Declare a limit switch object on port A
