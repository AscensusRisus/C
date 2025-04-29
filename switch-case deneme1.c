#include <stdio.h>

int main(void){
	int ay;
	printf("Kac gun surdugunu ogrenmek istediginiz ayin sayi degerini giriniz:\n");
	scanf("%d", &ay);
	
	switch(ay){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			puts("31 gundur.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			puts("30 gundur.");
			break;
		case 2:
			puts("28 veya 29 gundur.");
			break;
		default:
			puts("Gecersiz ay degeri girdiniz.");
	}
	return 0;
}

