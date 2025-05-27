#include <stdio.h>
#include <conio.h>

int main()

{
	int i = 0;
	/*
	do 
	{	
		반복 실행할 명령문들...
	} while(조건식);
	*/

	char ch = '1';

	do {
		printf(" 1. 새파일\n");
		printf(" 2. 파일열기\n");
		printf(" 3. 파일저장\n");
		printf(" 4. 인쇄\n");
		printf(" =============== \n");
		printf(" x. 프로그램 종료 \n");
		printf(" =============== \n");
		printf(" 메뉴를 선택하세요 : ");

		ch = _getch();
		printf("\n");
	
	} while (ch != 'x' && ch != 'X');
	{
		printf(" 1. 새파일\n");
		printf(" 2. 파일열기\n");
		printf(" 3. 파일저장\n");
		printf(" 4. 인쇄\n");
		printf(" =============== \n");
		printf(" x. 프로그램 종료 \n");
		printf(" =============== \n");
		printf(" 메뉴를 선택하세요 : ");

	}
	printf(" do ~ while 반복문이 종료되었습니다. \n");

	return 0;
}
