#include<stdio.h>
#include<math.h>

int main(){
    long long n;
    double x;
    double s = 0;
    scanf("%lf %lld", &x, &n);
    if (n < 1 || x < 0){
    	printf ("Error");
	} else{
        for (long long i = 0; i < n; i++){
            s = sqrt(x + s);
        }
        printf("%.4lf\n", s);
    }
    return 0;
}
