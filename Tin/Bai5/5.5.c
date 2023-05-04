#include <stdio.h>

int main (){
	int n;
	int arr[1000];
	do{
		scanf ("%d", &n);
	}
	while (n<1 || n>10); 
	if (n==1) {
		printf ("0");
		return 0;
	}
	for (int i = 0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	int max = arr[0]+arr[1];

	for (int i = 1; i<n; i++){
		if (max <= arr[i]+arr[i-1]){
			max = arr[i]+arr[i-1];
		}
	}
	if (max < 0){
		printf ("0");
		return 0;
	}
	printf ("%d", max);
	return 0;
}

	
