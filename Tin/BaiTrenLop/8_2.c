#include <stdio.h>
#include <math.h>
int main (){
	float x, S = 0.0, u = 1.0, GT=1.0;
	int n, i;
	x*= M_PI/180;
	printf ("Nhap n: "); scanf ("%d", &n);
	printf ("Nhap x: "); scanf ("%f", &x);
	for (i = 1; i<=n; i++ ){
		S+= pow(-1,i)*pow(x,2*i+1)/gt(2i+1);

	}
	printf ("sin(x) la: %.5f ",S);
}
