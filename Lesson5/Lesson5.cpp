#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// 삼항 연산자
	// 조건식(비교식, 논리식) ? 참일때 반환값 : 거짓일떄 반환값 :

	int n = 5;
	char ch;

	ch = (n % 2) == 0 ? 'e' : 'o';
	printf(" ch = %c\n", ch);

	// 제어문 : if, switch
	// if문 
	/*
	if (조건식) {
		// local(지역)
		조건식이 참일때 실행되는 명령문1
		조건식이 참일때 실행되는 명령문2
		...
		}

		if (조건식) {
		// local(지역)
		조건식이 참일때 실행되는 명령문1
		조건식이 참일때 실행되는 명령문2
		...
		}
	else
		{
		조건식이 참일때 실행되는 명령문1
		조건식이 참일때 실행되는 명령문2
		}

	if (조건식1){
		조건식1이 참일떄 실행되는 명령문들...
		}
		else if (조건식2) {
		조건식2이 참일떄 실행되는 명령문들...
		}
		else if (조건식2) {
		조건식2이 참일떄 실행되는 명령문들...
		}
		...
		else {
			위에 모든 조건식들이 거짓일때 실행되는 명령문들...
			}

	*/
	
// n = 5;
	//if문의 첫번째 형식
	if (n % 2 == 0)
		
	printf("%d는 짝수입니다.\n", n);

	if (n % 2 == 0)
		printf("%d는 짝수입니다.\n", n);
	else
		printf("%d는 홀수입니다.\n", n);
	
	//나이에 따른 버스요금 결정하기
	int age = 15;
	int payment = 0;

	if (age >= 65)
	payment = 0;
	else if (age< 65 && age >=18) // 18 < age < 65
	payment = 1500;
	else if (age <= 18 && age >= 8)
	payment = 1000;
	else payment = 500;

	printf("\n ================================\n");
	//// 문제)
	//// 점수가 90 ~100이면 A학점
	//// 점수가 80 ~ 89이면 B학점
	//// 점수가 70 ~ 79이면 C학점
	//// 점수가 60 ~ 69이면 D학점
	//// 그외는 F학점

	//// 출력형식)
	//// 점수를 입력하세요 (0~100점까지) >>> xxx
	//// 점수는 90점이고, A학점입니다.
	//
	/*int score;
	printf(" 점수를 입력하세요 (0~100점까지) >>> ");
	scanf("%d", &score);
	

	if (score >= 90)
		printf("점수는 %d점이고, A학점입니다.", score);
	else if (score >= 80 && score <= 89)
		printf("점수는 %d점이고, B학점입니다.", score);
	else if (score >= 70 && score <= 79)
		printf("점수는 %d점이고, C학점입니다.", score);
	else if (score >= 60 && score <= 69)
		printf("점수는 %d점이고, D학점입니다.", score);
	else 
		printf("점수는 %d점이고, F학점입니다.", score);*/

	int grade;
	int score;
	printf(" 점수를 입력하세요 (0~100점까지) >>> ");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("점수는 %d점이고, %c학점입니다\n", score, grade);


	return 0;

}