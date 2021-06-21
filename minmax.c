#include<stdio.h>
#include<conio.h>
int FuncIntMaxMin() {
	int   max, min;
	max = 0;
	while (max<max + 1)
	{

		max = max + 1;
	}
	printf(" The maximum of integer numbers is %d\n", max);
	min = 0;
	while (min >= min - 1) {
		min = min - 1;
	}
	printf("The minimum of integer numbers is %d", min);
	return 0;
}
long  FuncLongIntMaxMin() {
	long  max1, min1;
	max1 = 0;
	while (max1<max1 + 1)
	{

		max1 = max1 + 1;
	}
	printf("For long max is %d\n", max1);
	min1 = 0;
	while (min1 > min1 - 1) {
		min1 = min1 - 1;
	}
	printf("For long min is%d\n", min1);
	return 0;
}
signed int FuncSignedInt() {
	signed int  max2, min2;
	max2 = 0;
	while (max2<max2 + 1)
	{

		max2 = max2 + 1;
	}
	printf("For signed  int max is %d\n", max2);
	min2 = 0;
	while (min2 >= min2 - 1) {
		min2 = min2 - 1;
	}
	printf("For signed int min is %d\n", min2);
	return 0;
}
unsigned int FuncUnsignedInt() {
	unsigned int max3,min3;
	max3 = 0;
	while (max3 < max3 + 1)
	{

		max3 = max3 + 1;
	}
	printf("For unsigned int max is %u\n", max3);
	min3 = 1;
	while (min3 > 0) {
		min3 = min3 << 1;
	}
	printf("For unsigned int min is %u\n", min3);
	return 0;
}
unsigned long FuncUnsignedLongInt() {
	unsigned long max6,min6;
	max6 = 1;
	while (max6>0) {
		max6=max6<<1;
	}
	max6--;
	printf("\nFor unsigned long max is %lu\n", max6);
	min6 = 1;
	while (min6 > 0) {
		min6 = min6 << 1;
	}
	printf("\nFor unsigned long min is %lu\n", min6);
	return 0;
}
short int FuncShortInt() {
	short int  max4,min4;
	max4 = 1;
	while (max4 >0) {
		max4 =max4 << 1;
	}
	max4--;
	min4 = 1;
	while (min4 > 0) {
		min4 = min4 << 1;
	}
	printf("For short int max is %hi \n", max4);
	printf("For short int min is %hi \n", min4);
	return 0;

}
short unsigned int FuncShortUnsignedInt() {
	short unsigned int max5,min5;
	max5 = 1;
	while (max5 > 0) {
		max5 = max5 << 1;
	}
	max5--;
	printf("For unsigned short max is %d \n",max5);
	min5 = 1;
	while (min5 > 0) {
		min5 = min5 << 1;
	}
	printf("For unsigned short min is %d \n", min5);
	return 0;
	
}
signed char FuncSingnedChar() {
	signed char max7, min7;
	max7 = 1;
	while (max7>0) {
		max7 = max7 << 1;
	}
	max7--;
	printf("For signed char max is %d\n", max7);
	min7 = 1;
	while (min7 >0 ) {
		min7 = min7<<1;
	}
	printf("For signed char min is %d\n", min7);
	return 0;
}
unsigned char FuncUnsignedChar() {
	unsigned char max8, min8;
	max8 = 1;
	while (max8 > 0) {
		max8 = max8 << 1;
	}
	max8--;
	printf("For unsigned char max is %d\n",max8);
	min8 = 1;
	while (min8 > 0) {
		min8 = min8 << 1;
	}
	printf("For unsigned char min is %d\n", min8);
	return 0;
}
void main(void) {
	int r;
	long int l;
	signed int p;
	unsigned int u;
	short int  e;
	short unsigned int q;
	unsigned long  j;
	signed char b;
	unsigned char z;
	r = FuncIntMaxMin();
	printf("\n");
	l = FuncLongIntMaxMin();
	p = FuncSignedInt();
	u = FuncUnsignedInt();
	e = FuncShortInt();
	q = FuncShortUnsignedInt();
	j = FuncUnsignedLongInt();
	b = FuncSingnedChar();
	z = FuncUnsignedChar();
	_getch();
}
