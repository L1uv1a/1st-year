#include <stdio.h>

double *daonguoc (double *a, int n){
	for (int i = 0; i<(n/2); i++){
		double tmp = *(a+i);
		*(a+i) = *(a+n-1-i);
		*(a+n-1-i) = tmp;
	}
	return a;
}



int main (){
	int n;
	do {
		printf ("Nhap so phan tu: ");
		scanf ("%d", &n);
	} while (n>10 || n <0);
	double arr[1000];
	for (int i = 0; i<n; i++){
		printf ("Nhap gia tri phan tu thu %d trong mang: ", i+1);
		scanf ("%lf", &arr[i]);
	}
	double *sol;
	sol = daonguoc (arr, n);
	printf ("\nMang da dao nguoc: ");
	for (int i = 0; i<n; i++){
		printf ("%lf        ", *(sol + i));
	}
}
