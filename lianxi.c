#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,sum=0;
    do
    {
        scanf("%d",&num);
        if(num>0&&num%2==1)
        {
            sum+=num;
        }

    }while(num>0);
    printf("%d",sum);
    system("pause");
    return 0;
}
