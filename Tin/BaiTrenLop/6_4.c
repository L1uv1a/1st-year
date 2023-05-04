#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main () {
int SoCuaTao , SoCuaMay ;
	srand ( time ( NULL ));
	SoCuaTao = 1 + rand () % 10;
	printf (" Doan so di anh giai ( trong khoang 1 va 10): ");
	scanf ("%d", & SoCuaMay );
	if ( SoCuaMay < SoCuaTao ) {
		printf ("\n Hoi nho! ");
	} else if ( SoCuaMay > SoCuaTao ) {
		printf ("\n Hoi to! ");
	} else {
		printf ("\n Dung roi day!");
return 0;
}
printf ("So can doan la %d.\n",SoCuaTao );
return 0;
getch();
}

