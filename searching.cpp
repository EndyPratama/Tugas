#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
	int ulang=1;
	int pilihan;
	int array[8]={8, 10, 6, -2, 11, 7, 1, 100};
	int len = sizeof(array) / sizeof(array[0]);
  	int i=0, c, n, search;
  	
  	int arr[9] = {3, 9, 11, 12, 15, 17, 23, 31, 35};
  	int panjang = sizeof(arr) / sizeof(arr[0]);
	int first,last,middle;
  	
	while(ulang==1){
		printf("Menu\n");
		printf("1. sequential\n");
		printf("2. Sentinal\n");
		printf("3. Binary\n");
		printf("0. X-it\n");
		printf("Masukkan pilihan : ");
		scanf("%d",&pilihan);
		switch(pilihan){
			case 1:
				printf("\n===============================Sequential================================\n");
				printf("Indeks\t: ");
				for (c=0;c<8;c++){
  					printf("%d\t ",c);
  				}
  				printf("\nNilai\t: ");
				for (c=0;c<8;c++){
  					printf("%d\t ",array[c]);
  				}
  				
  				printf("\nEnter a number to search : ");
  				scanf("%d", &search);

  				for (c = 0; c < len; c++){
  					printf("Looping ke %d\n",c+1);
    				if (array[c] == search){
      					printf("Data ada pada indeks ke %d \n",c+1);
      					break;
    				}
  				}
  				
  				if (c == len)
    				printf("Maaf anda belum beruntung\n");
    				getch();
    				system("cls");
				break;
			case 2:
				printf("\n================================Sentinal================================\n");
  				printf("Indeks\t: ");
				for (c=0;c<8;c++){
  					printf("%d\t ",c);
  				}
  				printf("\nNilai\t: ");
				for (c=0;c<8;c++){
  					printf("%d\t ",array[c]);
  				}
  				
  				printf("\nEnter a number to search : ");
  				scanf("%d", &search);
  				i=0;
  				while(array[i] != NULL){
					printf("Looping ke %d\n",i+1);
    				if (array[i] == search){
      					printf("Data ada pada indeks ke %d \n",i);
      					break;
    				}
    				i++;
    				if (i == len ){
    					break;
    				}
  				}
  				if (i == len)
    				printf("Maaf anda belum beruntung\n");
    				getch();
    				system("cls");
				break;
			case 3:
				printf("\n=================================Binary================================\n");
				printf("Indeks\t: ");
				for (c=0;c<8;c++){
  					printf("%d\t ",c);
  				}
  				printf("\nNilai\t: ");
				for (int c=0;c<8;c++){
  					printf("%d\t ",arr[c]);
  				}
				first = 0;
				last = panjang - 1;
				middle = (first+last)/2;
 				printf("\nMasukkan data yang ingin di cari : ");
 				scanf("%d",&search);
				while (first <= last) {
    				if (arr[middle] < search)
       					first = middle + 1;    
    				else if (arr[middle] == search) {
						printf("%d berada pada indeks ke  %d.\n", search, middle);
        				break;
      				}
      				else
        				last = middle - 1;
 				    	middle = (first + last)/2;
   				}
   				if (first > last)
      				printf("%d Tidak ada\n", search);
      				getch();
    				system("cls");
					break;
				
				break;
			case 0:
				ulang=0;
		}
	}
}
