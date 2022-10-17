

/*	Stanislav Chlup
	17.10. 2022
	plynule zrychleni a zpomaleni
	v 01
*/


int speed=0;




//zrychleni a zpomaleni

void rumpup(int a = 10/*zrychleni*/,int targetspeed = 100/*pozadovana rychlost*/){
	
	//zrychluje
	if(a>0){
		while(speed<targetspeed){
			speed+=a;
			setMotorSpeed(1, speed);
			setMotorSpeed(2, speed);
			delay(100);
		}
	}
	//zpomaluje
	else{
		while(speed>targetspeed){
			speed+=a;
			setMotorSpeed(1, speed);
			setMotorSpeed(2, speed);
			delay(100);
		}
	}
}
task main(){
	
	rumpup(10,100);
	delay(200);
	rumpup(-10,50);
	delay(2000);
}
