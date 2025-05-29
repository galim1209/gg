#include <stdio.h>




int main() 

{	// 반복 횟수가 정확히 정해져있을때 주로 씀
	//for (초기식; 조건식; 증감식)
	//{
	//		반복 실행될 명령문들...
	//}

	//0	1	2	3	4	5	6	7	8	9	0
	int i;
	for (i = 0; i < 10; i++)
	{
		printf(" %d\t", i);
	}
	
	printf("\n\n ========================== \n\n");
	
	// 2~ 9 곱셈
	for (i = 0; i < 10; i++)
	
		printf(" \n 4 X %d = %d", i , 4*i);
	
	printf("\n");
	
	for (i = 2; i < 10; i++)	//단수
	{

		for (int a = 2; a < 10; a++)	//곱수
			printf(" %d x %d = %d\n", i, a, i * a);

		printf("\n");
	}

	printf("\n\n=========================\n\n");

	// 2 X 1 = 2	3 X 1 = 3	4 X 1 = 4
	for (int gop = 1; gop < 10; gop++)
		{
		for (int dan = 2; dan < 10; dan++)
		{
			printf(" %d X %d = %d\t", dan, gop, dan * gop);
		}
			printf("\n");
		}

	printf("\n\n==========================\n\n");
		
	//
	/*
	1	2	c	4	5	c	7	8	9	10	
	11	12	13	14	15	16	17	18	19	20
	21	22	...							c
	c	c	C
	...
	81	82	83 ...
	c	c	C	c	c	C	c	c	C	100
	*/
	
		
		
		for (int i = 1; i <= 100; i++)
			{
				int ten = i / 10;	// i에서 10의 자리를 분리 
				int il = i % 10;	// i 에서 1의 자리를 분리
				
				char ch = 'a';

				if (ten % 3 == 0 && ten !=0)	// 10의 자리수가 3의 배수라면 
					ch = 'c';		// ch의 값을 'c'로 변경
				
				if (il % 3 == 0 && ch == 'c'&& il != 0)	// 1의 자리수가 3의 배수이고 10의 자리도 10의 배수라면
					ch = 'C';		//ch에 'C'로 변경
				else if (il % 3 == 0 && il != 0)			//그렇지 않고 1의 자리수만 3의 배수라면
					ch = 'c';		//ch에 'c'를 대입

				if (ch == 'c' || ch == 'C') //ch의 값이 'a'가 아니고, 'c'나 'C'라면 숫자대신 ch를 출력
					printf("%c\t", ch);
				else
					printf("%d\t", i);	//위의 경우에 해당하지 않는다면 i를 출력 
						
				if (i % 10 == 0)
				printf("\n");
				
			}
		
	
	

	return 0;

}