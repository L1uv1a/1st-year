#include <stdio.h>
int main (){
	double Arr[10];
	int n, i;
	do { 
		printf ("Cho biet so phan tu: "); 
		scanf ("%d", &n);
	} while (n<10 || n > 100);
	printf ("Nhap %d phan tu cho mang\n", n);
	/* Nhap so phan tu cho mang */
	
	for (i = 0; i<n; i++){
		printf ("Arr[%d] = ", i);
		scanf ("%lf", &Arr[i]);
	}
	/*Nhap gia tri cho mang */
	printf ("Gia tri cua mang la: \n");
	for (i = 0; i<n; i++){
		printf ("%6.0lf", Arr[i]);
	}
	
	int count = 0;
	double k;
	printf ("\nNhap so thuc k: ");
	scanf ("%lf", &k);
	for (i = 0; i<n; i++){
		if (Arr[i] > k){
			count++;	
		}
	} printf ("So phan tu lon hon k la: %d", count);
	
return 0;
}
