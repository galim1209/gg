#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 배열을 전달받아서 배열의 모든 요소들의 내용을 출력하기 
// 함수로 배열을 전달할때는 반드시 배열의 시작 주소와 배열의 길이를 같이 전달해야 한다!
void display_array(int p[], int count)
{
	printf(" [display_array] p의 크기 : %u\n", sizeof(p));
	printf(" p[0] = %d\n ", p[0]);
	for (int i = 0; i < count; i++)
	{
		printf("%d\t", p[i]);

	}
	printf("\n");

}

int main()
{
	/*int num;
	printf(" 정수를 입력하세요 ==>>> ");
	scanf("%d", &num);
	printf(" 입력된 정수값 : %d\n", num);*/

	char sz[] = "abcde";
	// 배열명은 주소(상수)이다.
	//char sz[30] = { 0 };	// (char : 1byte) sz를 30바이트 0으로 초기화 
	//sz[0] = 'A';	// "A" == sz
	//printf(" 문자열를 입력하세요 ==>>> ");
	//scanf("%s", sz);
	printf(" 입력된 문자열 : %s\n", sz);

	int num = 5;
	printf(" num의 주소 : %p \n", &num);
	printf(" sz의 주소 : %p \n", & sz);

	char* ptr = sz; // 가능
	//sz = ptr;	//불가능
	printf(" %c\n", sz[0]); //a
	printf(" %c\n", ptr[0]);

	int arr[] = { 10,20,30,40,50 };
	int* ptr2 = arr;	// arr = ptr2; (X)
	printf(" %d\n", arr[2]);
	printf(" %d\n", ptr2[2]);
	printf(" arr의 크기 : %u\n", sizeof(arr));
	printf(" ptr2의 크기 : %u\n", sizeof(ptr2));


	int count = sizeof(arr) / sizeof(int); // 갯수를 구함
	display_array(arr, count);


	// 소문자를 대문자로 출력하는 함수를 작성하세요 
	//char sz[] = "abcde";
	/*
	A
	B
	C
	D
	E
	*/

	//다음과 같은 형식으로 출력되는 함수를 작성하세요 
	//char sz[] = "abcde";
	/*
	abcde
	bcde
	cde
	de
	e
	*/

	


	return 0;
}


