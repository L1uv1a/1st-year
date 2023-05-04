#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i=0,j;
	fflush(stdin);
    fgets(s,100,stdin);
	int n=strlen(s);
	while( isspace(s[i]) )
	{
		for(j=0;j<n;j++)
	    s[j]=s[j+1];
	}
	while(s[i]!='\0')
	{
	    if( isspace(s[i]) && isspace(s[i+1]) )
	    {
	    	for(j=i;j<strlen(s);j++)
	    	s[j]=s[j+1];
	    	i--;
		}
		i++;
	}
	n=strlen(s);
	if( isspace(s[n-1]) )
	{
		s[n-1]='\0';
	}
    printf("%s",s);
}
