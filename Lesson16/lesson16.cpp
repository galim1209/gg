#include "mylib.h"


int main()
{

	////char sz[] = "Hello";	// {'H','e','l','l','o','0'}
	//// �迭�� ũ�� : 6
	//// ���ڿ��� ���� : 5

	//char sz[30] = { 0 };
	//printf(" ���ڿ��� �Է��ϼ���(���ĺ� 29�ڱ��� �Է°���) : ");
	////scanf("%s"), sz;
	//fgets(sz, 30, stdin);	//stdout : ǥ�� �����ġ , stdin : ǥ�� �Է���ġ 

	//printf(" �迭�� ���� : %u\n", sizeof(sz));
	//printf(" ���ڿ��� ���� : %u\n", strlen(sz));

	//// �Ʒ��� ���� �� �� ����.
	//// sz = "SBS Academy";	//"Hello" = "SBS Academy"; (x)

	//sz[1] = 'E';	// ����
	//printf(" %s\n", sz);

	
	//const(���)
	const char* psz = "Hello"; // const char * 
	 // psz[1] = 'E'; ���ڿ� ���� �� �������� ���� ���� �� �� ����
	printf("%s\n", psz);

	printf(" ������ ���� : %u\n", sizeof(psz));		//24��Ʈ �ý��ۿ��� 8����Ʈ
	printf(" ���ڿ��� ���� : %u\n", strlen(psz));		

	psz = "SBS\0 Academy";
	printf("%s\n", psz);
	printf(" ���ڿ��� ���� : %u\n", strlen(psz));

	printf(" ���ڿ��� ���� : %d\n", my_strlen(psz));

	//my_strlen(plz)

	//2���� �迭 
	int arr[3][5] = { { 1,2,3,4,5 },{ 6,7,8,9,10 },{ 11,12,13,14,15 } };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" %2d", arr[i][j]);
		}
		printf("\n");	// �ٹٲ�
	}	
	printf(" arr : %p\n", arr);			// arr�� �ּ�
	printf(" arr[0] [0] : %p\n", &arr[0][0]);	//arr�� ù��° �������� �ּ�
	printf(" arr[0] [4] : %p\n", &arr[0][4]);	//arr��  �ټ���° �������� �ּ�
	printf(" arr[1] [0] : %p\n", &arr[1][0]);	//arr�� �ι�°�� ù��° �������� �ּ�
	printf(" arr[1] :%p\n", arr[1]);
	

	// ���� �ʱ�ȭ 
	srand((unsigned int)time(NULL));
	
	//1���� �迭�� ��÷ ��ȣ �迭�� �����ϼ��� 
	int wins[COL];	//��÷ ��ȣ : 1 2 3 4 5 6
	// ��÷��ȣ(1���� �迭) ���� �� ��� 
	
	printf("\n\n");
	
	// lotto : 5 x 6 

	int lotto[ROW][COL] = { 0 };	// 2���� �迭�� ��� ��ҵ��� 0���� �ʱ�ȭ
	printf(" ========== ����� �ζ� ��ȣ ===========\n");
	for (int i = 0; i < ROW; i++)
	{
		random_value(lotto[i], COL, 45);
		my_qsor(lotto[i], 0, COL - 1);
		print_array(lotto[i], COL);
	}
		

	printf("\n");
	// ��÷��ȣ(wins)�� arr[i] �迭�� ��÷ ������ ī��Ʈ�Ͽ� ����ϼ���
	// 1 2 3 4 5 6 : 0�� ��ġ x 5 ��

	//
	int* ptr1[COL];		// �� �������� ������ ����(int *)�� 1���� �迭
	ptr1[0] = &lotto[0][0];

	int(*ptr2)[COL] = lotto;	// �ʱ�ȭ�� �Ǿ�� �� 
	printf("%d\n", lotto[0][1]);
	printf("%d\n", ptr2[0][2]);


	return 0;
}