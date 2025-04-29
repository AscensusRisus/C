#include <stdio.h>

int main(void){
	#define  pi 3.1415
	//const float pi=3.1415;
	int r;
	float Alan,Cevre;
	printf("Dairenin alan ve cevre hesabi icin bir yaricap degeri giriniz:\n");
	scanf("%d",&r);
	Alan=pi*r*r;
	Cevre=2*pi*r;
	printf("Dairenin Alani:%f",Alan);
	printf("Dairenin Cevresi:%f",Cevre);
	return 0;
	
	
}

