#include<stdio.h>

main(){
	int x,ib,is,ic,i,n,tur=0;
	printf("Dizi kac elemanli olacak: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Dizinin %d. elemanini giriniz: \n", i+1);
		scanf("%d",&a[i]);
	}
	printf("Aramak istediginiz sayiyi girin: \n");
	scanf("%d",&x);
	ib=0; is=n-1; ic=(ib+is)/2;
	printf("Arama oncesi ib=%d,is=%d,ic=%d\n",ib,is,ic);
	while(ib<is){
		tur++;
		if(x==a[ic]){
			ib=is;
		}
		else if(x>a[ic]){
			ib=ic+1;
			ic=(ib+is)/2;
			printf("aramanin %d.turu ib=%d,is=%d,ic=%d\n",tur,ib,is,ic);
		}
		else{
			is=ic-1;
			ic=(ib+is)/2;
			printf("aramanin %d.turu ib=%d,is=%d,ic=%d\n",tur,ib,is,ic);
		}
			
			
		
	}
	if(x==a[ic]){
		printf("%d dizinin icinde var", x);
	}
	else{
		printf("Aradiginiz sayi dizide yok.");
	}
}
