#define LEFT_MOTOR motorC
#define RIGHT_MOTOR motorB


task main()
{
	 nVolume = 2;
   char dir[20];
   strcpy(dir,"RFFRFFRFFLFFLFFX");

   for(int i = 0; dir[i] != '\0'; i++)
   {
       if(dir[i] == 'F') {
         motor[LEFT_MOTOR] = +13; motor[RIGHT_MOTOR] = +13;
         wait1Msec(2000);
         playSound(soundBeepBeep);
         sleep(1000);
       }
       if(dir[i] == 'R') {
         motor[LEFT_MOTOR] = -12; motor[RIGHT_MOTOR] = +12;
         wait1Msec(500);
         playSound(soundBeepBeep);
         sleep(1000);
       }
       if(dir[i] == 'L') {
         motor[LEFT_MOTOR] = +12; motor[RIGHT_MOTOR] = -12;
         wait1Msec(500);
         playSound(soundBeepBeep);
         sleep(1000);
       }
       if(dir[i] == 'X') {
         motor[LEFT_MOTOR] = +0; motor[RIGHT_MOTOR] = 0;
         wait1Msec(2000);
         playSound(soundBeepBeep);
         sleep(1000);
       }
       motor[LEFT_MOTOR] = 0; motor[RIGHT_MOTOR] = 0;
       wait1Msec(2000);
   }
}
