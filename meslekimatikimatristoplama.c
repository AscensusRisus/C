#include<stdio.h>

int main(void){
	
	int satir, sutun, str1, stn1, i, j;
	printf("1 ve 2.matrisin satir ve sutun sayisini sirasiyla girin: ");
	scanf("%d%d%d%d",&satir,&sutun, &str1, &stn1);
	
	int matris[satir][sutun], matris1[str1][stn1];
	
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d. satirin %d. sutununu giriniz: ",(i+1),(j+1));
			scanf("%d", &matris[i][j]);
		}
	}
	for(i=0;i<str1;i++){
		for(j=0;j<stn1;j++){
			printf("%d. satirin %d. sutununu giriniz: ",(i+1),(j+1));
			scanf("%d", &matris1[i][j]);
		}
	}
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		
			matris[i][j]+=matris1[i][j];
			printf("%d. satirin %d. sutunu %d dir.\n",(i+1),(j+1),matris[i][j]);
	}
	}
	
	
/*	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++)
			printf("%d. satirin %d. sutunu %d dir.\n",(i+1),(j+1),matris[i][j]);
			
			
		
	}
*/	
}
