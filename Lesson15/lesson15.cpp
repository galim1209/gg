
#include "mylib.h"




int main()
{
	printf("1���� 10������ �� : %d\n", sum(10)); 
		printf("1���� 10������ ���丮�� : %d\n", factorial(10));


	int arr[COUNT] = { 0 };

	/*
	time_t tm = time(NULL);
	unsigned int init = (unsigned int)tm;
	srand(init);
	*/

	// Randomize (���� �ʱ�ȭ)
	srand((unsigned int)time(NULL));
	random_value(arr, COUNT);

	printf("===== �ʱⰪ =====\n");
	print_array(arr, COUNT);

	//sequence_sort(arr, COUNT-1);	// ���� ���� �Լ� ȣ��
	my_qsor(arr, 0,COUNT-1);

	printf("===== ������ =====\n");
	print_array(arr, COUNT);
	

	printf("===== ���� Ž�� �׽�Ʈ =====\n");
	printf("ã�� ���� �Է��ϼ��� >>> ");
	int num;
	scanf("%d", &num);	// ã�� ��
	int idx = find_value(arr, COUNT, num);	// ���� Ž��
	if (idx < 0)
		printf("%d�� �迭���� ã�� �� �߽��ϴ�\n", num);
	else
		printf("%d�� �迭�� [%d] index ��ġ�� �ֽ��ϴ�.\n", num, idx);


	idx = binary_search(arr, COUNT, num);	// ���� Ž��
	if (idx < 0)
		printf("%d�� �迭���� ã�� �� �߽��ϴ�\n", num);
	else
		printf("%d�� �迭�� [%d] index ��ġ�� �ֽ��ϴ�.\n", num, idx);


	return 0;
}


