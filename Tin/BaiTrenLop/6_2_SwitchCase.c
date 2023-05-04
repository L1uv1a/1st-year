#include <stdio.h>
#include <conio.h>
int main (){
	int a;
	printf ("Nhap so tuoi: ");
	scanf ("%d", &a);
	switch (a) {
		case 0 ... 17: printf ("\n Tre con"); break;
		case 18 ... 64: printf ("\n Nguoi lon"); break;
		case 65 ... 129: printf ("\n Nguoi gia"); break;
		default: printf ("\n Co the khong phai la con nguoi!"); break;
}
getch();
return 0;
}
