/* This program is designed to work with the Teemsy 2++ controlling stepper motors
 * 
 * Rob Stites
 */

#include <AccelStepper.h>

// Define a stepper and the pins it will use
AccelStepper stepper(1, 23, 22);

int pos = 3600;

void setup()
{  
  stepper.setMaxSpeed(10000);
  stepper.setAcceleration(100);
  stepper.moveTo(1000);
}

void loop()
{
  if (stepper.distanceToGo() == 0)
  {
    stepper.moveTo(-stepper.currentPosition());
  }
  stepper.run();
}
