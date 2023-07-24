#include "../include/subsytems/Axe.hpp"

void Axe::move_axe(double input)
{
    /* Set's output voltage based on input from controller */
    Motor.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, input);
}