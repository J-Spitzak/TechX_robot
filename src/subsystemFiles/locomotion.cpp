#include "main.h"

//HELPER FUNCTION:

void setDrive(int left, int right){
    driveBL = left;
    driveBR = right;
    driveML = left;
    driveMR = right;
    driveFL = left;
    driveFR = right;

}

//DRIVER CONTROL FUNCTIONS:

void setDriveMotors(){
    int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    if(abs(leftJoystick) < 10)
        leftJoystick = 0;
    if(abs(rightJoystick) < 10)
        rightJoystick = 0;

    setDrive(leftJoystick,rightJoystick);
}