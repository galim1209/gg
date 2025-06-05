#include <stdio.h>

int main()
{	//������ �ڷ���
	char ch = 1;	// 1 byte
	short sh = 2;	// 2 byte
	int num = 3;	// 4 byte

	//�Ǽ��� �ڷ���
	float r1 = 1.0;	// 4 byte
	double r2 = 2.0;	// 8 byte

	printf("\n ch������ ���� %d�̰� ch�� �޸� �Ҵ� ũ��� %dbytes �Դϴ�.\n", ch, sizeof(ch));
	printf(" r1������ ���� %f�̰� r1�� �޸� �Ҵ� ũ��� %dbytes �Դϴ�.\n", r1, sizeof(float));

	printf("\n");

	// �迭(Array)
	// �ε����� �迭���� ���� �������� ���
	// �ε����� �迭�� ���ҵ��� ���� -1��ŭ ������ �����ϴ�.
	int nums[5] = { 10,20,30,40,50 };  // (int �� �����͸� �迭 ����) 

	// �迭�κ��� ���� �������� ���
	printf(" nums �迭�� ù��° �� : %d\n", nums[0]);	// nums[0] <- �ε���
	printf(" nums �迭�� �ι�° �� : %d\n", nums[1]);
	printf(" nums �迭�� �ټ���° �� : %d\n", nums[4]);

	nums[0] = 60;
	//nums[0] = 3.14f;
	for (int i = 0; i < 5; i++)
	{
		printf(" nums[%d] = %d\n", i, nums[i]);
	}

	short score[] = { 100,90,80,70 };
	
	// score �迭�� ��� ���ҵ��� �հ踦 ���ϴ� �ڵ带 �ۼ��ϼ���.

	int total = 0;
	for (int i = 0; i < 4; i++)		// score[0] ~ score[3]
	{
		total += score[i];	
	}
	printf(" ���� : %d��\n", total);
	printf(" ���: %.2f��\n", total/4.F);
	printf("\n");
	// int nums[5] = {10,20,30,40,50};
	/*
	num[0] : 1
	num[1] : 2
	num[2] : 3
	num[3] : 4
	num[4] : 5
	*/
	
	

	nums[0]=1;
	for (int i = 0; i < 5; i++)
	{
		nums[i] = i + 1;
		printf(" num[%d] : %d\n", i , nums[i]);

	}
	printf (" nums�迭�� ũ�� : %d bytes \n", sizeof(nums));

	int nums2[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	printf (" nums2�迭�� ũ�� : %d bytes \n", sizeof(nums2)); //84 bytes
	printf(" nums2�迭�� ���� : %d ��\n", sizeof(nums2) / sizeof(int));

	int count = sizeof(nums2) / sizeof(int);	// �迭�� ���ҵ��� ������ ����
	for (int i = 0; i < count; i++)
	{
		printf(" %d,", nums2[i]);
	}

	return 0;
}