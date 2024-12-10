#include<stdio.h>

void createMatrix(int arr[100][100] , int rows , int cols){
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			printf("Nhap phan tu thu [%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}

void displayMatrix(int arr[100][100] , int rows , int cols){
	printf("Ma tran moi nhap : \n");
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[100][100];
	int rows , cols;
	printf("Nhap so hang cua ma tran : ");
	scanf("%d",&rows);
	printf("Nhap so cot cua ma tran : ");
	scanf("%d",&cols);
	createMatrix(arr , rows , cols);
	displayMatrix(arr , rows , cols);
	return 0;
}
