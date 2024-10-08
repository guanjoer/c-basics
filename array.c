#include <stdio.h>
#include <windows.h>
#include <time.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

//    int testArray[3];
//
//    testArray[0] = 5;
//    testArray[1] = 10;
//    testArray[2] = 15;
//
//    for(int i=0; i<3; i++)
//    {
//        printf("Array Test: %d\n", testArray[i]);
//    }

//    int arr[5] = {5, 10, 15, 20, 25};
//
//    for(int i=0; i<5; i++)
//    {
//        printf("%d번째 Array: %d\n", i+1, arr[i]);
//    }

//    char str[] = "coding";
//
//    for(int i=0; i<sizeof(str); i++)
//    {
//        printf("%c\n", str[i]);
//        printf("--------------------\n");
//        printf("%d\n", str[i]);
//
//    }

//    char str01[] = "test";
//
//    printf("%s\n", str01);
//    printf("%d\n", str01);

//    for(int i=0; i<128; i++)
//    {
//        printf("아스키 코드 %d : %c\n", i, i);
//    }

    srand(time(NULL));

    printf("##########################\n");
    printf("#####식물 키우기 게임#####\n");
    printf("##########################\n\n");

    int userInput;
    int answer = rand() % 4; // 0 ~ 3

    // 3 chances
    for (int i = 1; i <= 3; i++)
    {
        int plantFood[4] = {0, 0, 0, 0}; // 4개의 영양제
        int cntShowAnswer;
        int prevCntShowAnswer;

        do {
            cntShowAnswer = rand() % 2 + 2; // 2 ~ 3개의 힌트를 표시
        } while(cntShowAnswer == prevCntShowAnswer);
        prevCntShowAnswer = cntShowAnswer;

        int isIncluded = 0;

        printf("[*] %d번째 시도\n", i);
        printf("------------------------\n");

        // 힌트 표시
        printf("[*] 다음 영양제를 식물에게 줍니다: ");
        for (int j = 0; j < cntShowAnswer; j++)
        {
            int randPlantFood;
            do {
                randPlantFood = rand() % 4; // 0 ~ 3
            } while (plantFood[randPlantFood] == 1); // 중복 방지

            plantFood[randPlantFood] = 1; // 해당 영양제 표시
            printf("%d번 ", randPlantFood + 1);

            if (randPlantFood == answer)
            {
                isIncluded = 1; // 정답 포함 여부
            }
        }
        printf("\n");

        // 결과 표시
        if (isIncluded == 1)
        {
            printf("[+] 성공! 식물이 자라났어요!\n");

        }
        else
        {
            printf("[-] 실패! 식물이 그대로에요.\n");
        }

        if (i<3){
            printf("\n계속하려면 엔터를 누르세요\n");
            getchar();
        }

        // 3번의 시도 후 정답 맞추기
        if (i == 3)
        {
            printf("\n\n----------------------------------\n");
            printf("\n식물의 영양제는 몇번일까요? : ");
            scanf("%d", &userInput);

            if (userInput == answer + 1)
            {
                printf("정답입니다!\n");
            }
            else
            {
                printf("땡! 정답은 %d입니다.\n", answer + 1);
            }
        }
    }

    return 0;
}
