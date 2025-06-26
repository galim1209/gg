#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

typedef unsigned int UINT;

typedef struct {
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
}USER;

void save_user(USER* pUser)
{
	if (!pUser) return;

	//  File Open Mode
	// Write Mode(w) : 데이터를 파일에 저장하기 위해서 쓰기 모드로 파일을 사용
	// Read Mode(r) : 데이터를 파일로부터 읽기 위해서 읽기 모드로 파일을 사용 
	// Append Mode(a) : 데이터를 파일에 저장하기 위해서 쓰기 모드로 파일을 사용 

	// Text Mode (t)
	// Binary Mode (b)

	// 데이터를 저장하기 위한 파일을 연다 
	
	FILE* fd = fopen("user. dat", "wb");
	if (!fd)
	{
		printf(" 파일 열기 실패 .. \n");
		return;

	}
	
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	fwrite(arr, sizeof(int), 10);*/
	
	//파일(fd)에 pUser의 내용을 저장 시도
	size_t res = fwrite(
				pUser,				// 메모리에 있는 저장할 데이터 
				sizeof(USER),		// 데이터의 단위 크기
				1,					// 각 단위의 개수	
				fd);				// 파일 핸들러 

	if (res != 1)
	{
		printf(" 저장실패 \n");
		fclose(fd);
	}
}


int main()
{

	USER user = { 0 };	// 멤버 변수중에 문자열 데이터를 쉽게 입력하기 위해서 ...

	user.id = 1;

	printf(" 이메일을 입력하세요 : ");
	scanf("%s", user.email);
	printf(" 비밀번호를 입력하세요 : ");
	scanf("%s", user.pw);
	printf(" 나이를 입력하세요 : ");
	scanf("%s", &user.age);

	// 입력받은 데이터를 파일에 저장하기 
	save_user(&user);


	return 0;
}