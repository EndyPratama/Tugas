#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int x, y, ulang=1, pilihan;
	
	int arr[9] = {6,1,9,2,5,4,7,8,3};
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	printf("Angka = ");
	for	(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	while(ulang==1){
		printf("\n1. Ascending");
		printf("\n2. Descending");
		printf("\n0. Exit");
		printf("\nMasukkan Pilihan Anda = ");
		scanf("%d",& pilihan);
		switch (pilihan){
			case 1:{
				for(int i=0; i<n-1; i++){
					for(int j=0; j<n-1; j++){
						if(arr[j+1]<arr[j]){
							int x=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=x;
						}
					}
				}
				printf("\nAngka = ");
				for	(int i=0; i<n; i++){
					printf("%d\t", arr[i]);
				}
				break;
			}
			case 2:{
				for(int i=0; i<n-1; i++){
					for(int j=0; j<n-1; j++){
						if(arr[j+1]>arr[j]){
							int x=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=x;
						}
					}
				}
				printf("\nAngka = ");
				for	(int i=0; i<9; i++){
					printf("%d\t", arr[i]);
				}
				break;
			}
			case 0:
				ulang=0;
				break;
		}
	}
	return 0;
}
