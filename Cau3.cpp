#include<stdio.h>
#include<math.h>

void displayMenu(){
	printf("\n--- Menu---\n");
	printf("1. Nhap gia tri cac phan tu cua mang \n");
	printf("2. In ra cac phan tu cua mang theo ma tran \n");
	printf("3. In ra cac phan tu o goc theo ma tran \n");
	printf("4. In ra cac phan tu nam tren duong bien theo ma tran \n");
	printf("5. In ra cac phan tu nam tren duong cheo phu va duong cheo chinh theo ma tran \n");
	printf("6. In ra cac phan tu la so nguyen to theo ma tran \n");
	printf("Nhap vao lua chon : ");
}

void createMatrix(int arr[100][100] , int rows , int cols){
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			printf("Nhap phan tu [%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Nhap thanh cong \n");
}

void printMatrix(int arr[100][100], int rows, int cols) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void printBoundary(int arr[100][100], int rows, int cols) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
				printf("%d ", arr[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void printDiagonals(int arr[100][100], int rows, int cols) {
	if (rows != cols) {
		printf("Khong phai ma tran vuong, khong the in duong cheo\n");
		return;
	}
	printf("Duong cheo chinh: ");
	for (int i = 0; i < rows; i++) {
		printf("%d ", arr[i][i]);
	}
	printf("\nDuong cheo phu: ");
	for (int i = 0; i < rows; i++) {
		printf("%d ", arr[i][rows - 1 - i]);
	}
	printf("\n");
}

int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

void printPrimes(int arr[100][100], int rows, int cols) {
	printf("Cac so nguyen to trong ma tran: ");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (isPrime(arr[i][j])) {
				printf("%d ", arr[i][j]);
			}
		}
	}
	printf("\n");
}

int main() {
	int cols, rows;
	int arr[100][100];
	int choice;
	do {
		displayMenu();
		scanf("%d", &choice);
		switch(choice) {
			case 1 : {
				printf("Nhap so hang cua ma tran : ");
				scanf("%d", &cols);
				printf("Nhap so cot cua ma tran : ");
				scanf("%d", &rows);
				createMatrix(arr, rows, cols);	
				break;
			}
			case 2 : {
				printMatrix(arr, rows, cols);
				break;
			}
			case 3 : {
				break;
			}
			case 4 : {
				printBoundary(arr, rows, cols);
				break;
			}
			case 5 : {
				printDiagonals(arr, rows, cols);
				break;
			}
			case 6 : {
				printPrimes(arr, rows, cols);
				break;
			}
			default : {
				break;
			}
		}
	} while(choice != 6);
	return 0;
}

