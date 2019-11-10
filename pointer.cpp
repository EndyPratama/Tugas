#include <stdio.h>
#include <conio.h>

int main(){
	int npm;
	
	printf("Masukkan NPM : ");
	scanf("%d",&npm);
	
	printf("NPM : %d \n",npm);
	printf("Alamat : %d ",&npm);
	//&untuk menampilkan alamat dari yang dicari
	
	int x;
	int *px;
	
	x=10;
	px=&x;
	
	printf("\n\nx berada di slot memory nomer : %d",px);
	getch();
	printf("\n");
	printf("Nilai x : %d",x);
	printf("\n");
	printf("Nilai dari pointer (alamat x) : %d",*px); //*untuk menampilkan nilai, &untuk menampilkan alamat
}
