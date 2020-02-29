
// Driver set 1 does f/b
// Driver set 2 does l/r 

// Motor 1 Front
 
int enA2 = 2;
int in12 = 0;
int in22 = 1;
 
// Motor 2 Right
 
int enB1 = 4;
int in11 = 8;
int in21 = 9;

// Motor 3 Back
 
int enA2 = 3;
int in32 = 7;
int in42 = 6;
 
// Motor 4 Left
 
int enB1 = 5;
int in31 = 10;
int in41 = 11;
 
// Motor Speed Values - Start at zero
 
int MotorSpeed1 = 0;
int MotorSpeed2 = 0;

 
 
void setup()
 
{
 
  // Set all the motor control pins to outputs
 
  pinMode(enA1, OUTPUT);
  pinMode(enB1, OUTPUT);
  pinMode(in11, OUTPUT);
  pinMode(in21, OUTPUT);
  pinMode(in31, OUTPUT);
  pinMode(in41, OUTPUT);
  pinMode(enA2, OUTPUT);
  pinMode(enB2, OUTPUT);
  pinMode(in12, OUTPUT);
  pinMode(in22, OUTPUT);
  pinMode(in32, OUTPUT);
  pinMode(in42, OUTPUT);
   

 
void loop() {
 
  // Read the Key board
  // Determine which motion
  // Apply results to Direction
 
  if (incomingByte == 'w')
  {
    // This is forward
 
    // Set Motor 2 forward
 
    digitalWrite(in11, HIGH);
    digitalWrite(in21, LOW);
 
    // Set Motor 4 forward
 
    digitalWrite(in31, LOW);
    digitalWrite(in41, HIGH);

    // Set Motor Speeds
 
  }
  else if (incomingByte == 'd')
  {
    // This is right
 
    // Set Motor 1 right
 
    digitalWrite(in12, LOW);
    digitalWrite(in22, HIGH);
 
    // Set Motor 3 right
 
    digitalWrite(in32, HIGH);
    digitalWrite(in42, LOW);
 
    //Set Motor Speeds
 
  }
   else if (incomingByte == 's')
  {
    // This is backwards
 
    // Set Motor 2 back
 
    digitalWrite(in11, LOW);
    digitalWrite(in21, HIGH);
 
    // Set Motor 4 back
 
    digitalWrite(in31, LOW);
    digitalWrite(in41, HIGH);
 
    //Set Motor Speeds
 
  }
   else if (incomingByte == 'a')
  {
    // This is right
 
    // Set Motor 1 right
 
    digitalWrite(in12, HIGH);
    digitalWrite(in22, LOW);
 
    // Set Motor 3 right
 
    digitalWrite(in32, LOW);
    digitalWrite(in42, HIGH);
 
    //Set Motor Speeds
 
  }
  else
  {
    // This is Stopped
 
    MotorSpeed1 = 0;
    MotorSpeed2 = 0; 
 
  }
  
 
