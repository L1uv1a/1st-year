#include <stdio.h>
#define pi 3.14159
int main (){
	float r;
	scanf ("%f", &r);
	if (r>0)
		printf("%f\n%f", 2*r*pi, r*r*pi); 
	else printf("ERROR");
	
	return 0;
}
