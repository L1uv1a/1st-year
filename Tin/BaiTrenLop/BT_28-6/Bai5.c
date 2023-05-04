#include <stdio.h>
#include <string.h>

int main (){
	char c[100000];
	printf ("Nhap xau ban muon thay doi: ");
	fflush(stdin);
	gets (c);
	for (int i = 0; i<strlen(c); i++){
		switch (c[i]){
			case '1': 
				c[i] = 'M';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'o';
				c[i+2] = 't';
				i+=2;
				break;
			case '2': 
				c[i] = 'H';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'a';
				c[i+2] = 'i';
				i+=2;
				break;
			case '3': 
				c[i] = 'B';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+1] = c[j];
				}
				c[i+1] = 'a';
				i+=1;
				break;
			case '4': 
				c[i] = 'B';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'o';
				c[i+2] = 'n';
				i+=2;
				break;
			case '5': 
				c[i] = 'N';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'a';
				c[i+2] = 'm';
				i+=2;
				break;
			case '6': 
				c[i] = 'S';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'a';
				c[i+2] = 'u';
				i+=2;
				break;
			case '7': 
				c[i] = 'B';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'a';
				c[i+2] = 'y';
				i+=2;
				break;
			case '8': 
				c[i] = 'T';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+2] = c[j];
				}
				c[i+1] = 'a';
				c[i+2] = 'm';
				i+=2;
				break;
			case '9': 
				c[i] = 'C';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+3] = c[j];
				}
				c[i+1] = 'h';
				c[i+2] = 'i';
				c[i+3] = 'n';
				i+=3;
				break;
			case '0': 
				c[i] = 'K';
				for (int j = strlen(c)-1; j>i; j--){
					c[j+4] = c[j];
				}
				c[i+1] = 'h';
				c[i+2] = 'o';
				c[i+3] = 'n';
				c[i+4] = 'g';
				i+=4;
				break;
		}
	}
	printf ("Xau da thay doi: ");
	puts (c);
	return 0;
}
