#include <stdio.h>
int main (){
	float x, y, A, B, C;
	scanf ("%f %f", &x, &y );
	A = x*x + y*y;
	B = (x+y)*(x+y);
	C = (x-y)*(x-y);
	printf ("%f\n%f\n%f", A, B, C);
	return 0;
}
