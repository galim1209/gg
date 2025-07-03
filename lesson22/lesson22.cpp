#include "myheader.h"

int main()
{
	PART* pParts = NULL;		// 부서 정보들을 저장하는 배열
	UINT nParts = 0;			// 부서 배열의 현재 개수 

	RANK* pRanks = NULL;	// 부서 정보들을 저장하는 배열
	UINT nRanks = 0;			// 부서 배열의 현재 개수 

	EMPLOYEE* pEmps = NULL;		// 부서 정보들을 저장하는 배열
	UINT nEmps = 0;				// 부서 배열의 현재 개수 

	//
	int menu = 0;
	do {
		show_main_menu();
		int menu = input_menu();
		
		switch (menu)
		{
		case'5':
			insert_part(&pParts, nParts);
			print_part(pParts, nParts);
			break;


		case 'x':
		case 'X': 
			goto RELEASE_AREA;
		}
		printf(" ------------------------\n");
		printf(" 계속하려면 아무키나 입력하세요 :");
		_getch();	// 멈춤 상태 유지하기 위함 

	} while (1);

	RELEASE_AREA:


	//
	printf(" \n\n프로그램이 종료되었습니다\n");

	FREE(pParts);
	FREE(pRanks);
	FREE(pEmps);

	return 0;

}
