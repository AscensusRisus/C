#include<stdio.h>

main(void){	
	int x,y;
	printf("EBOB, EKOK hesabi icin iki tane sayi giriniz: \n");
	scanf("%d%d",&x,&y);
	int xx=x;
	int yy=y;
	int EBOB, EKOK;
	int iter = 0;
	
	while(x!=y){
		iter+=1;
		if(x>y){
			printf("%d.iterasyon, x>y, %d-%d=%d.\n",iter,x,y,x-y);
			x=x-y;
		}
		else{
			printf("%d.iterasyon, y>x, %d-%d=%d.\n",iter,y,x,y-x);
			y=y-x;
		}
	}
	EBOB=x;
	EKOK= xx * yy / EBOB;
	printf("EBOB: %d\n",EBOB);
	printf("EKOK: %d\n",EKOK);
}

