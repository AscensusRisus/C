#include<stdio.h>
//C ij = AixBj 19,22,43,50
main(){
	int i,j,k;
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{5,6},{7,8}};
	int c[2][2]={{0,0},{0,0}};
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
			
		}
	}
	
	
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d.satir %d.sutun %d\n",i+1,j+1,c[i][j]);
		}}
}
