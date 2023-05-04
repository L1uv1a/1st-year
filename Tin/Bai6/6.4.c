#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char s[100];
    int val,sl;
    fgets(s,100,stdin);
    sl = strlen(s);
    sl--;
    val = -(s[0]-'0')*pow(2,sl-1);
    for(int i = 1; i < sl; i++)
        val += (s[i]-'0')*pow(2,sl-i-1);
    printf("%d",val);
}
