#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int level;
int arrayFish[6];
int * cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    long startTime = 0;
    long totalElapsedTime = 0;
    long prevElapsedTime = 0;

    int userInput;

    initData();

    startTime = clock(); // ms
    while(1) // 1 == True
    {
        printFishes();

        if(checkFishAlive() == 0)
        {
            printf("\n[-] 모든 물고기가 죽었습니다.\n");
            exit(0);
        }

        printf("몇 번 어항에 물을 주시겠습니까? ");
        scanf_s("%d", &userInput);

        // Validate User Input
        if(userInput<1 || userInput>6)
        {
            printf("\n[-] 입력값이 올바르지 않습니다.\n");
            continue;
        }

        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // Unit Transformation: ms => s
        printf("\n
               1-----------------------------------\n");
        printf("[*] 총 경과시간: %ld\n", totalElapsedTime);
        printf("-----------------------------------\n");

        // 최근 흐른 시간 계산
        long elapsedSinceLast = totalElapsedTime - prevElapsedTime;
        printf("[*] 최근 경과 시간: %ld\n", elapsedSinceLast);
        printf("-----------------------------------\n");

        // 물 감소
        decreaseWater(elapsedSinceLast);

        if(cursor[userInput - 1] <= 0)
        {
            printf("[-] %d 번 물고기는 이미 죽었습니다.\n", userInput);
        }
        else if(cursor[userInput - 1] < 100)
        {
            printf("[+] %d 번 물고기에 물을 줍니다.\n\n", userInput);
            cursor[userInput - 1] += 1;
        }
        else
        {
            printf("[-] %d 번 물고기의 물이 이미 가득 찼습니다.\n", userInput);
        }

        // 레벨업 체크 (20초마다)
        if(totalElapsedTime / 20 > level - 1)
        {
            level++;
            printf("[+] 축하합니다! 기존 %d 에서 %d 로 레벨업 하였습니다.\n", level - 1, level);

            if(level == 5)
            {
                printf("[+] \n\n------------------------------------------------------\n");
                printf("[+] 축하합니다! 최고레벨인 %d 레벨을 달성하였습니다. 게임을 종료합니다.\n", level);
                exit(0);
            }
        }

        prevElapsedTime = totalElapsedTime;
    }

    return 0;
}

void initData()
{
    level = 1; // 1 ~ 5

    for(int i = 0; i < 6; i++)
    {
        arrayFish[i] = 100; // 0 ~ 100
    }

    // cursor 초기화
    cursor = arrayFish;
}

void printFishes()
{
    printf(" %3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
    for(int i = 0; i < 6; i++)
    {
        printf("   %3d", arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
    for(int i = 0; i < 6; i++)
    {
        arrayFish[i] -= (level * 3 * (int)elapsedTime);

        if(arrayFish[i] < 0)
        {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive()
{
    for(int i = 0; i < 6; i++)
    {
        if(arrayFish[i] > 0)
        {
            return 1;
        }
    }
    return 0;
}

