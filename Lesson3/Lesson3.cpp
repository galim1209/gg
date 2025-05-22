#include <stdio.h>

int main()
{
	// 연산자 (Operator)
	// 산술연산자 : +, -, *, /, %
	// 대입연산자 : =(왼쪽에는 무조건 변수), +=, -=, *=, /=, %=
	// 증감연산자 : ++, --
	// 비교연산자 : >, >=, <, <=, ==, !==
	// 논리연산자 : &&, ||, !
	// 비트연산자 : <<, >>, &(and), |(or), ^(xor), ~
	// 기타 연산자 : ? :, &, *

	int n1 = 10;
	int n2 = 3;
	int n3;
	float f1;

	//산술 연산자
	n3 = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, n3);
	n3 = n1 - n2;
	printf("%d - %d = %d\n", n1, n2, n3);
	n3 = n1 * n2;
	printf("%d * %d = %d\n", n1, n2, n3);
	f1 = n1 / (float)n2;
	printf("%d / %d = %f\n", n1, n2, f1);
	n3 = n1 % n2;
	printf("%d %% %d = %d\n\n\n", n1, n2, n3);
	
	char n = 100;	// -128 ~ 127
	n1 = 300; 

	// 형변환(Type cast) : 형변환은 데이터의 손실이 발생될 수 있다.
	n = n1; //묵시적 형변환 
	n = (char)n1; //명시적 형변환 
	f1 = 3.3333F;
	n1 = f1;	//소수점이하는 소실됨 , 묵시적 형변환 
	n1 = (int)f1;


	// 대입 연산자 
		

	// =, - , * , / , %
	// L.V(변수) = R.Value (변수 , 상수, 함수, 연산..)
	int num = 1;
	int sum = 0;
	sum += num;     // sum = sum + num; ==> sum = 1
	sum += num;     // sum = sum + num; ==> sum = 2
	sum -= num;		// sum = sum - num; ==> sum = 1
	sum *= num;		// sum = sum * num;
	sum /= num;		// sum = sum / num;
	sum %= num;		// sum = sum % num;

	// 비교연산자 : >, >= , < , <= , == , !=
	// 비교 연산을 수행한 결과는 항상 논리값(1(true), 0(false))
	int result;
	result = 1 > 5;
	printf(" result = %d\n", result);

	result = 1 <= 5;
	printf(" result = %d\n", result);

	result = 1 == 5;
	printf(" result = %d\n", result);

	result = 1 != 5;
	printf(" result = %d\n", result);

	printf("\n=============================\n\n");

	// 논리 연산자 : &&(AND), ||(OR), !(NOT)
	num = -5;
	sum = 0;
	result = num && sum;	// T && F ==> F (result) 둘다 T일떄 T
	printf(" result = %d\n",result);

	result = num || sum;	// T && F ==> T (result) 둘중 하나만 T일때 T
	printf(" result = %d\n", result);

	result = !num;			// -5는 True이고 ===> False로 반전
	printf(" result = %d\n", result);
	
	printf("\n=============================\n\n");
	
	// 증감 연산자 : ++, --
	num = 0;
	num++;	//num = num +1; , num += 1;
	printf(" num = %d\n", num);		// 1
	++num;	//num = num +1;
	printf(" num = %d\n", num);	// 2

	printf(" num = %d\n", num++);	//print 2 먼저 출력 후 증가 => 3
	printf(" num = %d\n", ++num);	// 3+1= 4
	printf(" num = %d\n", ++num);	// 5


	//
	sum = -num; // -가 부호연산자로 사용됨 

	// 연산자 우선순위 : 시험에 자주 출제 
	/*
	1 : ++, --
	2 : +, - (부호 연산자)
	3 : *, /, %
	4 : +, -
	5 : >,>=,<,<=
	6 : ==, !=
	7 : 논리 연산자
	8 : 대입 연산자
	*/





	return 0;

}