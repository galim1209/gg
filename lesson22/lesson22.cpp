#include "myheader.h"

int main()
{
	PART* pParts = NULL;		// �μ� �������� �����ϴ� �迭
	UINT nParts = 0;			// �μ� �迭�� ���� ���� 

	RANK* pRanks = NULL;	// �μ� �������� �����ϴ� �迭
	UINT nRanks = 0;			// �μ� �迭�� ���� ���� 

	EMPLOYEE* pEmps = NULL;		// �μ� �������� �����ϴ� �迭
	UINT nEmps = 0;				// �μ� �迭�� ���� ���� 

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
		printf(" ����Ϸ��� �ƹ�Ű�� �Է��ϼ��� :");
		_getch();	// ���� ���� �����ϱ� ���� 

	} while (1);

	RELEASE_AREA:


	//
	printf(" \n\n���α׷��� ����Ǿ����ϴ�\n");

	FREE(pParts);
	FREE(pRanks);
	FREE(pEmps);

	return 0;

}
