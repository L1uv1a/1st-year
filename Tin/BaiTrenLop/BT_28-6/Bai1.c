#include <stdio.h>
#include <string.h>

int main (){
	typedef struct{
		int ngay;
		int thang;
		int nam;
		
	} NgaySinh;
	typedef struct{
		float toan;
		float ly;
		float hoa;
	} Diem;
	typedef struct{
		char Ten[200];
		int MSSV;
		NgaySinh DOB;
		Diem Grade;
	} SinhVien;
	int n;
	SinhVien s[100];
	do{
		printf ("\nNhap so luong sinh vien (Tu 5 den 10): ");
        scanf("%d",&n);
    } while (n>10 || n<5);
	for (int i = 0; i < n; i++){
		printf ("Sinh vien thu %d: ", i+1);
		printf ("\nNhap ten sinh vien: ");
		fflush(stdin);
		gets (s[i].Ten);
		printf ("\nNhap MSSV: ");
		scanf ("%d", &s[i].MSSV);
		do {
			printf ("Nhap ngay thang nam sinh: ");
			scanf ("%d%d%d", &s[i].DOB.ngay, &s[i].DOB.thang, &s[i].DOB.nam);
		} while (s[i].DOB.ngay <1 || s[i].DOB.ngay >31 || s[i].DOB.thang <1 || s[i].DOB.thang >12 || s[i].DOB.nam <1);
		do {
			printf ("Nhap diem toan, ly, hoa: ");
			scanf ("%f%f%f", &s[i].Grade.toan, &s[i].Grade.ly, &s[i].Grade.hoa);
		}while (s[i].Grade.toan <0 || s[i].Grade.toan >10 || s[i].Grade.ly <0 || s[i].Grade.ly >10 || s[i].Grade.hoa <0 || s[i].Grade.toan >10);
	}
	printf("\nDanh sach sinh vien co diem >=23: \n");
    for(int i = 0; i < n; i++){
        if(s[i].Grade.toan + s[i].Grade.ly + s[i].Grade.hoa >= 23){
            printf("\nSinh vien: %s\n", s[i].Ten);
            printf("MSSV: %d\n",s[i].MSSV);
            printf("Ngay Thang Nam Sinh: %d/%d/%d \n", s[i].DOB.ngay, s[i].DOB.thang, s[i].DOB.nam);
            printf("Diem Toan Ly Hoa: %.2f     %.2f     %.2f     \n",s[i].Grade.toan, s[i].Grade.ly, s[i].Grade.hoa );
    	}
	}
    printf ("\nDanh sach sinh vien khong co diem liet (Diem <=3): \n");
    for (int i = 0; i < n; i++){
    	if (s[i].Grade.toan >3 || s[i].Grade.ly >3 || s[i].Grade.hoa > 3){
    		printf("\nSinh vien: %s\n", s[i].Ten);
            printf("MSSV: %d\n",s[i].MSSV);
            printf("Ngay Thang Nam Sinh: %d/%d/%d \n", s[i].DOB.ngay, s[i].DOB.thang, s[i].DOB.nam);
            printf("Diem Toan Ly Hoa: %.2f     %.2f     %.2f     \n",s[i].Grade.toan, s[i].Grade.ly, s[i].Grade.hoa );	
		}
	}
return 0;
}
