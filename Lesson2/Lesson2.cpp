#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//제어문자
	printf(" 안녕하세요\n");	// \n : 줄바꿈, New Line
	printf(" 안녕하세요\t ");	// \t : tab 기능 수행
	printf("tab만큼 이동함\n");
	printf(" Hello C");
	printf("\r Welcome C"); 
	//printf("\rWelcome C") // \r : 커서를 라인의 처음 위치로 이동시킨다.
	printf("\b\b C++\n");		// \b : back space 기능
	printf(" 경기도 \"수원시\"\n");		// \", \' : 인용부호 출력
	printf(" c:\\test.txt\n");	// \\ :  \기호를 출력한다.

	//
	int age = 10;	//4 byte
	char ch = 'K';	//1 byte
	short kor = 96; //2 byte
	float pi = 3.14F;	//4 byte
	double math = 42.195;

	printf(" 나이는 %d 입니다.\n", age);	//%d : 형식문자 (Formatted Character)
	printf(" %corea\n", ch);
	printf(" 국어점수 : %hd\n", kor);	//short형 정수
	printf(" PI : %f\n", pi);
	printf(" PI : %4.2f\n", pi);	//소수점 포함 4자리를 확보하고 소수점이하는 2자리로 제한함 
	printf(" marathon : %6.1f\n", math);
	printf(" marathon : %.3f\n", math);
	printf(" %5d \n", age);		// 5자리를 확보하고 우측정렬하여 출력 
	printf(" %-5d \n", age);	// 5자리를 확보라고 좌측정렬하여 출력(-)

	// 16 진수 출력
	printf(" 10 = %X\n", age);  
	
	// %기호를 출력 
	printf(" 상위 %d%%\n", kor);
	
	// %s : 문자열 출력
	printf(" 내 이름은 %s \n", "유가림입니다");

	// %p : 특정 객체의 메모리 주소를 출력한다.
	printf(" ch의 주소 : %p\n", &ch);	// [& : 주소 연산자, 변수앞에 단독으로 사용된 경우]

	printf(" 내 이름은 %s 이고, 나이는 %d살 입니다.", "유가림", age);


	printf("\n\n=================================================\n");
	// 표준 입력 함수 : scanf 
	printf("나이를 입력하세요 >>> ");
	scanf("%d", &age);	// 정수형 데이터 한개를 입력받는다. 
	printf(" 내 이름은 %s 이고, 나이는 %d살 입니다.\n", "유가림", age);

	printf(" 당신의 키를 입력하세요 >>> ");
	float height;
	scanf("%f", &height);
	printf(" 입력받은 키는 %.2fcm입니다\n", height);
	
	scanf("%c", &ch);	//입력 버퍼 클리어 (엔터키 비움)
	printf(" 알파벳 한자를 입력하세요 >>> ");
	scanf("%c", &ch);	//알파벳 한글자 입력받기 
	printf(" 입력하신 알파벳은 %c입니다\n",ch);

	

	printf(" 국어점수를 입력하세요 >>> ");
	scanf("%hd", &kor);		//[kor은 short형이므로 반드시 %hd를 사용해야 한다.]
	printf(" 입력된 국어점수는 %d점 입니다\n",kor);

	short eng;
	short history;
	printf(" 국어, 영어, 역사 점수를 입력하세요 >>> ");
	scanf("%hd %hd %hd", &kor, &eng, &history);
	printf(" 국어:%d점, 영어:%d점, 역사%d점\n", kor, eng, history);


	

	return 0;

}