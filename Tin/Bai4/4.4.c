#include<stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > 0 && b > 0){
        int s = a * b;
        while (a * b != 0){
            if (a > b) a %= b; else b %= a;
        }
        //printf("%d", s);
        printf("%d\n%d", max(a,b), s/max(a,b));
    } else printf("ERROR");
    return 0;
}
