#include <stdio.h>
#include <math.h>
int main (){
	double x, S = 1.0, u = 1.0;
	double n, i;
	scanf ("%lf", &n);
    scanf ("%lf", &x);
    
	if (n < 0) {
	printf ("Error");
	return 0;
	}
	    for (i = 1; i<=n; i++ ){
		    u *= -x;
		    S += u;
	    }printf ("%lf", S);
 return 0;
}
