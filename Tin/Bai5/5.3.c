#include <stdio.h>

int main (){
	int n;
	int arr[1000];
	scanf ("%d", &n);
	if (n<=0){
		printf ("Error");
		return 0;
	}
	for (int i = 0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	int tmp;
	for (int i =0; i<n; i++){
		for (int j = i; j<n; j++){
			if (arr[i] >= arr[j]){
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			}
		}
	}
	for (int i =0; i<n; i++){
		printf ("%d ", arr[i]);
	}
}
