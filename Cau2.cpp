#include<stdio.h>

int gcm(int a , int b){
	if(a == 0 || b == 0){
		return a + b;
	}
	int min = a < b ? a : b;
	for(int i = min ; i >= 1 ; i--){
		if(a % i == 0 && b % i == 0){
			return i;
		}
	}
	return 1;
}

int main(){
	int a , b;
	printf("Nhap so thu 1 : ");
	scanf("%d",&a);
	printf("Nhap so thu 2 : ");
	scanf("%d",&b);
	printf("UCLN cua 2 so %d va %d la : %d",a,b,gcm(a,b));
	return 1;
}
