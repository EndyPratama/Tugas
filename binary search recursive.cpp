#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int binary(int arr[],int first, int last, int search){
	while(first<=last){
		int mid = (first+last)/2; //0+8
		if(arr[mid]==search)	//x=9
			printf("%d ada pada indeks ke - %d\n",search,mid);
		if (arr[mid]<search)
			first=mid+1;
//			binary(arr,mid+1,last,search);
		else
			last=mid-1;
//			binary(arr,first,mid-1,search);
	}
	return -1;
}

main(){
	int arr[] = {3, 9, 11, 12, 15, 17, 23, 31, 35};
	int n = sizeof(arr)/sizeof(arr[0]);
	int search;
	printf("Indeks\t: ");
	for (int c=0;c<n;c++){
  		printf("%d\t ",c);
  	}
  	printf("\nNilai\t: ");
	for (int c=0;c<n;c++){
  		printf("%d\t ",arr[c]);
  	}
	printf("\nMasukkan angka yang dicari : ");
	scanf("%d",&search);
	int result = binary(arr,0,n-1,search);
}
