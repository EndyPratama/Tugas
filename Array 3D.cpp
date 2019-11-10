#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int arr[2][3][3]={
			//1
			{
				{1,1,2},// 0 + 9 + 16 = 25
				{1,4,6},// 16 + 0 + 9 = 25
				{5,4,9},
			},
			//2
			{
				{5,-1,2},// 16 + 9 + 0 = 25
				{1,2,2},// 0 + 16 + 9 = 25
				{1,-2,-1},
			},
		};
	
	for(int i = 0; i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("Jalur 1\n");
	int x0=arr[0][0][0]-arr[0][1][0];
	int y0=arr[0][0][1]-arr[0][1][1];
	int z0=arr[0][0][2]-arr[0][1][2];
	int a0=(x0*x0)+(y0*y0)+(z0*z0);
	float tahap1 = sqrt(a0);
	printf("tahap1 : %.2f\n",tahap1);
	
	int x1=arr[0][1][0]-arr[0][2][0];
	int y1=arr[0][1][1]-arr[0][2][1];
	int z1=arr[0][1][2]-arr[0][2][2];
	int a1=(x1*x1)+(y1*y1)+(z1*z1);
	float tahap2 = sqrt(a1);
	printf("tahap2 : %.2f\n",tahap2);
	
	float hasil1=tahap1+tahap2;
	printf("\nPanjang jalur 1 : %.2f\n\n",hasil1);
	
	printf("Jalur 2\n");
	int x2=arr[1][0][0]-arr[1][1][0];
	int y2=arr[1][0][1]-arr[1][1][1];
	int z2=arr[1][0][2]-arr[1][1][2];
	int a2=(x2*x2)+(y2*y2)+(z2*z2);
	float tahap3 = sqrt(a2);
	printf("tahap1 : %.2f\n",tahap3);
	
	int x3=arr[1][1][0]-arr[1][2][0];
	int y3=arr[1][1][1]-arr[1][2][1];
	int z3=arr[1][1][2]-arr[1][2][2];
	int a3=(x3*x3)+(y3*y3)+(z3*z3);
	float tahap4 = sqrt(a3);
	printf("tahap2 : %.2f\n",tahap4);
	
	float hasil2=tahap3+tahap4;
	printf("\nPanjang jalur 2 : %.2f",hasil2);
}
