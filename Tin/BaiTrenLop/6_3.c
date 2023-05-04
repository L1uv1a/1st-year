#include <stdio.h>
#include <conio.h>
int main (){
	int Tuoi;
	printf ("Nhap so tuoi: ");
	scanf ("%d", &Tuoi);
	if (Tuoi>0 && Tuoi <130){
		if (Tuoi < 18)
			printf ("\n Tre em");
		else if (Tuoi<65 && Tuoi >= 18)
			printf ("\n Nguoi lon");
		else 
			printf ("\n Nguoi gia");
	}
	else 
		printf ("\n Co the khong phai la con nguoi!");
getch();
return 0;
}
