#include<stdio.h>

int main(){
	int i,j,k=-1;
	int temp;
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(i=0;i<4;i++){
		k++;
		for(j=k+1;j<4;j++){
			temp=a[i][j]; a[i][j]=a[j][i]; a[j][i]=temp;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Matrisin %d. satirinin %d.sutunu %d dir\n",i+1,j+1,a[i][j]);
		}
	}
	
	return 0;
}
