#include <stdio.h>

int main()
{	//정수형 자료형
	char ch = 1;	// 1 byte
	short sh = 2;	// 2 byte
	int num = 3;	// 4 byte

	//실수형 자료형
	float r1 = 1.0;	// 4 byte
	double r2 = 2.0;	// 8 byte

	printf("\n ch변수의 값은 %d이고 ch의 메모리 할당 크기는 %dbytes 입니다.\n", ch, sizeof(ch));
	printf(" r1변수의 값은 %f이고 r1의 메모리 할당 크기는 %dbytes 입니다.\n", r1, sizeof(float));

	printf("\n");

	// 배열(Array)
	// 인덱싱은 배열에서 값을 가져오는 방법
	// 인덱스는 배열의 원소들의 개수 -1만큼 지정이 가능하다.
	int nums[5] = { 10,20,30,40,50 };  // (int 형 데이터만 배열 가능) 

	// 배열로부터 값을 가져오는 방법
	printf(" nums 배열의 첫번째 값 : %d\n", nums[0]);	// nums[0] <- 인덱스
	printf(" nums 배열의 두번째 값 : %d\n", nums[1]);
	printf(" nums 배열의 다섯번째 값 : %d\n", nums[4]);

	nums[0] = 60;
	//nums[0] = 3.14f;
	for (int i = 0; i < 5; i++)
	{
		printf(" nums[%d] = %d\n", i, nums[i]);
	}

	short score[] = { 100,90,80,70 };
	
	// score 배열의 모든 원소들의 합계를 구하는 코드를 작성하세요.

	int total = 0;
	for (int i = 0; i < 4; i++)		// score[0] ~ score[3]
	{
		total += score[i];	
	}
	printf(" 총점 : %d점\n", total);
	printf(" 평균: %.2f점\n", total/4.F);
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
	printf (" nums배열의 크기 : %d bytes \n", sizeof(nums));

	int nums2[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	printf (" nums2배열의 크기 : %d bytes \n", sizeof(nums2)); //84 bytes
	printf(" nums2배열의 길이 : %d 개\n", sizeof(nums2) / sizeof(int));

	int count = sizeof(nums2) / sizeof(int);	// 배열의 원소들의 개수를 구함
	for (int i = 0; i < count; i++)
	{
		printf(" %d,", nums2[i]);
	}

	return 0;
}