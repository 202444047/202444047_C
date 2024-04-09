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
            printf("%c는 모음입니다.\n", ch);                        //틀린 부분을 고치시오.
            

        default:
            if(ch>= 'a' && ch <= 'z')
            {
                printf("%c는 자음입니다.\n", ch);
                
            }
            if(ch>= 'A' && ch <= 'Z')
            {
                printf("%c는 자음입니다.\n", ch);
                
            }
            else
            {
                printf("입력값은 알파벳이 아닙니다.\n");
                
            }
    }
    return 0;
}
