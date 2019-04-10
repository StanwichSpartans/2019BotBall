#include <kipr/botball.h>
/**
Port 0 = Left Motor
Port 1 = Right Motor

Port 0 = Open and Close Servo
Port 1 = Up and Down Servo
**/


int rotateSpeed = 50;

//A function that drives forward, takes an input of speed from 0-100
void Forward(int speed)
{

    motor(0, speed);
    motor(1, speed);

}

//The same as the forward function, but takes an additional parameter which waits after driving
void ForwardWTime(int speed, float waitTime)
{

    motor(0, speed);
    motor(1, speed);
    msleep(waitTime);
    ao();
}

//Turns right a certain number of degrees
void TurnRight(float degrees)
{
	float rotateTime = degrees * 23.2;
    
    motor(1, 0);
    motor(0, rotateSpeed);
    msleep(rotateTime);
    ao();
    
}

//Turns left a certain number of degrees
void TurnLeft(float degrees)
{
	float rotateTime = degrees * 23.2;
    
    motor(0, 0);
    motor(1, rotateSpeed);
    msleep(rotateTime);
    ao();
    
}

int main()
{

    return 0;
}
