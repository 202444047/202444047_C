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
            /*문제를 완성시키시오.*/
        }
    }
    return 0;
}
