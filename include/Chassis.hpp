#include "main.h"
#pragma once

extern ADIEncoder leftEncoder;
extern ADIEncoder rightEncoder;

extern Motor frontLeftMotor;
extern Motor backLeftMotor;
extern Motor frontRightMotor;
extern Motor backRightMotor;
extern std::shared_ptr<ChassisController> chassis;

extern void ChassisOpcontrol(void* param);