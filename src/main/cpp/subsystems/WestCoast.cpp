#include "../include/subsytems/WestCoast.hpp"

/* All init code for our subsystem is called in the constructor, this saves us from writing a 'init()' function */
WestCoast::WestCoast()
{
    /* Setup config */
    LEFT_MASTER.ConfigFactoryDefault();
    LEFT_SLAVE.ConfigFactoryDefault(); 
    RIGHT_MASTER.ConfigFactoryDefault();
    RIGHT_SLAVE.ConfigFactoryDefault();

    /* Setup pseudo motor group */
    LEFT_SLAVE.Follow(LEFT_MASTER);
    RIGHT_SLAVE.Follow(RIGHT_MASTER);

    /* Setup invertion type, one side must be inverted :) */
    LEFT_MASTER.SetInverted(LEFT_INVERTED);
    LEFT_SLAVE.SetInverted(LEFT_INVERTED);
    RIGHT_MASTER.SetInverted(RIGHT_INVERTED);
    RIGHT_SLAVE.SetInverted(RIGHT_INVERTED);

    DRIVETRAIN.SetSafetyEnabled(SAFETY_ENABLED);
}

void WestCoast::drive(double y, double x)
{
    /* We have input multipliers to slow down the bot :))) */
    DRIVETRAIN.ArcadeDrive(y * INPUT_MULTIPLIER_Y, x * INPUT_MULTIPLIER_X);
}