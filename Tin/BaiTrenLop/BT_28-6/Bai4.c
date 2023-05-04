#include <stdio.h>
#include <string.h>

int main (){
	char c[1000];
	printf ("Nhap xau ban muon thay doi: ");
	fflush(stdin);
	gets (c);
	for (int i = 0; i<strlen(c)-1; i++){
		switch (c[i]){
			case ',': c[i] = ' '; break;
			case '.': c[i] = ' '; break;
			case ';': c[i] = ' '; break;
			case ':': c[i] = ' '; break;
			case '?': c[i] = ' '; break;
			case '!': c[i] = ' '; break;
		}
	}
	printf ("Xau da thay doi: ");
	puts (c);
}
