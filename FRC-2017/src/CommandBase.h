#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H


#include <string>

#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/imgproc.hpp>

#include "Commands/Command.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/BallIntake.h"
#include "Subsystems/GearIntake.h"
#include "Subsystems/Climber.h"
#include "Subsystems/Shooter.h"
#include "OI.h"
#include "WPILib.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase:public Command{
	public:
		CommandBase(const std::string &name);
		CommandBase();
		static void init();
		// Create a single static instance of all of your subsystems
		static std::unique_ptr<DriveTrain> drivetrain;
		static std::unique_ptr<BallIntake> ballintake;
		static std::unique_ptr<GearIntake> gearintake;
		static std::unique_ptr<Climber> climber;
		static std::unique_ptr<Shooter> shooter;

		static std::unique_ptr<OI>	oi;

};

#endif
