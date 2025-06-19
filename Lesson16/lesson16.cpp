#include "mylib.h"


int main()
{

	////char sz[] = "Hello";	// {'H','e','l','l','o','0'}
	//// 배열의 크기 : 6
	//// 문자열의 길이 : 5

	//char sz[30] = { 0 };
	//printf(" 문자열을 입력하세요(알파벳 29자까지 입력가능) : ");
	////scanf("%s"), sz;
	//fgets(sz, 30, stdin);	//stdout : 표준 출력장치 , stdin : 표준 입력장치 

	//printf(" 배열의 길이 : %u\n", sizeof(sz));
	//printf(" 문자열의 길이 : %u\n", strlen(sz));

	//// 아래와 같이 할 수 없음.
	//// sz = "SBS Academy";	//"Hello" = "SBS Academy"; (x)

	//sz[1] = 'E';	// 가능
	//printf(" %s\n", sz);

	
	//const(상수)
	const char* psz = "Hello"; // const char * 
	 // psz[1] = 'E'; 문자열 내의 각 아이템의 값을 변경 할 수 없음
	printf("%s\n", psz);

	printf(" 변수의 길이 : %u\n", sizeof(psz));		//24비트 시스템에서 8바이트
	printf(" 문자열의 길이 : %u\n", strlen(psz));		

	psz = "SBS\0 Academy";
	printf("%s\n", psz);
	printf(" 문자열의 길이 : %u\n", strlen(psz));

	printf(" 문자열의 길이 : %d\n", my_strlen(psz));

	//my_strlen(plz)

	//2차원 배열 
	int arr[3][5] = { { 1,2,3,4,5 },{ 6,7,8,9,10 },{ 11,12,13,14,15 } };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" %2d", arr[i][j]);
		}
		printf("\n");	// 줄바꿈
	}	
	printf(" arr : %p\n", arr);			// arr의 주소
	printf(" arr[0] [0] : %p\n", &arr[0][0]);	//arr의 첫번째 아이템의 주소
	printf(" arr[0] [4] : %p\n", &arr[0][4]);	//arr의  다섯번째 아이템의 주소
	printf(" arr[1] [0] : %p\n", &arr[1][0]);	//arr의 두번째의 첫번째 아이템의 주소
	printf(" arr[1] :%p\n", arr[1]);
	

	// 랜덤 초기화 
	srand((unsigned int)time(NULL));
	
	//1차원 배열로 당첨 번호 배열을 생성하세요 
	int wins[COL];	//당첨 번호 : 1 2 3 4 5 6
	// 당첨번호(1차원 배열) 생성 및 출력 
	
	printf("\n\n");
	
	// lotto : 5 x 6 

	int lotto[ROW][COL] = { 0 };	// 2차원 배열의 모든 요소들을 0으로 초기화
	printf(" ========== 사용자 로또 번호 ===========\n");
	for (int i = 0; i < ROW; i++)
	{
		random_value(lotto[i], COL, 45);
		my_qsor(lotto[i], 0, COL - 1);
		print_array(lotto[i], COL);
	}
		

	printf("\n");
	// 당첨번호(wins)와 arr[i] 배열의 당첨 개수를 카운트하여 출력하세요
	// 1 2 3 4 5 6 : 0개 일치 x 5 줄

	//
	int* ptr1[COL];		// 각 아이템이 포인터 변수(int *)인 1차원 배열
	ptr1[0] = &lotto[0][0];

	int(*ptr2)[COL] = lotto;	// 초기화가 되어야 함 
	printf("%d\n", lotto[0][1]);
	printf("%d\n", ptr2[0][2]);


	return 0;
}