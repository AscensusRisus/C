#include <stdio.h>

int main(void){
	short yil;
	
	printf("Bir yil degeri giriniz.\n");
	scanf("%d",&yil);
	
	if ((yil%4==0)&&(yil%100!=0)||(yil%400==0)){
		printf("ARTIK YIL");
	}
	
	else{
		printf("ARTIK YIL DEGIL");
	}
	return 0;
}
