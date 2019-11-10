#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void jumlahData(node *head);
void hapusAkhir(node **head);
void hapusAwal(node **head);
void tambahAkhir(node **head);
void exit();

int main(){
	node *head;
	int pilih;
	int ulang = 0;  
  	head = NULL;
	while(ulang==0){
		system("cls");
    	printf("Pilihan Menu : \n");
    	printf("\t1. Tambah data di awal\n");
    	printf("\t2. Tambah data di tengah list\n");
    	printf("\t3. Hapus data\n");
    	printf("\t4. Cetak isi list\n");
    	printf("\t5. Jumlah semua data\n");
    	printf("\t6. Hapus data di awal list\n");
    	printf("\t7. Hapus data di akhir list\n");
    	printf("\t8. Tambah data di akhir\n");
    	printf("\t0. X-it\n");
    	printf("MASUKKAN PILIHAN : ");
    	fflush(stdin);
    	scanf("%d", &pilih);
		switch(pilih){
			case 1:
				tambahAwal(&head);
				break;
			case 2:
				tambahData(&head);
				break;
			case 3:
				hapusData(&head);
				break;
			case 4:
				tranverse(head);
	        	getch();
				break;
			case 5:
				jumlahData(head);
	    		getch();
				break;
			case 6:
				hapusAwal(&head);
				getch();
				break;
			case 7:
				hapusAkhir(&head);
		 		getch();
				break;
			case 8:
				tambahAkhir(&head);
				break;
			case 0:
				ulang=1;
				exit();
				getch();
			default:
				break;
		}
	} 
}
node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

void tambahAwal(node **head){
	int bil;
	node *pTemp;
	system("cls");
	fflush(stdin);
	printf("Masukkan bilangan (int) : ");
	fflush(stdin);
	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));

  	if (pTemp != NULL){
		pTemp->data = bil;
      	pTemp->next = NULL;
      	insertNode(head, NULL, pTemp);
  	}
  	else{
		printf("Alokasi memori gagal");
	    getch();
  	}
}

void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  system("cls");
  
  tranverse(*head);
  printf("\nPosisi penyimpanan setelah data bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }
  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
     printf("\nNode tidak ditemukan");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nAlokasi memeori gagal");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
}
}
void tranverse(node *head){
	node *pWalker;

	system("cls");
	pWalker = head;
	printf("Output : ");
	while (pWalker != NULL){
		printf("%d->", pWalker -> data);
		pWalker = pWalker -> next;
	}
	printf("NULL");
}

void insertNode(node **head, node *pPre, node *pNew){
	if (pPre == NULL){
    	pNew -> next = *head;
   		*head = pNew;
	}
	else {
   		pNew -> next = pPre -> next;
   		pPre -> next = pNew;
	}
}

void deleteNode(node **head, node *pPre, node *pCur){
	if (pPre == NULL)
		*head = pCur -> next;
	else
		pPre -> next = pCur -> next;
	free(pCur);
}

void hapusData(node **head){
	int pos;
	node *pCur, *pPre;
	system("cls");

tranverse(*head);
	printf("\nData yang akan dihapus : ");
	fflush(stdin);
	scanf("%d", &pos);

	pPre = NULL;
	pCur = *head;
	
	while (pCur != NULL && pCur -> data != pos) {
		pPre = pCur;
		pCur = pCur -> next;
	}

	if (pCur == NULL){
		printf("\nNode tidak ditemukan");
		getch();
	}
	else
		deleteNode(head, pPre, pCur);
}

void deleteList(node *head){
	node *pTemp;
  	while(head != NULL){
		pTemp = head;
		head = head->next;
		free(pTemp);
  	}
}
//=====================baru===========
void jumlahData(node *head){
	node *pWalker;
	int jumlah=0;
    system("cls");
	pWalker = head;
	printf("Output : ");
	while (pWalker != NULL){
   	printf("%d->", pWalker -> data);
   	jumlah=jumlah + pWalker -> data;
   	pWalker = pWalker -> next;
	}
   printf("NULL");
   printf("\nJumlah : %d",jumlah);
}

void hapusAwal(node **head){
	node *hapus;
	system("cls");
	if(*head == NULL){
		printf("Data Kosong :) ");
		return;
	}
	hapus=*head;
	*head = hapus->next;
	free(hapus);
	tranverse(*head);
}

void hapusAkhir(node **head){
	node *hapus,*temp;
	system("cls");
	if(*head == NULL){
		printf("Data Kosong :) ");
		return;
	}
	hapus = *head;
	temp = NULL;
	while(hapus -> next != NULL){
		temp = hapus;
		hapus = hapus -> next;
	}
	free(hapus);
	temp -> next = NULL;
	tranverse(*head);
}

void tambahAkhir(node **head){
	node *tambah,*pTemp;
	int bil;
	system("cls");
	tambah = *head;
	pTemp = NULL;
	fflush(stdin);
  	printf("Masukkan bilangan (int) : ");
  	fflush(stdin);
  	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));
  	if (pTemp == NULL){
	  	    printf("\nAlokasi memeori gagal");
		    getch();
		    return ;
	}
  	//Awal
  	if(*head == NULL){
		 pTemp->data = bil;
	     pTemp->next = NULL;
	     insertNode(head, NULL, pTemp);
	}
	//Akhir
	else {
		while(tambah != NULL && tambah -> next != NULL){
			tambah = tambah -> next;
		}
		     pTemp->data = bil;
		     pTemp->next = NULL;
		     insertNode(head, tambah, pTemp);
	}	
}
void exit(){
	char exit[]="Terimakasih...:)";
	for(int i=0;exit[i]!=NULL;i++){
		printf("%c",exit[i]);
		for(int j=0;j<=19999999;j++){
			
		}
	}
}
