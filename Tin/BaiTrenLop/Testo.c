
#include<stdio.h>

int main(){
    int n, i;
    int tong = 0;
    printf("Nhap n: ");
    scanf("%d",&n); 
	for (i=1; i<n; i++){
		if (n % i ==0) tong+=i;
	}
	if (n==tong){
		printf ("%d la so hoan hao", n, n);
	}
	else printf ("%d khong la so hoan hao", n);
	
	return 0;

}
 

