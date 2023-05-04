#include <stdio.h>

int *max (int *a, int n){
	int b = *a;
	for (int i = 0; i <n; i++){
		if (*(a+i) >= b){
			b = *(a+i);
		}
	}
	int *sol = &b;
	return sol;
}


int main (){
	int n;
	do {
		printf ("Nhap so phan tu: ");
		scanf ("%d", &n);
	} while (n>10 || n <0);
	int arr[1000];
	for (int i = 0; i<n; i++){
		printf ("Nhap gia tri phan tu thu %d trong mang: ", i+1);
		scanf ("%d", &arr[i]);
	}
	int *sol;
	sol = max (arr, n);
	printf ("Phan tu lon nhat trong mang: %d", *sol);
	return 0;
}
