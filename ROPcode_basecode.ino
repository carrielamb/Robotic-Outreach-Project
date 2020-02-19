//
   === Robotics Outreach Project === 
  by Carrie Lamb and Fransico Mayorga
  ~ University of California Irvine ~
//

// figure out what libaries we need

// program the radio

unsigned long lastReceiveTime = 0;
unsigned long currentTime = 0;
// Define the stepper motors and the pins the will use

int wheelSpeed = 1500;
// structs defined from the controllor


void setup() {
  // Set initial seed values for the steppers
  FrontWheel.setMaxSpeed(3000);
  BackWheel.setMaxSpeed(3000);
  Right.setMaxSpeed(3000);
  Left.setMaxSpeed(3000);
// begin recieving radio input 
}
// needed if we bring in a control not needed for tests
  //void loop() {
  //  // Check whether we keep receving data, or we have a connection between the two modules
  //  currentTime = millis();
  //  if ( currentTime - lastReceiveTime > 1000 ) { 
  //    resetData(); 
  //  }
  //  // Check whether there is data to be received
  //  if (radio.available()) {
  //    radio.read(&data, sizeof(Data_Package)); 
  //    lastReceiveTime = millis(); 
  //  }

  
void loop() {
  if (forward) {
    moveForward();
  }
  else if (backward) {
    moveBackward();
  }
  else if (left) {
    moveLeft();
  }
  else if (Right) {
    moveRight();
  }
  else if (up right) {
    moveRightForward();
  }
  else if (up left) {
    moveLeftForward();
  }
  else if (down right) {
    moveRightBackward();
  }
  else if (down left) {
    moveLeftBackward();
  }
  else if (right spin) {
    rotateRight();
  }
  else if (left spin) {
    rotateLeft();
  }
  else {
    stopMoving();
  }
  // Execute the steps
  FrontWheel.runSpeed();
  BackWheel.runSpeed();
  RightWheel.runSpeed();
  LeftWheel.runSpeed();
  
// Clockwise is positive
}
void moveForward() {
  FrontWheel.setSpeed(0);
  BackWheel.setSpeed(0);
  RightWheel.setSpeed(wheelSpeed);
  LeftWheel.setSpeed(wheelSpeed);
}
void moveBackward() {
  FrontWheel.setSpeed(0);
  BackWheel.setSpeed(0);
  RightWheel.setSpeed(-wheelSpeed);
  LeftWheel.setSpeed(-wheelSpeed);
}
void moveRight() {
  FrontWheel.setSpeed(wheelSpeed);
  BackWheel.setSpeed(wheelSpeed);
  RightWheel.setSpeed(0);
  LeftWheel.setSpeed(0);
}
void moveLeft() {
  FrontWheel.setSpeed(-wheelSpeed);
  BackWheel.setSpeed(-wheelSpeed);
  RightWheel.setSpeed(0);
  LeftWheel.setSpeed(0);
}
void moveRightForward() {
  FrontWheel.setSpeed(wheelSpeed);
  BackWheel.setSpeed(0);
  RightWheel.setSpeed(wheelSpeed);
  LeftWheel.setSpeed(0);
}
void moveRightBackward() {
  FrontWheel.setSpeed(0);
  BackWheel.setSpeed(wheelSpeed);
  RightWheel.setSpeed(-wheelSpeed);
  LeftWheel.setSpeed(0);
}
void moveLeftForward() {
  FrontWheel.setSpeed(-wheelSpeed);
  BackWheel.setSpeed(0);
  RightWheel.setSpeed(0);
  LeftWheel.setSpeed(wheelSpeed);
}
void moveLeftBackward() {
  FrontWheel.setSpeed(0);
  BackWheel.setSpeed(-wheelSpeed);
  RightWheel.setSpeed(0);
  LeftWheel.setSpeed(-wheelSpeed);
}
void rotateLeft() {
  FrontWheel.setSpeed(-wheelSpeed);
  BackWheel.setSpeed(-wheelSpeed);
  RightWheel.setSpeed(-wheelSpeed);
  LeftWheel.setSpeed(-wheelSpeed);
}
void rotateRight() {
  FrontWheel.setSpeed(wheelSpeed);
  BackWheel.setSpeed(wheelSpeed);
  RightWheel.setSpeed(wheelSpeed);
  LeftWheel.setSpeed(wheelSpeed);
}
void stopMoving() {
  FrontWheel.setSpeed(0);
  BackWheel.setSpeed(0);
  RightWheel.setSpeed(0);
  LeftWheel.setSpeed(0);

}
void resetData() {
  // Reset the values when there is no radio connection - Set initial default values

}
