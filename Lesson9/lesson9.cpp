#include <stdio.h>

int main()

{	// 반복 횟수가 정확히 정해져있을때 주로 씀
	//for (초기식; 조건식; 증감식)
	//{
	//		반복 실행될 명령문들...
	//}

	int i;
	for (i = 0; i < 10; i++)
	{
		printf(" %d\t", i);
	}
	
	
	
	for (i = 0; i < 10; i++)
	
		printf(" \n 4 X %d = %d", i , 4*i);
	
	printf("\n");
	
	for (i = 2; i < 10; i++)	//단수
	{
		
		for (int a = 2; a < 10; a++)	//곱수
			printf(" %d x %d = %d\n", i, a, i * a);

		printf("\n");
	}
	//
	/*
	
	
	
	
	*/

		
	
	
	


	return 0;

}