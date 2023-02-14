#pragma config(Sensor, S4,     ultra,          sensorEV3_Ultrasonic)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define LEFT_MOTOR moterC
#define RIGHT_MOTOR moterB

task main()
{
	int degree, count = 0;
	float angle = 180.0;
	float radius = 2.8;
	float axis = 12.0 / 2.0;
	float angle_a = 0.0, angle_b = 0.0;

	degree = (int)(axis / radius * angle);

	displayTextLine(0, "%d", degree);
	resetMotorEncoder(motorB);
	resetMotorEncoder(motorC);
	setMotorTarget(motorB, degree, 7);
	setMotorTarget(motorC, -degree, 7);

	while (count != 2){
		if (SensorValue(ultra) < 15 && count == 0) {
			angle_a = nMotorEncoder[motorB];
			count++;
			displayTextLine(0, "%d", count);
			wait1Msec(1300);
		}
		else if (SensorValue(ultra) < 15 && count == 1) {
			angle_b = nMotorEncoder[motorB];
			count++;
			displayTextLine(0, "%d", count);
			motor[motorB] = 0;
			motor[motorC] = 0;
		}
	}
	resetMotorEncoder(motorB);
	resetMotorEncoder(motorC);

	degree = (angle_a - angle_b) / 2;
	setMotorTarget(motorB, degree, 10);
	setMotorTarget(motorC, -degree, 10);
  wait1Msec(3000);

	motor[motorB] = 20;
	motor[motorC] = 20;
	wait1Msec(2000);

	motor[motorB] = 0;
	motor[motorC] = 0;
}