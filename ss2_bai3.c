#include <stdio.h>
int main(){
	int a,b,c,d,e;
	printf (" Moi ban nhap so a =");
	scanf ("%d",&a);
	printf (" Moi ban nhap so b =");
	scanf ("%d",&b);
	c = a + b;
	printf("tong cua %d + %d = %d\n",a,b,c);
	d = a * b;
	printf("nhan cua %d * %d = %d\n",a,b,d);
	e = a / a;
	printf("chia cua %d / %d = %d\n",a,b,e);
	
	
	return 0;
}
