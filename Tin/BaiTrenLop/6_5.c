#include <stdio.h>
#include <conio.h>
int main(){
	int a, b, c, min;
	printf ("\n Nhap 3 so nguyen (Co ngan cach dau phay giua cac so): ");
	scanf ("%d, %d, %d", &a, &b, &c);
	if (a<=b && a<=c){
		min = a;
	} else if (b<=a && b<=c){
		min = b;
	} else if (c<=b && c<=a){
		min = c;
	} else
		printf ("\n Khong co ket qua phu hop");
	printf ("\n So nguyen nho nhat la: %d", min);
getch();
return 0;
}
