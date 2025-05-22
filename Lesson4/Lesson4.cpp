
#include <stdio.h>

int main()
{
    // 비트 연산자 : <<, >>, &, |, ~, ^(eXclusive OR)
    //  sigh  64 32 16 8 4 2 1 
    //ex) 


    short n3 = 0;
    short n1 = 3;    // 0011
    short n2 = 5;    // 0101
   // n3 = n1 & n2;  //0001 = 1 // bit and
    n3 = n1 | n2;    // 0111 = 7 // bit or
    printf(" n3 = %d\n", n3);

    n3 = ~n1;
    printf(" n3 = %d\n", n3);

    //XOR
    n3 = n1 ^ n2;   // 0110
    printf(" n3 = %d\n", n3);

    // 0011(3) ===> 1100 (12)
    n3 = n1 << 2; // n1을 왼쪽으로 2비트 이동시킴 
    printf(" n3 = %d\n", n3);
    
    // 0101(5) ===> 0001 (1) //음수인 경우 이동 X
    n3 = n2 >> 2;  
    printf(" n3 = %d\n", n3);


    /* git config --global uer.name "xxxx"
        git config --global uer.email "xxxx@naver.com"
        
        //git first start ..
        git clone https://github.com/galim1209/c_lesson.git
        
        복습을 후 저장 
        // 수정한 또는 새로 만든 소스 파일들을 모두 스테이징시킨다 
            git add .

            git commit -m "작업 name .. commit name"
            
            git log  ( commit 이력 조회)
            git status (현재 리파지토리의 상태를 조회)

            git push origin master(or main) 

            //학원에서
            git pull origin master(or main)
        */
   

    return 0;

}