#include<stdio.h>

int main(void){
	int sayi1,sayi2;
	printf("iki sayi giriniz:\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	do{
		if(sayi1%2 == 0){
			printf("%d\n",sayi1);
		}
		
		sayi1++;
	}while(sayi1<sayi2);
	
	return 0;
}
