//If you are using C++ Pro, you need to use text to configure the robot

//The motors and parts that interact with the V5 brain make use of C++'s object-based program
//Tutorialspoint: When you define a class, you define a blueprint for a data type. 
//This doesn't actually define any data, but it does define what the class name means, 
//that is, what an object of the class will consist of and what operations can be performed on such an object.

//There is a class called "motor" that contains of all the ways you can interact with a motor
//When you create an object of the class "motor", you can use the name of that object to call the methods of the motor class on that object

//To define a motor object of class motor:

vex::motor motorObject = vex::motor(vex::PORT1);//This defines a motor called motorObject on port 1

//You can also define a motor object with more information such as whether the motor is reversed, or uses a different gear ratio:

vex::motor motorObject = vex::motor(vex::PORT1, true); //This defines a motor called motorObject on port 1 with its direction reversed set to true
vex::motor motorObject = vex::motor(vex::PORT1, vex::gearSetting::ratio36_1, true);//This defines a motor called motorObject on port 1 with the green gear pack and it's direction reversed
//The other gear ratios are ratio18_1 and ratio6_1
