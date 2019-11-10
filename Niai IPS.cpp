#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
	char nama[20];
	char NPM[20];
	float nilai[10];
	int matkulpilihan[10];
	float IPK;
};
typedef struct mahasiswa maha;

main(){
	maha mahasiswa_nilai[10];
	
	char nama_matkul[10][25]={
		"Metode Numerik",
		"Sistem Operasi",
		"Bela Negara",
		"Kewirausahaan"
		};
	float SKS[10]={3,3,2,2};
	int a=0, 
		input,
		i=0, 
		jumlah, 
		matkul;
	float	totalnilai=0, 
			totalSKS=0;
			 
	while(a==0){
		system("cls");
		puts("===============================");
		puts("\tData Nilai Mahasiswa");
		puts("\t1. Input Data");
		puts("\t2. View Data");
		puts("\t0. X-it");
		puts("===============================");
		fflush(stdin);
		printf("\nMasukkan pilihan : ");
        scanf("%d",&input);
		system("cls");
		
		switch(input){
			case 1 :
				puts("==========================================");
				printf("||\t\tInput Data\t\t||\n");
				puts("==========================================");
				fflush(stdin);
				printf("Masukkan Nama\t\t: ");
				gets(mahasiswa_nilai[i].nama);
				fflush(stdin);
				printf("Masukkan NPM\t\t: ");
				gets(mahasiswa_nilai[i].NPM);
				printf("--------------------------------------\n");
				printf("Daftar Mata Kuliah\n");
				printf("1. Metode Numerik \n2. Sistem Operasi \n3. Bela Negara \n4. Kewirausahaan\n");
				printf("--------------------------------------\n");
				fflush(stdin);
				printf("Range Nilai 1-4\n");
				for(int j=0;j<4;j++){
					fflush(stdin);
					printf("Masukkan Nilai %s : \n", nama_matkul[j]);
					scanf("%f",&mahasiswa_nilai[i].nilai[j]);
				}
				for(int n=0;n<4;n++){
					totalnilai += ((mahasiswa_nilai[i].nilai[n])*(SKS[n]));
					totalSKS += SKS[n];
				}
				mahasiswa_nilai[i].IPK = totalnilai/totalSKS;
				i++;
				break;
			case 2 :
				if(i==0){
					printf("===== Data tidak Ada =====");
				}
				else{
					printf("===========================================");
					printf("\n\tData Nilai Mahasiswa");
					printf("\n===========================================\n");
					for(int b=0;b<i;b++){
						printf("\nNama Mahasiswa\t\t: %s",mahasiswa_nilai[b].nama);
						printf("\nNPM Mahasiswa\t\t: %s\n",mahasiswa_nilai[b].NPM);
						printf("\nNilai Mata kuliah ");
						for(int a=0;a<4;a++){
							printf("\n>%s\t\t: %f", nama_matkul[a],mahasiswa_nilai[b].nilai[a]);
						}
						printf("\n\nIPS\t\t\t: %f\n",mahasiswa_nilai[b].IPK);
					}
				} 
				getch();
				break;			
			case 0 :
				a=1;
		}
	}	
}
