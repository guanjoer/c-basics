#include <stdio.h>
#include <time.h>


// 5 stages, mental calculation problem, 3 life per each stage
int getRandomNumber(int level);
void displayProblem(int i, int num1, int num2);


int main(void)
{
    srand(time(NULL)); // Reset random number
    printf("############################################\n");
    printf("[*] 총 5 문제이며, 한 문제 당 기회는 3번 입니다.\n");
    printf("############################################\n\n");

    int life = 3;
    int level = 1;
    for(int i= 1; i<=5; i++)
    {
        int num1 = getRandomNumber(level);
        int num2 = getRandomNumber(level);

        int userInput;
        displayProblem(i, num1, num2);
        scanf_s("%d", &userInput);

        int answer = num1 * num2;
        if(userInput == answer)
        {
            printf("[+] Congratuations! You got the right Answer!\n");
            printf("\n\n");
            life = 3;
            level++;
            continue;
        }
        else if(userInput != answer)
        {
            life--;
            while(life > 0)
            {
                printf("-----------------------------------------\n");
                printf("[-] 기회는 총 %d 번 남았습니다.\n", life);
                displayProblem(i, num1, num2);
                scanf_s("%d", &userInput);

                int answer = num1 * num2;
                if(userInput == answer)
                {
                    printf("[+] Congratuations! You got the right Answer!\n");
                    printf("\n\n");
                    life = 3;
                    level++;
                    break;
                }
                else {
                    life--;
                    continue;
                }

            }
        }

        if(life == 0)
        {
            printf("\n");
            printf("[-] 기회를 전부 소진하였습니다. 정답은 %d 이였습니다. 다음 기회에 도전하세요.\n", answer);
            break;
        }


    }

    // printf("Level: %d\n", level);
    if(level ==6)
    {
        printf("############################################\n");
        printf("[+] 축하합니다! 모든 문제를 맞췄습니다.\n");
        printf("############################################\n");
    }

    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}
void displayProblem(int i, int num1, int num2)
{
    printf("[*] %d 번째 문제입니다.\n", i);
    printf("[*] %d X %d ?\n", num1, num2);
    printf("답변 >");
}
