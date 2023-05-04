#include <stdio.h>
int main (){
	int n;
	int s = 0;
	scanf ("%d", &n);
	if (n<1000)	{
		while (n != 0){
			s += (n%10);
			n /= 10;
		} printf ("%d", s);
	}else printf ("ERROR");
return 0;
}

