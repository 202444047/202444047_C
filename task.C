#include <stdio.h>

int main()
{
    int m;

    printf("1~12월 중 하나를 입력하세요.(월생략) :");
    scanf("%d", &m);

    if(m < 1)
    {
        printf("다시입력해주세요.");
    }
    if(m > 12)
    {
        printf("다시입력해주세요.");
    }
    else
    {
        switch (m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf("%d월은 31일까지 있습니다.", m);
            break;

            case 4:
            case 6:
            case 9:
            case 11:
            printf("%d월은 30일까지 있습니다.", m);
            break;

            case 2:
            printf("%d월은 28일까지 있습니다.", m);
            break;
        }
    }
    return 0;
}