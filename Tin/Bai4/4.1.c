#include <stdio.h>

int main (){
	int n;
	int s = 1;
	scanf ("%d", &n);
	if (n>=0 && n<8){
		for (int i = 1; i<=n; i++){
			s *= i;
		}printf ("%d", s);
	}else printf ("ERROR");
	return 0;
}

