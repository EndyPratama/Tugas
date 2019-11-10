#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct alamat{
		char jln[25];
		char kota[10];
		char provinsi[15];
	};
struct lahir{
	int tgl;
	char bln[10];
	int thn;
};

struct utama{
	long int norek;
	char bank[8];
	char nama[15];
	float saldo;
	struct alamat al;
	struct lahir lh;
};
typedef struct utama ut;

void gotoXY(int x, int y){
	COORD k = {x,y}; //COORD merupakan fungsi koordinat, terdapat pada library windows.h
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
	//mengatur posisi kursor dengan x dan y yang telah di set.
}

void border(){
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\t#####################################################################################\n" //51
	       "\t###             ##                                                 ##             ###\n"
	       "\t#####           ##                                                 ##           #####\n"
	       "\t    #####       ##                                                 ##       #####    \n"
	       "\t        #####   ##                                                 ##   #####        \n"
	       "\t             #####                                                 #####             \n"
	       "\t             #####                                                 #####             \n"
	       "\t        #####   ##                                                 ##   #####        \n"
	       "\t    #####       ##                                                 ##       #####    \n"
	       "\t#####           ##                                                 ##        ####   \n"
	       "\t###             ##                                                 ##            ####\n"
	       "\t#####################################################################################\n");
}
int main(){
	ut data[10];
	int dat=0;
	int input,input1,input2,found;
	int a=0,n=0;

	float total = 0;
	
	while(a==0){
		border();
		gotoXY(35,12);printf("\tMenu : \n");
		gotoXY(35,13);printf("\t1. Input Data\n");
		gotoXY(35,14);printf("\t2. Tampilkan Data\n");
		gotoXY(35,15);printf("\t3. Tampilkan Saldo\n");
		gotoXY(35,16);printf("\t0. X-it\n");
		gotoXY(35,17);printf("\tMasukkan Pilihan : ");
		scanf("%d",&input);
		system("cls");
		switch(input){
			case 1:
				dat=1;
				printf("\n");
				printf("Silahkan Input Data Dengan Sesuai\n");
				fflush(stdin);
				data[n].norek = rand() %100000000+100000;
//				printf("Masukkan Nomer Rekening\t: ");
//				gets(data[n].norek);
				printf("Masukkan Nama Bank\t: ");
				gets(data[n].bank);
				printf("Masukkan Nama Nasabah\t: ");
				gets(data[n].nama);
				printf("Masukkan Saldo\t\t: ");
				scanf("%f",&data[n].saldo);
				fflush(stdin);
				printf("Masukkan Alamat\n");
				printf("Masukkan Jalan\t\t: ");
				gets(data[n].al.jln);
				fflush(stdin);
				printf("Masukkan Kota\t\t: ");
				gets(data[n].al.kota);
				printf("Masukkan Provinsi\t: ");
				gets(data[n].al.provinsi);
				printf("Masukkan Tgl,Bln,Thn\n");
				printf("Masukkan Tanggal Lahir\t: ");
				scanf("%d",&data[n].lh.tgl);
				fflush(stdin);
				printf("Masukkan Bulan Lahir\t: ");
				gets(data[n].lh.bln);
				printf("Masukkan Tahun Lahir\t: ");
				scanf("%d",&data[n].lh.thn);
				printf("\n");
				n++;
				system("cls");
				break;
			case 2:
				if(dat==0){
					printf("Data belum di inputkan\n");
					getch();
					system("cls");
				}
				else{
					border();
					gotoXY(35,12);printf("\tData Apa yang ingin anda cari : \n");
					gotoXY(35,13);printf("\t1. Semua Data\n");
					gotoXY(35,14);printf("\t2. Data berdasarkan Umur\n");
					gotoXY(35,15);printf("\t3. Data berdasarkan Kota\n");
					gotoXY(35,16);printf("\t4. Data berdasarkan Nomer Rekening\n");
					gotoXY(35,17);printf("\t0. Kembali\n");
					gotoXY(35,18);printf("\tPilihan : ");
					scanf("%d",&input1);
					system("cls");
					switch(input1){
						case 1:
							for(int j=0;j<n;j++){
								printf("Data ke - %d",j+1);
								printf("\n");
								printf("Nomer Rekening\t: %d\n",data[j].norek);
								printf("Nama Bank\t: %s\n",data[j].bank);
								printf("Nama\t\t: %s\n",data[j].nama);
								printf("Saldo\t\t: %.3f\n",data[j].saldo);
								printf("Alamat\t\t: %s\n",data[j].al.jln);
								printf("Kota\t\t: %s\n",data[j].al.kota);
								printf("Provinsi\t: %s\n",data[j].al.provinsi);
								printf("Tanggal Lahir\t: %d\n",data[j].lh.tgl);
								printf("Bulan Lahir\t: %s\n",data[j].lh.bln);
								printf("Tahun Lahit\t: %d ",data[j].lh.thn);
								printf("\n\n");
							}
							getch();
							system("cls");
							break;
						case 2:	
							int umur;
							printf("Masukkan Umur yang dicari : ");
							scanf("%d",&umur);
							
							printf("Menampilkan umur lebih dari %d\n",umur);
							int usia;
							usia=2019-umur;
							
							for(int o=0;o<n;o++){
								if(data[o].lh.thn<=usia){
									printf("Nama\t: %s\n",data[o].nama);
									printf("Tahun\t: %d\n",data[o].lh.thn);
								}
							}
							printf("Menampilkan umur kurang dari %d\n",umur);
							for(int p=0;p<n;p++){
								if(data[p].lh.thn>usia){
									printf("Nama\t: %s\n",data[p].nama);
									printf("Tahun\t: %d\n",data[p].lh.thn);
								}
							}
							getch();
							system("cls");
							break;
						case 3:
							fflush(stdin);
							found=0;
							char cari[10];
							printf("Masukkan Kota\t\t: ");
							gets(cari);
							printf("Menampilkan nasabah di kota %s\n",cari);
							fflush(stdin);
							for(int r=0;r<n;r++){
								if(strcmp(data[r].al.kota,cari)==0){
									printf("- Nama\t: %s\n",data[r].nama);
									printf("  Kota\t: %s\n",data[r].al.kota);
									found=1;
								}
							}
							if(found==0){
								printf("Data tidak ada");
							}
							getch();
							system("cls");
							break;
						case 4:
							fflush(stdin);
							found=0;
							char cari1[10];
							printf("Masukkan Nomer Rekening\t\t: ");
							gets(cari1);
							printf("Menampilkan Nasabah Dengan Nama %s\n",cari1);
							fflush(stdin);
							for(int r=0;r<n;r++){
								if(strcmp(data[r].nama,cari1)==0){
									printf("- Nama\t\t: %s\n",data[r].nama);
									printf("  N.Rekening\t: %s\n",data[r].norek);
									found=1;
								}
							}
							if(found==0){
								printf("Data tidak ada");
							}
							getch();
							system("cls");
							break;
						case 0:
							system("cls");
							break;
					}
				}
				break;
			case 3:
				
				
				if(dat==0){
					printf("Data belum di inputkan\n");
					getch();
					system("cls");
				}
				else{
					border();
					gotoXY(35,12);printf("\tData apa yang ingin ditampilkan\n");
					gotoXY(35,13);printf("\t1. Tampilkan Semua Saldo\n");
					gotoXY(35,14);printf("\t2. Tampilkan Saldo Terbesar\n");
					gotoXY(35,15);printf("\t3. Tampilkan Saldo Terkecil\n");
					gotoXY(35,16);printf("\t0. Kembali\n");
					gotoXY(35,17);printf("\tPilihan\t: ");
					scanf("%d",&input2);
					system("cls");
					switch(input2){
						case 1:
							for(int k=0;k<n;k++){
								total=total+data[k].saldo;
							}
							printf("Menampilkan total saldo %f \n",total);
							getch();
							system("cls");
							break;
						case 2:
							float max;
							max=data[0].saldo;
							for(int m=0;m<n;m++){
								if(data[m].saldo>max){
									max=data[m].saldo;
								}
							}
							printf("Saldo Miximum : %f\n",max);
							getch();
							system("cls");
							break;
						case 3:
							float min;
							min=data[0].saldo;
							for(int l=0;l<n;l++){
								if(data[l].saldo<min){
									min=data[l].saldo;
								}
							}
							printf("Saldo Minimum : %f\n",min);
							getch();
							system("cls");
							break;
						case 0:
							system("cls");
							break;
					}
				}//else case 3 input
				break;
			case 0:
				a=1;
				border();
				gotoXY(46,15);
				char salam[]= "Terimakasih...";
	
				for(int j=0;salam[j]!=NULL; j++){
					printf("%c",salam[j]);
					for(int k=0; k<=9999999;k++){
					}
				}
				gotoXY(0,30);
				exit(0);
				break;
		}//switch input
	}//while a	
}//int main

