#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int pangkat(int x, int y){
	if(y==0){
		return 1;
	}
	else {
		return x * pangkat(x,y-1);
	}
}

main(){
	int a = 1;
	int p,x,y;
	int hasil = 1; 
	
	while(a==1){
		printf("Selamat datang di program perpangkatan\n");
		printf("1. Rekursif\n");
		printf("2. Biasa\n");
		printf("3. X-it\n");
		printf("Silahkan pilih cara yang ingin digunakan: ");
		scanf("%d",&p);
		
		switch(p){
			case 1:
				printf("Masukkan angka yang akan di pangkatkan : ");
				scanf("%d",&x);
				printf("Masukkan pangkat : ");
				scanf("%d",&y);
				printf("Hasil dari %d pangkat %d = %d ",x,y,pangkat(x,y));
				printf("\nIngin melakukan lagi??\n1. ya\n2. tidak");
				scanf("%d",&a);
				printf("\n");
				system("cls");
				break;
			case 2:
				printf("Masukkan angka yang akan dipangkatkan : ");
				scanf("%d",&x);
				printf("Masukkan Pangkat : ");
				scanf("%d",&y);
	
				while(y>0){
					//int hasil = x;
					hasil = hasil * x;
					y--;
				}
				printf("Hasil = %d",hasil);
				printf("\nSelesai\n");
				hasil = 1;
				printf("Ingin melakukan lagi??\n1. ya\n2. tidak");
				scanf("%d",&a);
				printf("\n");
				system("cls");
				break;
			case 3:
				a++;
				break;
	
		}
	}
	printf("Terima kasih.... :) ");
	
}
