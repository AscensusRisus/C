#include <stdio.h>

int main(void){
	
	int vize;
	int final;
	float ortalama;
	
	printf("Lutfen sirasiyla vize, final notunuzu giriniz: \n");
	scanf("%d%d",&vize,&final);
	ortalama = ((vize*30)/100)+((final*70)/100);
	if(ortalama>=50){
		printf("Tebrikler! %.2f ile Dersten gectiniz.", ortalama);
	}
	else{
		printf("Maalesef %.2f ile dersten kaldiniz.", ortalama);
	}
	
}
