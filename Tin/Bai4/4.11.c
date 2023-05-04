#include <stdio.h>
#include <math.h>
int main (){
	double x, S = 1.0, u = 1.0;
	double n, i;
	scanf ("%lf", &x);
	scanf ("%lf", &n);

    
	if (n<1 || x<0) {
	printf ("Error");
	return 0;
	}
	    for (i = 1; i<=n; i++ ){
		    u *= x/i;
		    S += u;
	    }printf ("%.4lf", S);
 return 0;
}
