/*
    Project name : H-Bridge Module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-h-bridge-module
*/

// H-Bridge Control Pins
int enA = 9; // PWM Speed Control for Motor A
int in1 = 8; // Direction Control for Motor A
int in2 = 7; // Direction Control for Motor A

void setup() {
  // Set the control pins as outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Run the motor forward for 2 seconds
  motorControl(255, HIGH, LOW);
  delay(2000);

  // Stop the motor for 1 second
  motorControl(0, LOW, LOW);
  delay(1000);

  // Run the motor backward for 2 seconds
  motorControl(255, LOW, HIGH);
  delay(2000);

  // Stop the motor for 1 second
  motorControl(0, LOW, LOW);
  delay(1000);
}

// Function to control the motor
void motorControl(int speed, int dir1, int dir2) {
  // Set the motor direction
  digitalWrite(in1, dir1);
  digitalWrite(in2, dir2);
  
  // Set the motor speed
  analogWrite(enA, speed);
}
