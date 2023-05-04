#include <stdio.h>
#include <ctype.h>
#include <string.h>
int i, sl, tl, dd[200];
int main()
{
	int i;
    char s[100], t[100];
    fgets(s,100,stdin);
    fgets(t,100,stdin);
    sl = strlen(s);
    tl = strlen(t);
    for(i = 0; i < sl-1; i++)
        dd[s[i]-'a']++;
    for(i = 0; i < tl-1; i++)
        dd[t[i]-'a']++;
    for(i = 0; i < 26; i++)
        if(dd[i] != 0)
            printf("%c",i+'a');
    for(i = 0; i < 26; i++)
        if(dd[i] != 0)
            printf("\n%d", dd[i]);
}
