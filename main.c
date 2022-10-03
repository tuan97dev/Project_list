#include "header.h"
#include "list.c"
#include "setup.c"

void Menu() {
	printf("=================BAI TAP 5================\n");
	printf("1. Nhap danh sach so nguyen\n");
	printf("2. Kiem tra vi tri 5 co phai so nguyen to\n");
	printf("3. Trung binh nhan cac so chan, duong, chia het cho 5\n");
	printf("4. Sap xep danh sach thu tu tang dan\n");
	printf("99. Thoat\n");
	printf("=====================================\n");
}

int ChonMenu()
{
	int n = 0;
	printf("\nMoi chon menu: ");
	scanf("%d", &n);
	if (n > 0 || n < 99)
		return n;
	else return ChonMenu();
}

int main()
{	
    Menu();
	struct node* head = NULL;
    
    while (true){
		int chon = ChonMenu();
		
		switch (chon)
		{
			case 1:		
				printf("1. Nhap danh sach so nguyen\n");
					head = createList(head);
					printf("\nDanh sach da lap gom: \n");
					printList(head);
				break;
			case 2:
				printf("2. Kiem tra vi tri 5 co phai so nguyen to, neu phai thay gia tri bang 10");
				CheckNT(head,5,10);
				break;
			case 3:
				printf("3. Trung binh nhan cac so chan, duong, chia het cho 5");
				TrungBinhTichSoChanDuong(head);
				break;
			case 4:
				printf("4. Sap xep danh sach theo thu tu tang dan\n");
			    sort(head);
				printf("\nDanh sach da sap xep tang dan: \n");
				printList(head);
				break;
			case 99:
				printf("Thoat!!!\n");
				exit(1);
				break;
		}
	}
	
	return 0;
}
