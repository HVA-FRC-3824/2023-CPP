#ifndef WESTCOAST_H
#define WESTCOAST_H

#include "../Constants.h"
#include <frc2/command/SubsystemBase.h>
#include <ctre/phoenix/motorcontrol/can/WPI_TalonSRX.h>
#include <frc/drive/DifferentialDrive.h>

using namespace ctre::phoenix::motorcontrol::can;

class WestCoast : frc2::SubsystemBase
{
    public:
        WestCoast();
        void drive(double y, double x);
    private:
        /* TalonSRX's do not have a callable constructor, meaning they must constructs once declared, such as below */
        WPI_TalonSRX LEFT_MASTER  { L_MASTER_ID };
        WPI_TalonSRX LEFT_SLAVE   { L_SLAVE_ID  };
        WPI_TalonSRX RIGHT_MASTER { R_MASTER_ID };
        WPI_TalonSRX RIGHT_SLAVE  { R_SLAVE_ID  };
        frc::DifferentialDrive DRIVETRAIN { LEFT_MASTER, RIGHT_MASTER };
};

#endif