#include <stdio.h>

int main()
{
    char ch;
    printf("알파벳을 입력하세요:");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c는 모음입니다.\n", ch);
            break;

        default:
            if(ch>= 'a' && ch <= 'z')
            {
                printf("%c는 자음입니다.\n", ch);
                break;
            }
            if(ch>= 'A' && ch <= 'Z')
            {
                printf("%c는 자음입니다.\n", ch);
                break;
            }
            else
            {
                printf("입력값은 알파벳이 아닙니다.\n");
                break;
            }
    }
    return 0;
}