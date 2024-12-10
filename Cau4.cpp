#include<stdio.h>

void displayMenu(){
	printf("---MENU---\n");
	printf("1. Nhap so phan tu va gia tri cac phan tu \n");
	printf("2. In ra gia tri cac phan tu \n");
	printf("3. Them 1 phan tu vao vi tri chi dinh \n");
	printf("4. Xoa 1 phan tu o vi tri chi dinh \n");
	printf("5. Sua 1 phan tu o vi tri chi dinh \n");
	printf("6. Sap xep cac phan tu \n");
	printf("a. Giam dan \n");
	printf("b. Tang dan \n");
	printf("7. Tim kiem phan tu nhap vao \n");
	printf("a. Tim kiem tuyen tinh \n");
	printf("b. Tim kiem nhi phan \n");
	printf("8. Thoat \n");
	printf("Nhap lua chon : ");
}

void createArray(int arr[100] , int n){
	if(n < 0 || n > 100){
		printf("Vui long nhap lai so phan tu mang : \n");
		return;
	}
	for(int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap thanh cong \n");
}

void displayArray(int arr[100] , int n){
	printf("Mang da nhap : ");
	for(int i = 0 ; i < n ; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

void add(int arr[100] , int addValue , int addIndex , int n){
	for(int i = n ; i > addIndex ; i--){
		arr[i] = arr[i-1];
	}
	arr[addIndex] = addValue;
	n++;
	displayArray(arr,n);
}

void removeAt(int arr[100], int removeIndex, int *n) {
	for (int i = removeIndex; i < *n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	(*n)--;
	displayArray(arr, *n);
}

void updateAt(int arr[100], int updateIndex, int updateValue, int n) {
	arr[updateIndex] = updateValue;
	displayArray(arr, n);
}

int main(){
	int arr[100];
	int n;
	int choice;
	do{
		displayMenu();
		scanf("%d",&choice);
		switch(choice){
			case 1 : {
				printf("Nhap vao so phan tu ");
				scanf("%d",&n);
				createArray(arr,n);
				break;
			}
			case 2 : {
				displayArray(arr,n);
				break;
			}
			case 3 : {
				int addValue , addIndex;
				printf("Nhap gia tri muon them : ");
				scanf("%d",&addValue);
				printf("Nhap vi tri muon them vao tu 0 den %d: ",n);
				scanf("%d",&addIndex);
				add(arr,addValue,addIndex,n);
				n++;
				break;
			}
			case 4 : {
				int removeIndex;
				printf("Nhap vi tri muon xoa tu 0 den %d: ", n - 1);
				scanf("%d", &removeIndex);
				removeAt(arr, removeIndex, &n);
				break;
			}
			case 5 : {
				int updateIndex, updateValue;
				printf("Nhap vi tri muon sua tu 0 den %d: ", n - 1);
				scanf("%d", &updateIndex);
				printf("Nhap gia tri moi: ");
				scanf("%d", &updateValue);
				updateAt(arr, updateIndex, updateValue, n);
				break;
			}
			case 6 : {
				break;
			}
			case 7 : {
				break;
			}
			case 8 : {
				break;
			}
			default : {
				break;
			}
		}
	}while(choice!=8);
}

