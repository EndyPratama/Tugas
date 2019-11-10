#include <stdio.h>
#include <conio.h>

int main(){ 
	int cari,low,high;	//deklarasi
	bool berhenti = false;	//deklarasi
	
	int arr[9] = {3, 9, 11, 12, 15, 17, 23, 31, 35};	//array
	int n = sizeof(arr)/sizeof(arr[0]); 	//menentukan panjang array
	
	printf("Indeks\t: ");	//print
	for (int c=0;c<n;c++){
  		printf("%d\t ",c);
  	}
  	printf("\nNilai\t: ");	//print
	for (int c=0;c<n;c++){
  		printf("%d\t ",arr[c]);
  	}
	
	printf("\nMasukkan angka yang dicari : ");
	scanf("%d",&cari);
	
	low = 0;
	high = (n-1); 
	int posisi;
	
	while(berhenti != true){
		posisi = ((cari - arr[low])/(arr[high]-arr[low]))*(high-low)+low;	//rumus
		printf("loop ke-%d\n",posisi+1);
		//perhitungan / pembuktian (boleh dipahami boleh tidak)
		//indeks 1 nilai 9
		//pos= 	((9-3)/(35-3))*(8-0)+0
		//pos= 	((6)/(32))*8+0
		//pos= 	1,5 ~> 1
		
		//nilai 13
		//loop 1
		//pos= 	((13-3)/(35-3))*(8-0)+0
		//pos= 	((10)/(32))*8
		//pos= 	2,5 ~> 2 (arr[2]=11)
		
		//loop 2 low = pos+1
		//pos= 	((13-12)/(35-12))*(8-3)+3
		//		((1)/(23))*5+3
		//		3,217 ~> 3 (arr[3]=12)
		//dst.
		if(arr[posisi] == cari){
			printf("%d terdapat pada indeks ke - %d",cari,posisi);
			berhenti = true;	//jika sudah memenuhi maka akan keluar dari while
		}
		else if(arr[posisi] < cari){
			printf("%d < %d\n",arr[posisi],cari);	//hanya untuk cek loop
			low = posisi + 1;	//rumus
		}
		else{//terjadi jika if dan else if tidak terpenuhi atau jika data yang dimasukkan tidak ada
			printf("%d < %d\n",arr[posisi],cari);
			printf("Salah\n");
			printf("\nData tidak ada");
			berhenti = true;
		}
	}	
}

