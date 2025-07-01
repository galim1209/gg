#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef unsigned int UINT;

typedef struct {
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
} USER;

// 전역 변수(Global variable)
int g_age;


void save_user(USER* pUser)
{
	if (!pUser) return;

	// File Open Mode
	// Write Mode(w) : 데이터를 파일에 저장하기 위해서 쓰기 모드로 파일을 사용
	// Read Mode(r) : 데이터를 파일로부터 읽기 위해서 읽기 모드로 파일을 사용
	// Append Mode(a) : 데이터를 파일에 저장하기 위해서 쓰기 모드로 파일을 사용

	// Text Mode(t)
	// Binary Mode(b)

	// 데이터를 저장하기 위한 파일을 연다
	FILE* fd = fopen("user.dat", "wb");
	if (!fd)
	{
		printf("파일 열기 실패!\n");
		return;
	}

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	fwrite(arr, sizeof(int), 10)*/

	// 파일(fd)에 pUser의 내용을 저장 시도
	size_t res = fwrite(
		pUser,			// 메모리에 있는 저장할 데이터
		sizeof(USER),	// 데이터의 단위 크기
		1,				// 각 단위의 개수
		fd);			// 파일 핸들러
	if (res != 1)
		printf("저장 실패\n");

	fclose(fd);
}

void load_user(USER* pUser)
{
	if (!pUser) return;

	// 파일(user.dat)을 읽기 모드로 오픈한다.
	FILE* fd = fopen("user.dat", "rb");	// r모드는 파일이 없으면 실패한다.
	if (!fd)
	{
		printf("파일 열기 실패!\n");
		return;
	}

	fread(pUser, sizeof(USER), 1, fd);

	fclose(fd);
}

void save_text(const char* text)
{
	FILE* fd = fopen("my_text.txt", "wt");
	if (!fd)
	{
		printf("파일 오픈 실패!\n");
		return;
	}

	// fputs(text, fd);
	size_t len = strlen(text);	// text 문자열의 길이를 구하여 len에 저장
	fwrite(text, sizeof(char), len, fd);

	fclose(fd);
}


void load_text()
{
	int number = 10;		// 지역변수: 함수가 실행될때 할당, 함수가 종료되면 해제
	static int my_st = 10;	// static: 프로그램이 시작할때 할당, 프로그램 종료될때 해제

	FILE* fd = fopen("my_text.txt", "rt");
	if (!fd)
	{
		printf("파일 오픈 실패!\n");
		return;
	}

	fseek(fd, 0, SEEK_END);	// cursor를 파일의 가장 마지막 위치로 이동시킴
	long size = ftell(fd);	// 이 위치의 값은 파일 크기(byte 단위)가 된다
	fseek(fd, 0, SEEK_SET);	// cursor를 BOF지점으로 이동시킴

	char* text = (char*)malloc(size);	// heap에 할당 받음
	if (text)
	{
		memset(text, 0, size);
		fread(text, sizeof(char), size, fd);
		printf("%s\n", text);
		free(text);	// heap할당받은 메모리 해제(반환)
	}
	// printf("%d\n", size);
	fclose(fd);

	/*printf("%d\t", ++my_st);
	printf("%d\n", ++number);*/
}



int main()
{
	USER user = { 0 };	// 멤버 변수중에 문자열 데이터를 쉽게 입력하기 위해서...

	user.id = 1;
	printf("이메일을 입력하세요 : ");
	scanf("%s", user.email);

	printf("비밀번호를 입력하세요 : ");
	scanf("%s", user.pw);

	printf("나이를 입력하세요 : ");
	scanf("%d", &user.age);

	// 입력받은 데이터를 파일에 저장하기
	save_user(&user);

	load_user(&user);

	printf("ID : %u\n", user.id);
	printf("Email : %s\n", user.email);
	printf("PASSWORD : %s\n", user.pw);
	printf("AGE : %u\n", user.age);

	char text[2000];

	/*const char* text = "Hello\n안녕하세요\nNice to meet you\n반갑습니다\n";
	save_text(text);*/


	load_text();

	return 0;
}