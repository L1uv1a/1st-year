#include <stdio.h>
int main (){
	float a[99];
	float v;
	int k;
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
	
	float tmp;
	for (i = 0; i<n; i++){
		for (int j = i+1; j<n; j++){
			if (a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf ("\nMang da sap xep la: ");
	for (i=0; i<n; i++){
		printf ("%f      ", a[i]);
	}
	
	
	do{
        printf("\nNhap vi tri chen k: "); scanf("%d",&k);
    } while(k<0||k>n);
    	printf("\nNhap gia tri v: "); scanf("%f",&v);
    for (int i=n;i>k-1;i--){
        a[i]=a[i-1];
    }
    a[k-1]=v;
    n++;
    printf("Mang sau khi chen phan tu v: ");
    for (int i=0;i<n;i++){
        printf("%f   ",a[i]);
    }

return 0;
}
	
