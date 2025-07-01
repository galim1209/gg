#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int	UNIT;


//int* alloc_memory(const UNIT size)
//{
//	int *ptr = 
//
//	return NULL;
//}

UNIT read_file(int** pptr, const char* filename)
{

}

UNIT alloc_memory(int** pptr, const UNIT size)
{
	*pptr = (int *) malloc(size);
	if (!*pptr)
	{
		printf(" 메모리를 할당하지 못 했습니다\n");
		return 0;
	}

	

	return size;

}
void print_array(const int* ptr, const UNIT size)
{
	for (int i = 0; i < size; i++)
	{
		printf(" %2d ", ptr[i]);

	}
	printf("\n");
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	int num = 10;			// 지역변수( 자동 변수 )
	int* ptr_num = NULL;	// pointer 변수
	ptr_num = &num;		//num의 주소를 ptr_num에 대입 
	int** pptr;			// 2 차원 포인터
	pptr = &ptr_num;	// 2차원 포인터는 1차원 포인터의 주소를 저장할 수 있다. 

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf(" arr : ");
	print_array(arr, 10);


	UNIT size = 10;
	int* pArr = NULL;	// 가변 배열로 사용할 예정
	pArr = arr;
	printf(" pArr : ");
	print_array(pArr, size);

	// pArr에 10칸짜리 배열을 할당
	
	size = 10 * sizeof(int);	// 배열에 할당될 메모리의 크기를 구함
	alloc_memory(&pArr, size);

	for (int i = 0; i < 10; i++)
	{
		pArr[i] = i * 2;

	}
	printf(" pArr : ");
	print_array(pArr, 10);

	printf(" arr : ");
	print_array(arr, 10);

	free(pArr);
	pArr = NULL;
	
	printf(" 프로그램이 정상 종료됨 \n\n");
	//pArr에 20칸짜리 배열을 할당 
	

	return 0;

}