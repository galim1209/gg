#include <stdio.h>
#include <string.h>
int main()
{
	printf("\n");

	//char sz[] = { 65, 66, 67, 68,69,70,71 };
	// '\0' == 0 : null terminated chracter ( 널 터미네이드 문자)
	 char sz[] = { 'A','B','C','D','E','F','G','\0'};
	// sz 배열의 크기 : 7 bytes
	// sz 배열의 길이 : 7개

	printf(" sz 배열의 크기 : %d bytes \n", sizeof(sz));
	printf(" sz 배열의 길이 : %d 개\n", sizeof(sz) / sizeof(char));
	
	int length = sizeof(sz) / sizeof(char);
	for(int i = 0; i< length; i++)
		{
			printf(" %c", sz[i]);
		}
	printf("\n");

	
	
	// for 문을 이용하여 sz배열에 있는 값들을 모두 소문자로 변경하세요 
	for (int i=0; i< strlen(sz);i++)
	{
		sz[i] += 32;

	}
	
	printf(" sz : %s\n", sz);
	printf(" sz 문자열의 길이 : %d\n", strlen(sz));
	
	//char sz2[] = { 'H','e','l','l','o',' ','W','o','r','l','d',0 };
	char sz2[] = "Hello World";
	printf(" sz2 문자열의 길이: %d\n", strlen(sz2));
	printf(" sz2 배열의 길이: %d\n", sizeof(sz2));
	
	for (int i = 0; i < strlen(sz2); i++)
	{
		printf("%c", sz2[i]);
	}
	printf("\n");
	
	// if ( sz2[0] > 'A')
	
	//'A' == 65
	//sz2의 문자중 소문자를 대문자로 변경하여 출력하세요.
	for (int i = 0; i < strlen(sz2); i++)
	{
		if ( sz2[i] >= 'a' && sz[i] <= 'z' )	//sz[i]요소가 소문자이면 ..
			 sz2[i] -= 32;
			
	}
	printf("%s\n", sz2);	// HELLO WORLD
	
	char sz3[] = "안녕";
	printf("%s\n", sz3);
	printf("strlen(sz3) : %d\n", strlen(sz3));
	printf("strlen(sz3) : %d\n", sizeof(sz3));


		return 0;
}