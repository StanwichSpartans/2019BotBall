#include <kipr/botball.h>
/**

Motors and More

Port 0 = Left Motor
Port 1 = Right Motor
Port 2 = Arm, Up and Down

Servos and Stuff

Port 0 = Claw, Open and Close
Port 1 = Arm, Left and Right
1024 is straight, higher turns left, lower turns right
Port 2 = Claw, Rotate


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

void ClawUp()
{

    motor(2, -50);
    msleep(1000);
    
}


int main()
{
    enable_servos();
    set_servo_position(1, 100)
    ClawUp();
    ForwardWTime(75, 10000);
    servo(1, 100);
    
    printf("Hello World\n");
    return 0;
}
