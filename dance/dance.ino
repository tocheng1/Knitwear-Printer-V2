#include <Servo.h>

Servo left, right, up, down;  // creates servo objects to control servos
                              // twelve servo objects can be created on most boards
int downPin = 9; // orange
int upPin = 11; //blue
int leftPin = 3; // white
int rightPin = 6; // green

void setup()
{

}

void loop()
{
  up.attach(upPin);    // attaches the top servo on upPin

  up.write(70); // face down
  delay(3000);
  up.write(90);

  up.write(110); // face up
  delay(3000);
  up.write(90);

  up.detach();  // detaches the up servo so that it does not receive signals for other servos

  down.attach(downPin);  // attaches the bottom on downPin

  down.write(95); // in
  delay(1000);

  down.write(35); // out
  delay(1000);
  
  down.detach(); // detaches the down servo so that it does not receive signals for other servos
  
  right.attach(rightPin);   // attaches the right servo on rightPin

  right.write(0); // towards middle
  delay(1000);

  right.write(80); // away from middle
  delay(1000);

  right.detach();  // detaches the right servo so that it does not receive signals for other servos
  
  left.attach(leftPin);   // attaches the left servo on leftPin
  
  left.write(170); // towards middle
  delay(1000);

  left.write(50); // away from middle
  delay(1000);
  
  left.detach();  // detaches the left servo so that it does not receive signals for other servos
}
