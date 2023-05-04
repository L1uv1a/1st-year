#include <stdio.h>
int main(){
	int N=5, M=10;
	int *p1 = &N; 
	int *p2 = &M;
	*p1 = *p2;
printf("%d %d",*p1,*p2);
}

