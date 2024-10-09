#include <stdio.h>
#include <windows.h>

void changeArr(int * ptr);

int main_pointer(void)
{
    SetConsoleOutputCP(CP_UTF8);

//    int tester = 1;
//    int tester02 = 2;
//
//    int * attacker;
//
//    printf("[1] Memory Address: %d | Just Value: %d\n", &tester, tester);
//    printf("[2] Memory Address: %d | Just Value: %d\n", &tester02, tester02);
//
//    printf("\n----------------------------------------------\n");
//
//    attacker = &tester;
//
//    printf("[*] Memory Address: %d | Just Value: %d\n", attacker, *attacker);
//
//    *attacker *= 3;
//
//    printf("[*] Memory Address: %d | Just Value: %d\n", attacker, *attacker);
//    printf("[1] Memory Address: %d | Just Value: %d\n", &tester, tester);

    int arr[3] = {1, 2, 3};

    changeArr(arr);

    for(int i=0; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void changeArr(int * ptr)
{
    ptr[2] = 10;
}
