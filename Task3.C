#include <stdio.h>

int main()
{
    char ch;
    printf("알파벳을 입력하세요:");
    scanf("%d", &ch);

    switch (ch)
    {
        case 'a':
        case 'A':                                            //오류 3개
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%d는 모음입니다.\n");                       
            

        default:
            if(ch>= 'a' && ch <= 'z')
            {
                printf("%d는 자음입니다.\n");
                
            }
            if(ch>= 'A' && ch <= 'Z')
            {
                printf("%d는 자음입니다.\n");
                
            }
            else
            {
                printf("입력값은 알파벳이 아닙니다.\n");
                
            }
    }
    return 0;
}
