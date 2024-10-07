#include <stdio.h>

int main_printfscanf(void)
{
    /*
    int age = 26;
    printf("%d\n", age);

    float weight = 70.1f;
    printf("%.2f\n", weight);
    return 0;
    */

    /*
    int age;
    printf("Enter your age: ");
    scanf_s("%d", &age);
    printf("Your age is %d", age);
    */

    /*
    int one, two, three;
    printf("Enter three intejers: ");
    scanf_s("%d %d %d", &one, &two, &three);

    printf("First value is %d\n", one);
    printf("Second value is %d\n", two);
    printf("Third value is %d\n", three);
    */

    /*
    char str[256];
    printf("Enter anything strings: ");
    scanf_s("%s", &str, sizeof(str));
    printf("Results: %s", str);
    */


    // 정보 입력받고 출력하는 프로그램
    // 입력받을 정보: 이름, 나이, 몸무게, 취미
    char name[256], hobby[256];
    int age;
    float weight;

    // name
    printf("Enter your name: ");
    // scanf_s("%s", &name, sizeof(name));
    fgets(name, sizeof(name), stdin);

    // age
    printf("Enter your age: ");
    scanf_s("%d", &age);
    getchar();

    // weight
    printf("Enter your weight: ");
    scanf_s("%f", &weight);
    getchar();

    // hobby
    printf("Enter your hobby: ");
    //scanf_s("%s", &hobby, sizeof(hobby));
    fgets(hobby, sizeof(hobby), stdin);

    // Results
    printf("---------------------------------------\n");
    printf("[+] Results\n");
    printf("Your name: %s\n", name);
    printf("Your age: %d\n", age);
    printf("Your weight: %.1f\n", weight);
    printf("Your hobby: %s\n", hobby);

    return 0;
}
