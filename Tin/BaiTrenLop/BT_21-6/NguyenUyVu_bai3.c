#include <stdio.h>
int main (){
	double a[99];
	int n, i;
	do { 
		printf ("Cho biet so phan tu (<100): "); 
		scanf ("%d", &n);
	} while (n > 100);
	printf ("Nhap %d phan tu cho mang\n", n);
	/* Nhap so phan tu cho mang */
	
	for (i = 0; i<n; i++){
		printf ("Arr[%d] = ", i);
		scanf ("%lf", &a[i]);
	}
	/*Nhap gia tri cho mang */
	
	int count = 0;
	for ( i = 1; i<n; i++){
		if (a[i] == (a[i-1]+a[i+1])/2)
		count++;
	}printf ("Bo 3 so thoa man dieu kien de bai la: %d", count);
	return 0;
}
