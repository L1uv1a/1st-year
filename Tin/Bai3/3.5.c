#include <stdio.h>
#include <math.h>
int main (){
	double x, y, z, F;
	scanf ("%lf %lf %lf", &x, &y, &z);
	F = ((x+y+z)/(pow (x,2) + pow (y,2) + 1))- fabs (x - z*cos(y));
	printf ("%lf", F);
	return 0;
}
