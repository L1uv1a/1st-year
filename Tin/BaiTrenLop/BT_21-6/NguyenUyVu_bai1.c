#include <stdio.h>
int main (){
	int a[99];
	int n, i;
	do { 
		printf ("Cho biet so phan tu (<100): "); 
		scanf ("%d", &n);
	} while (n > 100);
	printf ("Nhap %d phan tu cho mang\n", n);
	/* Nhap so phan tu cho mang */
	
	for (i = 0; i<n; i++){
		printf ("Arr[%d] = ", i);
		scanf ("%d", &a[i]);
	}
	/*Nhap gia tri cho mang */
	
	
	printf ("Gia tri cua mang la: \n");
	for (i = 0; i<n; i++){
		printf ("%d     ", a[i]);
	}
	/*In ra gia tri cua mang*/
	
	double tong = 0;
	double tich = 1;
	int count_1 = 0;
	int count_2 = 0;
	
	for (i=0; i<n; i++){
		tong += a[i];
		tich *= a[i];
		if (a[i] >= 100 && a[i] <1000){
			count_2++;
		}
		if (a[i] > 10 && a[i] % 3 == 0){
			count_1++;
		}
	}printf ("\nTong cua day la: %lf",tong);
	printf ("\nTich cua day la: %lf", tich);
	printf ("\nSo phan tu chia het cho 3 va lon hon 10 la: %d", count_1);
	printf ("\nSo phan tu trong khoang [100;1000) la: %d", count_2);
	
	
return 0;
}
