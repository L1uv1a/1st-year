#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[100];
	fflush(stdin);
	fgets(s,100,stdin);
	int n=strlen(s);
	int demso=0,demchu=0,i;
	for(i=0;i<n;i++)
	{
		if(isalpha(s[i]))
		demchu++;
		if(isdigit(s[i]))
		demso++;
	}
	if(demso==demchu)
	printf("0");
	if(demso>demchu)
	printf("2");
	if(demso<demchu)
	printf("1");
}
