#define LEFT_MOTOR motorC
#define RIGHT_MOTOR motorB
task main() {
motor[LEFT_MOTOR] = +30; motor[RIGHT_MOTOR] = +30;
wait1Msec(2000);
motor[LEFT_MOTOR] = +37; motor[RIGHT_MOTOR] = 0;
wait1Msec(1000);
motor[LEFT_MOTOR] = +30; motor[RIGHT_MOTOR] = +30;
wait1Msec(2000);
motor[LEFT_MOTOR] = 37; motor[RIGHT_MOTOR] = 0;
wait1Msec(1000);
motor[LEFT_MOTOR] = +30; motor[RIGHT_MOTOR] = +30;
wait1Msec(2000);
motor[LEFT_MOTOR] = 37; motor[RIGHT_MOTOR] = 0;
wait1Msec(1000);
motor[LEFT_MOTOR] = 30; motor[RIGHT_MOTOR] = 30;
wait1Msec(2000);

motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = 0;
wait1Msec(1000);
motor[LEFT_MOTOR] = 80; motor[RIGHT_MOTOR] = 0;
wait1Msec(1100);

motor[LEFT_MOTOR] = +30; motor[RIGHT_MOTOR] = +30;
wait1Msec(2000);
motor[LEFT_MOTOR] = +0; motor[RIGHT_MOTOR] = 37;
wait1Msec(1000);
motor[LEFT_MOTOR] = +30; motor[RIGHT_MOTOR] = +30;
wait1Msec(2000);
motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = 37;
wait1Msec(1000);
motor[LEFT_MOTOR] = +30; motor[RIGHT_MOTOR] = +30;
wait1Msec(2000);
motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = 37;
wait1Msec(1000);
motor[LEFT_MOTOR] = 30; motor[RIGHT_MOTOR] = 30;
wait1Msec(2000);
}
