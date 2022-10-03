#include "setup.h"

void printList(struct node* head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int KTSNT(int n){
    int i;
	if(n<2) return 0;
	for(i=2; i<=n/2; i++)
		if(n%i==0) return 0;
	return 1;
}

void CheckNT(struct node* head, int k, int x){
	int i;
	for (i = 0; i < k-2; i++){
		head = head->next;
	}
	if(KTSNT(head->next->data)){
		head->next->data=x;
		printf("\nPhan tu o vi tri 5 la so nguyen to, da doi gia tri bang %d ", x);
	} else printf("Phan tu o vi tri 5 khong phai so nguyen to! \n");
}

void TrungBinhTichSoChanDuong(struct node* head)
{
	int tich=1;
	int tong=0;
	float tbt;
	
	while(head != NULL){
		if(head->data > 0 && head->data % 2==0 && head->data % 5==0)
		{
			tich*=head->data;
			tong+=1;
		}
		head = head->next;
	}
	
	if (tong>0){
		tbt = tich/tong;
	    printf("\nTrung binh nhan cac so chan, duong, chia het cho 5 la: %f \n", tbt);
		
	}else printf("\nTrong danh sach khong co so chan, duong, chia het cho 5 \n");
}

void sort(struct node* head)
 {
     struct node *i, *j;
     int num;
     for(i = head; i->next != NULL; i=i->next)
     {
         for(j=i->next; j != NULL; j=j->next)
         {
             if(i->data > j->data)
             {
                 num = j->data;
                 j->data = i->data;
                 i->data = num;
             }
         }
     }
 }
 
