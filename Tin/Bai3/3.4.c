#include <stdio.h>
int main (){
	double P;
	double W, T;
	scanf ("%lf", &P);
	scanf ("%lf", &W);
	scanf ("%lf", &T);
	printf ("%lf", P*W*(1+T/100));
	return 0;
}
