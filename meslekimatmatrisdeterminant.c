#include<stdio.h>

int main(void){
	
	int satir, sutun, i, j, determinant;
	printf("matrisin satir ve sutun sayisini sirasiyla girin: ");
	scanf("%d%d",&satir,&sutun);
	
	int matris[satir][sutun];
	
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d. satirin %d. sutununu giriniz: ",(i+1),(j+1));
			scanf("%d", &matris[i][j]);
		}
	}	
	determinant= (matris[0][0]*matris[1][1])-(matris[0][1]*matris[1][0]);
	printf("Matrisin determinanti: %d", determinant);
}
