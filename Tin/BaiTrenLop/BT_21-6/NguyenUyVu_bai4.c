#include <stdio.h>
int main (){
	float a[99];
	int n, i;
	do { 
		printf ("Cho biet so phan tu (<100): "); 
		scanf ("%d", &n);
	} while (n > 100);
	printf ("Nhap %d phan tu cho mang\n", n);
	/* Nhap so phan tu cho mang */
	
	for (i = 0; i<n; i++){
		printf ("Arr[%d] = ", i);
		scanf ("%f", &a[i]);
	}
	/*Nhap gia tri cho mang */
	
	
	printf ("Gia tri cua mang la: \n");
	for (i = 0; i<n; i++){
		printf ("%f     ", a[i]);
	}
		
	float min;
	min = a[0];
	printf ("\nVi tri nhung so bang so be nhat (theo may): ");
	for (i=0; i<n; i++){
		if (a[i]<min){
			min = a[i];
		}
		if (a[i]==min){
			printf ("Arr[%d], ",i);
		}
	}
	
	printf ("\nVi tri nhung so bang so be nhat (theo thu tu cua con nguoi): ");
	for (i=0; i<n; i++){
		if (a[i]==min){
			printf ("%d, ",i+1);
		}
	}printf ("\nGia tri nho nhat la: %f", min);
	return 0;
}
