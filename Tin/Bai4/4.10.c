#include <stdio.h>
#include <math.h>
int main (){
	double x, S = 1.0;
	unsigned int n, i;
	scanf ("%d", &n);
    scanf ("%lf", &x);
    
	if (n<1|| x<0) {
	printf ("Error");
	return 0;
	}
	for (i = 1; i<=n; i++ ){
		S = S + (pow(x,i))/i;
	    }printf ("%.4lf", S);
 return 0;
}
