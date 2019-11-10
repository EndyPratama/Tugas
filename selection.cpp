#include <stdio.h>
#include <conio.h>
//selection sort
int main(){
	int x,y;
	int arr[9]={6,1,9,2,5,4,7,8,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Angka = ");
	for	(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	int indeks;
	printf("\nj		indeks\n");
	for(int i=0; i<n; i++){
		indeks = i;
		for(int j=i; j<n; j++){
			if(arr[j]<arr[indeks]){	
				printf("Masuk\n");
//				printf("\n%d < %d\n",arr[j],arr[indeks]);
				indeks=j;
			}
		}
		x=arr[indeks];
		arr[indeks]=arr[i];
		arr[i]=x;
	}
	printf("\nAngka = ");
	for	(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
}
