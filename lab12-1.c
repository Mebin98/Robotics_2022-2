#pragma config(Sensor, S4,     ultra,          sensorEV3_Ultrasonic)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define LEFT_MOTOR moterC
#define RIGHT_MOTOR moterB

task main()
{
	int distance = 0;
	distance = SensorValue(ultra);
	if (distance > 30) {
		while (SensorValue(ultra) > 30) {
			distance = SensorValue(ultra);
			displayTextLine(0, "%d cm", distance);
			motor[motorB] = abs(distance - 30);
			motor[motorC] = abs(distance - 30);
		}
	}
	else if (distance < 30) {
		while (SensorValue(ultra) < 30) {
			distance = SensorValue(ultra);
			displayTextLine(0, "%d cm", distance);
			motor[motorB] = -(abs(distance - 30));
			motor[motorC] = -(abs(distance - 30));
		}
	}
}
