#include<stdio.h>
int main(){
	int a, // chieu dai cua hinh chu nhat
	b; // chieu rong cua hinh chu nhat
	printf(" Moi ban nhap chieu dai =",a);
	scanf("%d",&a);
	printf(" Moi ban nhap chieu rong =",b);
	scanf("%d",&b);
	int s = a * b;
	printf("dien tich cua hinh chu nhat = %d\n",s);// don vi m vuong
	int d = ( a + b ) * 2;
	printf("chu vi cua hinh chu nhat = %d\n",d);// don vi m
	
	
	
	return 0;
}
