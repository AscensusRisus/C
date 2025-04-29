#include<stdio.h>

main(){
	
	int satir, sutun, i, j, det1,det2,det3, determinant;
	printf("matrisin satir ve sutun sayisini sirasiyla girin: ");
	scanf("%d%d",&satir,&sutun);
	
	int matris[satir][sutun];
	
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d. satirin %d. sutununu giriniz: ",(i+1),(j+1));
			scanf("%d", &matris[i][j]);
		}
	}	
	det1= matris[0][0]*(matris[1][1]*matris[2][2]-matris[1][2]*matris[2][1]);
	det2= matris[0][1]*(matris[1][0]*matris[2][2]-matris[1][2]*matris[2][0]);
	det3= matris[0][2]*(matris[1][0]*matris[2][1]-matris[1][1]*matris[2][0]);
	determinant= det1-det2+det3;
	printf("Matrisin determinanti: %d", determinant);
}
