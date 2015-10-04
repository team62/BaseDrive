#pragma config(Motor,  port1,           rightWheel1,   tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           leftWheel2,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftWheel1,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightWheel2,   tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

void pre_auton()
{
  bStopTasksBetweenModes = true;

}

task autonomous()
{
	
}

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
    //tank drive
    
    //left wheels
    if(abs(vexRT(ch3)<10)) {
      motor[leftWheel1] = 0;
      motor[leftWheel2] = 0;
    } else {
  		motor[leftWheel1] = vexRT(Ch3);
  		motor[leftWheel2] = vexRT(Ch3);
    }
    
    //left wheels
    if(abs(vexRT(Ch2)<10)) {
      motor[rightWheel1] = 0;
      motor[rightWheel2] = 0;
    } else {
		  motor[rightWheel1] = vexRT(Ch2);
		  motor[rightWheel2] = vexRT(Ch2);
    }
		
		//Anywhere from 25-50 Msec pause
		wait1Msec(30); 
	}
}
