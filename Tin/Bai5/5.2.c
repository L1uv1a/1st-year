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
	double sa, sd;
	int da = 0;
	int dd = 0;
	for (int i = 0; i<n; i++){
		if (arr[i]<0){
			sa += arr[i];
			da++;
		}
		if (arr[i]>0){
			sd += arr[i];
			dd++;
		}
	}
	if (sa!=0 && da != n && da != 0){
		printf ("%lf ", sa/da);
	}
	if (sd != 0 && dd != n && dd != 0){
		printf ("%lf ", sd);
	}
	if (da==n){
		printf ("%lf Mang khong co so duong", sa/da);
	}
	if (dd==n){
		printf ("Mang khong co so am %lf", sd);

	}
}
