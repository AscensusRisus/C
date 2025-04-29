#include <stdio.h>

int main(void){
	int x;
	int y;
	int z;

	printf("Lutfen sirasiyla x,y,z sayilarini giriniz:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y&x>z){
		printf("x en buyuktur.");
	}else if (y>x&&y>z){
		printf("y en buyuktur.");
	}
	else if (z>x&&z>y){
		printf("z en buyuktur.");
	}
	else{
		printf("Sayilar esit.");
	}
	return 0;
}
