#include<stdio.h>
int main (){
	float PI = 3.14;
	float r;
	//Nhap ban kinh r
	printf("Moi ban nhap ban kinh:");
	scanf("%f",&r);
	//Tinh chu vi hinh tron
	float C = 2 * PI * r;
	printf ("Chu vi hinh tron ban kinh r la %.3f\n",C);
	//Tinh dien tich hinh tron
	float S = r * r * PI;
	printf ("Dien tich hinh tron ban kinh r la %.3f\n",S);
	
	
	return 0;
}
