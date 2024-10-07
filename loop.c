#include <stdio.h>

int main(void)
{

    // for(선언; 조건; 증감)
//    for(int i=1; i<10; i++)
//    {
//        printf("Test %d\n", i);
//    }
//


    // While(조건)
//    int i =1;
//    while(i<= 10)
//    {
//        printf("While Test: %d\n", i++);
////        i++;
//    }

    // do {} while(조건)
//    int i = 1;
//    do {
//        printf("do While Test: %d\n", i++);
//    } while(i<= 10);

    // 이중 반복문
//    for (int i =1; i<=3; i++)
//    {
//        printf("First Loop: %d\n", i);
//
//        for(int j=1; j<=5; j++)
//        {
//            printf("    Second Loop: %d\n", j);
//        }
//    }

    // 구구단
//    for (int i=1; i<=9; i++)
//    {
//        printf("[+] %d단\n", i);
//        for(int j=1; j<=9; j++)
//        {
//            printf("%d X %d = %d\n", i, j, i*j);
//        }
//        printf("--------------------\n");
//
//    }

    // * 피라미드
//    for(int i=0; i<5; i++)
//    {
//        for(int j=0; j<=i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }

    // 역 * 피라미드
//    for(int i=0; i<5; i++)
//    {
//        for(int j=i; j< 5-1; j++)
//        {
//            printf(" ");
//        }
//
//        for(int k=0; k<=i; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }

    // 피라미드 쌓기
    int input;
    printf("How many floors do you want to build? :");
    scanf_s("%d", &input);
    getchar();



    for (int i = 0; i<input; i++)
    {
        for(int k=i; k< input - 1; k++)
        {
            printf(" ");
        }

        for(int j = 0; j< i*2+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
