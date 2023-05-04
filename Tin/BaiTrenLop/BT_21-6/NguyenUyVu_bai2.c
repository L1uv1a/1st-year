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
	
	int min;
	int count = 0;
	for (i = 0; i<n; i++){
		if (a[i] % 2 == 0) {
			min = a[i];
			count++;
			break;
		}
		
	}
	if (count == 0){
		printf ("Khong co so chan!");
		return 0;
	}
	for (i = 0; i<n; i++){
		if ((((a[i])%2)==0) && (a[i]<min)){
			min = a[i];
		}
	}printf ("\nSo chan nho nhat la: %d", min);
return 0;	
}
