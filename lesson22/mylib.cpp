#include "myheader.h"

void show_main_menu()
{
	system("cls");	// 콘솔 화면 클리어 


	printf(" =======================\n");
	printf(" 1. 사원 정보 입력\n");
	printf(" 2. 사원 정보 출력\n");
	printf(" 3. 사원 정보 수정\n");
	printf(" 4. 사원 정보 삭제\n");
	printf(" =======================\n");
	printf(" 5. 부서 정보 입력\n");
	printf(" 6. 부서 정보 출력\n");
	printf(" 7. 부서 정보 수정\n");
	printf(" 8. 부서 정보 삭제\n");
	printf(" =======================\n");
	printf(" a. 직급 정보 입력\n");
	printf(" b. 직급 정보 출력\n");
	printf(" c. 직급 정보 수정\n");
	printf(" d. 직급 정보 삭제\n");
	printf(" =======================\n");
	printf(" x. 사원 정보 삭제\n");
	printf(" =======================\n");

}

int input_menu()
{
	printf(" 메뉴를 선택 >>> ");
	return _getch();
}

// 부서 정보 입력 함수
UINT insert_part(PART** ppParts, UINT size)
{
	if (ppParts == NULL)
		return 0;

	system("cls");
	
	//Array
	PART* pOldParts = *ppParts;

	PART part = { 0 };
	printf(" 부서 코드를 입력하세요 >>>");
	scanf("%s", &part.id);

	printf(" 부서명을 입력하세요 >>>");
	scanf("%s", part.name);

	size_t new_size, old_size;
	old_size = size * sizeof(PART);		// 바이트 단위

	new_size = old_size + sizeof(PART); // 새로운 메모리 할당

	PART* pNewParts = (PART*)malloc(new_size);
		if (pNewParts == NULL)
			return 0;

		if (pOldParts)
		{
			// 메모리 복사 
			memcpy(pNewParts, pOldParts, old_size);		// 원래 데이터를 복사 

		}
		memcpy(pNewParts + old_size, &part, sizeof(PART));		// 입력된 데이터를 마지막 부분에 복사 


	*ppParts = pNewParts;
	UINT count = new_size / sizeof(PART);

	return count;
}

// 부서 정보 출력 함수
UINT print_part(PART* pPart, UINT size)
{
	// for문으로 출력 
	return 0;
}

