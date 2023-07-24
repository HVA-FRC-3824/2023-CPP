#ifndef AXE_H
#define AXE_H

#include <frc2/command/SubsystemBase.h>
#include <ctre/phoenix/motorcontrol/can/TalonFX.h>
#include "../Constants.h"
class Axe : public frc2::SubsystemBase
{
    public:
       void move_axe(double input);
    private:
        /* TalonFX's do not have a callable constructor, meaning they must constructs once declared, such as below */
        ctre::phoenix::motorcontrol::can::TalonFX Motor {AXE_MOTOR_ID};
};

#endif