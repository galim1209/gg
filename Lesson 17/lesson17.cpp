#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <time.h>
#include <string.h> // 문자열 처리를 하는 함수들이 정의되어 있는 헤더 파일
#include <stdlib.h>

#define MAX_VALUE			100

#define CHECK_PARAM(x)		if(!x) return
#define RET_CHECK_PARAM(x)		if(!x) return NULL



// 타입 재정의 
typedef unsigned short MyAge;
typedef const char* Mystring;

// 구조체(Structure)
typedef struct {
	// member 
	unsigned int no;			// no		4
	char name[30];				// 이름		30
	MyAge age;					// 나이		2
	unsigned char gender;		// 성별		1
} PERSON;

void print_person(PERSON* p)
{
	CHECK_PARAM(p);


	printf(" 번호 : %u\n", p->no);	//  (*p).no도 가능하긴 함 
	printf(" 이름 : %s\n", p->name);
	printf(" 나이 : %u\n", p->age);
	printf(" 성별 : %s\n", (p->gender == 1) ? "남자" : "여자");

}
 
//memcpy(*pDest, pSrc, size_t size);
PERSON copy_person(PERSON* p)
{
	//CHECK_PARAM(p);

	PERSON copy;	// 지역변수

	copy.no = p->no;
	strcpy(copy.name, p->name);
	copy.age = p->age;
	copy.gender = p->gender;

	return copy;	// 지역 변수의 주소를 반환하면 안된다 !!
}

PERSON* get_person(PERSON* p)
{
	// ...
	return NULL;
}


int main()
{
	// Data Type : char, short, int, long, float, double ... pointer(Address)

	size_t ullSize = sizeof(int);	//4
	MyAge age;
	Mystring name = "홍길동";	// const char *
	name = "세종대왕";
	// name[0] = 'a';

	char car[20] = "Sonata";
	car[0] = 'C';
	car[1] = 'o';
	// car="Grandure;"

	time_t tm = time(NULL);

	PERSON p1 = { 0 }; // 40바이트의 구조체 변수의 내용을 모두 0으로 초기화
	PERSON p2;

	p1.no = 1;
	strcpy(p1.name, "홍길동");	// p1.name = "홍길동" , 문자열 복사 함수
	p1.age = 20;
	p1.gender = 1;
	
	printf(" PERSON형의 크기 : %llu\n", sizeof(PERSON));
	print_person(&p1);	// 포인터를 이용하여 전달 == >  메모리 절약, 시간 절약 
	
	printf("\n===============\n\n");
	
	// 깊은 복사(DEEP copy)
	memcpy(&p2, &p1, sizeof(PERSON)); // 메모리 복사(대상 , 원본, 복사할 크기)

	print_person(&p2);
	
	/*p2=copy_person(&p1);
	print_person(&p2);*/


	return 0;

}