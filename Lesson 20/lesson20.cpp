#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//열거형 ( Eunmerration Type )		===> 순서형
typedef enum 
{
	RED = 100, BLUE = 200, ORANGE = 300 , BLACK = 400, WHITE = 500 
	// 아무것도 안 쓰면 순서대로 1 씩 증가 ex) RED = 100 -> BLUE = 101 
}MyColor;

// 공용체
typedef union
{
	short n1;
	short n2;
	long l1;

}MyUnion;

typedef struct {
	char name[20];
		int age;
}PERSON;

// 함수의 주소를 저장할 수 있는 데이터 유형을 정의 
typedef int (*FUNC)(int, int);

int add(int n1, int n2)
{
	return n1 + n2;

}

int subtract(int n1, int n2)
{
	return n1 - n2;

}

void  print_value(int num1, int num2, FUNC f)
{
	printf(" print_value = %d\n",f(num1, num2));
}

int main()
{
	int num = 10;
	int* ptr = &num;
	printf(" num의 값 : %d\n", *ptr);

	float r1 = 3.14F;
	float* ptr_r1 = &r1;

	PERSON p1;
	strcpy(p1.name, "galim");	// 
	p1.age = 30;

	PERSON* pPerson = &p1;
	


	int(*func)(int, int);
	func = add;
	int ret = func(10, 20);
	printf(" ret = %d \n", ret);

	func = subtract;
	ret = func(10, 20);
	printf(" ret = %d \n", ret);

	//func = print_value;			// 서로 다른 유형이기 떄문에 대입 불가 !!

	printf("\n");

	print_value(10, 20, add);
	print_value(10, 20, subtract);
	printf("\n");

MyColor my_color;
my_color = ORANGE;
my_color = BLACK;
my_color = RED;

MyUnion u;
u.n1 = 10;
u.n2 = 20;
u.l1 = 2000;
printf(" u.n1 = %d\n", u.n1);
printf(" u.n2 = %d\n", u.n2);
printf(" u.l1 = %d\n", u.l1);
	return 0;
}




