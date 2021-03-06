#ifndef MAIN_H
#define MAIN_H

#include <IterativeRobot.h>
#include <Joystick.h>
#include "DriveTrain.h"
#include <DigitalInput.h>
#include <Relay.h>

class main_robot: public IterativeRobot
{
public:
    main_robot();
    ~main_robot();
    void RobotInit();
    void TeleopInit();
    void AutonomousInit();
    void TestInit();
    void DisabledInit();
    void TeleopPeriodic();
    void AutonomousPeriodic();
    void DisabledPeriodic();
    void TestPeriodic();
private:
    DriveTrain* drive;
    Joystick* driverJoy;
    Joystick* gunnerJoy;
};

#endif // MAIN_H
