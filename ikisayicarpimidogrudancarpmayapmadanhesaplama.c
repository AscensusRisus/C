#include <stdio.h>

main(void){
	int sayac=0;
	int A,B;
	int T=0,K;
	printf("Carpilmasi icin iki sayi giriniz: \n");
	scanf("%d%d",&A,&B);
	while(B>=1){
		sayac++;
		printf("%d.Dongu\n",sayac);
		int satir=1;
		printf("%d.satir %d=%d%%2 \n",satir,K,B);
		K=B%2; 
		printf("Sonuc: %d\n",K);
		satir++;
		printf("%d.satir %d=%d+(%d*%d) \n",satir,T,T,A,K);
		T=T+(A*K);
		printf("Sonuc: %d\n",T);
		satir++;
		printf("%d.satir %d=%d*2 \n",satir,A,A);
		A=A*2;
		printf("Sonuc: %d\n",A);
		satir++;
		printf("%d.satir %d=%d/2 \n",satir,B,B);
		B=B/2;
		printf("Sonuc: %d\n",B);
		
	}	
	printf("Carpim: %d.",T);
}
