#include "myheader.h"

void show_main_menu()
{
	system("cls");	// �ܼ� ȭ�� Ŭ���� 


	printf(" =======================\n");
	printf(" 1. ��� ���� �Է�\n");
	printf(" 2. ��� ���� ���\n");
	printf(" 3. ��� ���� ����\n");
	printf(" 4. ��� ���� ����\n");
	printf(" =======================\n");
	printf(" 5. �μ� ���� �Է�\n");
	printf(" 6. �μ� ���� ���\n");
	printf(" 7. �μ� ���� ����\n");
	printf(" 8. �μ� ���� ����\n");
	printf(" =======================\n");
	printf(" a. ���� ���� �Է�\n");
	printf(" b. ���� ���� ���\n");
	printf(" c. ���� ���� ����\n");
	printf(" d. ���� ���� ����\n");
	printf(" =======================\n");
	printf(" x. ��� ���� ����\n");
	printf(" =======================\n");

}

int input_menu()
{
	printf(" �޴��� ���� >>> ");
	return _getch();
}

// �μ� ���� �Է� �Լ�
UINT insert_part(PART** ppParts, UINT size)
{
	if (ppParts == NULL)
		return 0;

	system("cls");
	
	//Array
	PART* pOldParts = *ppParts;

	PART part = { 0 };
	printf(" �μ� �ڵ带 �Է��ϼ��� >>>");
	scanf("%s", &part.id);

	printf(" �μ����� �Է��ϼ��� >>>");
	scanf("%s", part.name);

	size_t new_size, old_size;
	old_size = size * sizeof(PART);		// ����Ʈ ����

	new_size = old_size + sizeof(PART); // ���ο� �޸� �Ҵ�

	PART* pNewParts = (PART*)malloc(new_size);
		if (pNewParts == NULL)
			return 0;

		if (pOldParts)
		{
			// �޸� ���� 
			memcpy(pNewParts, pOldParts, old_size);		// ���� �����͸� ���� 

		}
		memcpy(pNewParts + old_size, &part, sizeof(PART));		// �Էµ� �����͸� ������ �κп� ���� 


	*ppParts = pNewParts;
	UINT count = new_size / sizeof(PART);

	return count;
}

// �μ� ���� ��� �Լ�
UINT print_part(PART* pPart, UINT size)
{
	// for������ ��� 
	return 0;
}

