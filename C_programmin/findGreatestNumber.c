#include<stdio.h>

int main()
{
    int a=15,b=11,c=7,d=20;
    // printf("%d",a);
    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("a = %d, is greatest number",a);
                return 0;
            }
            else
            {
                goto check_d;
            }
            
        }
        
    }
    if (b>c)
    {
        if (b>d)
        {
            printf("b = %d, is greatest number",b);
            return 0;
        }
        check_d:
            if (d>b)
            {
                goto confirm_d;
            }
        else
            goto confirm_d;
            
        
    }
    if (c>d)
    {
        printf("c = %d, is greatest number",c);
        return 0;
    }
    
    confirm_d:
        if (d>c)
        {
            printf("d = %d, is greatest number",d);
            return 0;
        }

    // return 0;
}