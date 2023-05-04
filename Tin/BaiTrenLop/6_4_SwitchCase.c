# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#include <conio.h>
int main () {
	int SoCuaTao, SoCuaMay, a;
	srand ( time ( NULL ));
	SoCuaTao = 1 + rand () % 10;
	printf (" Doan so di anh giai ( trong khoang 1 va 10): ");
	scanf ("%d", & SoCuaMay );
	a = SoCuaTao - SoCuaMay;
	switch (a){
		case -9 ... -1: printf ("\n Hoi to! So can doan la %d.\n",SoCuaTao); break;
		case 1 ... 9: printf ("\n Hoi nho! So can doan la %d.\n",SoCuaTao); break;
		default: printf ("\n Dung roi day! So can doan la %d.\n",SoCuaTao); break;
	}
getch();
return 0;
}

