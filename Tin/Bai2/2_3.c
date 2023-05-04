#include <stdio.h>
int main() 
{
    float x, y, min;
    scanf("%f", &x);
    scanf("%f", &y);
    min = x;
    if (x>y) {
        min = y;
    }  
    printf("%f", min);
    return 0;
}