#include<stdio.h>
#include<stdlib.h>
int main()
{
	// int a = 0x66;
	// int *p;
	// p = &a;
	// printf("address size of p = %d\n", sizeof(p));
	// printf("address size of a = %d\n", sizeof(a));
	// printf("%x\n", a);//十六进制形式
	// printf("%x\n", p);
	// printf("%x\n", *p);
	// (*p)++;
	// printf("*p++ = %x\n", *p);
	// p++;
	// printf("%x\n", p);
	
	//char a[] = {0x33,0x44,0x55,0x66};
	malloc(3*4);
	
	char *p;
	p = a;
	printf("a[0] = %x\n", a[0]);
	printf("a[1] = %x\n", *(a+1));
	printf("a[2] = %x\n", *(p+2));
	return 0;
}
