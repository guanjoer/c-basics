#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main_condition(void)
{
    SetConsoleOutputCP(CP_UTF8);
    // 조별 발표 / 1 ~ 10조까지 존재 / 하루에 5조까지 발표
//    for(int i=1; i<=10; i++)
//    {
//        if(i>5)
//        {
//            printf("%d 조부터는 내일 발표하겠습니다.\n", i);
//            break;
//        }
//
//        printf("%d 조는 발표 준비바랍니다.\n", i);
//    }

    // Print Random Number
//    srand(time(NULL)); // Initialize Random number
//    int num = rand() % 100 + 1; // 1 ~ 100
//    printf("The number is %d", num);

    // 가위 바위 보
//    srand(time(NULL));
//    int num = rand() % 3; // 0 ~ 2
//
//    switch(num)
//    {
//        case 0:printf("가위"); break;
//        case 1:printf("바위"); break;
//        case 2:printf("보"); break;
//        default:printf("None");
//    }

    // Up and Down
    srand(time(NULL));
    int num = rand() % 100 + 1; //1 ~ 100

    int input;
    int life = 5;
    while (!life == 0)
    {
    printf("[*] 남은 기회는 %d번 입니다.\n", life);
    printf("[*] 번호를 맞춰보세요(1~100) : ");
    scanf_s("%d", &input);

    if (num == input)
    {
        printf("[+] You got the answer right!");
        break;
    }
    else if(input < num)
    {
        printf("[-] Up!\n");
        life--;
        //printf("[*] 남은 기회는 %d번 입니다.\n", life);
        printf("\n\n");
        continue;
    }
    else if (input >num)
    {
        printf("[-] Down!\n");
        life--;
        //printf("[*] 남은 기회는 %d번 입니다.\n", life);
        printf("\n\n");
        continue;
    }

    }

    switch(life)
    {
        case 0:printf("[-] 기회를 전부 소진하였습니다. 정답은 %d이였습니다. 다음 기회에 도전하세요.\n", num); break;
    }

    return 0;
}
