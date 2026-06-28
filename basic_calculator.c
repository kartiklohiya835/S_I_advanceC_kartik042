#include<stdio.h>
int main()
{
    int a,b,choice;
    int sum,sub,mul,div;
    printf("enter the value of a and b");
     scanf("%d%d",&a,&b);
    printf("choice\n1 for sum\n2 for sub\n3 for mul\n4 for div");
     scanf("%d",&choice);
    switch(choice)
    {
        case 1:sum=a+b;
        printf("sum=%d",sum);
        break;
        case 2:sub=a-b;
        printf("sub=%d",sub);
        break;
        case 3:mul=a*b;
        printf("mul=%d",mul);
        break;
        case 4:div=a/b;
        printf("div=%d",div);
        break;

    }
    
    return 0;
}