#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	

	/*
	*
	swich (변수(또는 함수, 수식))
	{
	case n1;
		위 변수가 n1과 같을떄 실행되는 명령문들...;
		break;

	case n2;
		위 변수가 n2과 같을떄 실행되는 명령문들...;
		break;

	case n3;
		위 변수가 n3과 같을떄 실행되는 명령문들...;
		break;
	....
	default:
		위 변수가 모든 case에 해당되지 않을때 실행되는 명령문들.. */
		// 사용자로부터 메뉴를 선택받아서 해당 메뉴를 출력하는 코드를 작성 

//	printf(" 1. 새파일\n");
//	printf(" 2. 파일 열기\n");
//	printf("3. 파일 저장\n");
//	printf(" 4. 인쇄\n");
//	printf("\n====================\n");
//	printf(" 0. 프로그램 종요\n");
//	printf("\n====================\n");
//
//	printf(" 메뉴 번호를 선택하여 입력하세요 >>> ");
//	int menu
//		scanf("% d"), & menu);
//		printf(" 선택된 메뉴는 %d\n", menu);
//
//		switch (menu)
//		{
//		case 1:
//			printf("새 파일이 선택되었습니다\n");
//			break
//
//		case 2:
//			printf("파일열기가 선택되었습니다\n");
//			break
//
//		case 3:
//			printf("파일저장이 선택되었습니다\n");
//			break
//
//		case 4:
//			printf("인쇄이 선택되었습니다\n");
//			break
//
//		case 0:
//			printf("새 파일이 선택되었습니다\n");
//			break
//
//				default // menu값이 0 ~ 5사이의 값이 해당되지 않을때 
//				printf("알수없는 값이 설정되었습니다\n");
//}


	int score;
	int grade;

	printf(" 점수를 입력하세요(0 ~ 100점까지) >>>  ")
		scanf ("%d", &score);
	
	int n = score / 10;
	switch (n)
	{
	case 10;
	case 9;
		grade = 'A';
		break;
			
	case 8;
		grade = 'B';
		break;

	case 7;
		grade = 'C';
		break;
	case 6;
		grade = 'D';
		break;
	default;
	grade = 'F';
	}
	
	printf("점수는 % d점이고, % c학점입니다", score, grade);
	
	return 0;
	;
}
