#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int answer;
    int num;

    printf("おみくじプログラムでおみくじをしますか?\n");
    printf("YESは1を、NOは他の数字を入力してください\n");

    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("%dが入力されたためおみくじを始めます!\n", answer);

        srand((unsigned int)time(NULL));
        num = rand() % 7 + 1;

        switch (num)
        {
        case 1:
            printf("大吉\n");
            break;
        case 2:
            printf("中吉\n");
            break;
        case 3:
            printf("小吉\n");
            break;
        case 4:
            printf("吉\n");
            break;
        case 5:
            printf("末吉\n");
            break;
        case 6:
            printf("凶\n");
            break;
        case 7:
            printf("大凶\n");
            break;
        }
    }
    else
    {
        printf("%dが入力されたためおみくじをやめます。\n", answer);
    }
    return 0;
}