  //#include : 전처리문
#include <stdio.h>  // 컴파일 하기전 헤더파일 (stdio.h) 포함시킴 
// stdio.h : standard input & output (표준 입출력)

//매크로 상수 
#define MAX_VALUE	100


int main()
{
	//콘솔에 내용을 출력하는 함수 
	printf(" ㅎㅇ \n C언어시간입니다\n\n");

	// 메모리(Ram) 에 올라가 있다 = 실행단계 = 인스턴트
	//
	// 변수와 자료형
	// 

	//정수형 변수
	char ch; // char형 변수 ch를 선언(만듬) , 1바이트(8 bit), 2^8가지의 서로다른 데이터를 표현(저장)할 수 있다. -128 ~ 127
	//정수를 가지고 문자를 표현해주는 변수 
	short n; // 2바이트 , 2^16
	int num; // 4바이트 , 2^32
	long money; // 4바이트(8바이트) , 2^32
	long long big_number; // 8바이트 , 2^64
	
	// 양의 정수형을 선언 
	unsigned char uch; //char를 음수를 제외 255까지 표현가능 0 ~ 255
	unsigned short ush;
	unsigned int un;

	
	// 실수형 변수
	float	pi;		// 4바이트
	double	ma;		// 8바이트
	long double real;//16바이트

	printf(" ch의 크기 : %u\n", sizeof(ch)); //sizeof : 연산자,키워드 
	printf(" n의 크기: %u\n", sizeof(n));
	printf(" num의 크기 : %u\n", sizeof(num));
	printf(" money의 크기 : %u\n", sizeof(money));
	printf(" longbig_number의 크기: %u\n", sizeof(big_number));
	printf(" float의 크기: %u\n", sizeof(pi));
	printf(" double의 크기: %u\n", sizeof(ma));
	printf(" long double의 크기: %u\n\n", sizeof(real));
	
	
	ch = 127;	//리터럴(숫자, 문자, 문자열)
	printf(" ch의 값 : %d\n", ch);

	ch = 128;
	printf(" ch의 값 : %d\n", ch);

	//변수명 작성 규칙
	// 1. 대소문자를 구분한다. Num 과 num은 서로 다른 변수이다.
	// 2. 알파벳 대문자, 소문주, 숫자, _(언더바)를 사용할 수 있다.
	// 3. 키워드를 사용할 수 없다.
	// 4. 숫자가 제일 처음에 나올수 없다. num4(o) , 4num(x)

	//변수명 작성에 대한 권장 사항
	// 1. 변수명은 모두 소문자로만 구성한다. Num --> num
	// 2. 변수명만 보면 어떤 자료가 저장되는지 유추가 가능하도록 작성. int age:
	// 3. 두개 이상의 단어를 사용하여 작성할떄 언더바로 이어붙임. my_data , myData;

	//ASCII
	ch = 'a';	//문자 리터럴(Literal)을 대입 (작은 따음표:문자 하나,큰따음표->문자열)
	ch = 97;	//숫자 리터럴을 대입
	printf("\n ch의 값 : %d\n", ch);//숫자로 출력 %d
	printf(" ch의 값 : %c\n", ch);//문자로 출력 %c

	//심볼릭 상수(Symbolic Constant)
	const float PI = 3.14F; //constant(상수) 선언 *값을 바꿀수 없음, 값을 보호하시 위해 선언
	


	return 0;
}

//컴파일러 = C언어 변역기 