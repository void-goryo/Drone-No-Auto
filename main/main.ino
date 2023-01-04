//Drone (no automation/no camera)
//Author: Gabriel Jones
//Date started: 1/4/23
//Version:  0.1
//Description:  This code is for a custome built drone that I am making. This code does not feature most automation that I would like to add in the furture due to the board that I will be using.
//              I am using a elegoo r3 for the main controller.



//declaring variables
int motor0 = 3;


void setup() {
  pinMode(motor0, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    int speed = Serial.parseInt();    //this allows a user to input a new int. the serial port will then assign the new value to "speed". The "()" is blank so the parseInt will not timeout
    if(speed > 0 && speed < 255){
      analogWrite(motor0, speed);
      Serial.println(speed);
    }
  }

}
