#include<stdio.h>
#include<string.h>
check(char a[])
{
    int len=strlen(a);
    int f1=0;
    int f2=0;
    int f3=0;
    int f4=0;
    int f5=0;
    for(int i=0;i<len;++i)
    {
     if(a[i]>='a' && a[i]<='z')
        f1=1;
     if(a[i]>='A' && a[i]<='Z')
        f2=1;
     if(a[i]>='0' && a[i]<='9')
        f3=1;
     if(a[i]=='*' || a[i]=='$' || a[i]=='_' || a[i]=='#' || a[i]=='=' || a[i]=='@' )
        f4=1;
     if(a[i]=='%' || a[i]=='!' || a[i]==')' || a[i]=='(')
        f5=1;



    }
    if(len<6)
    printf("Failure Password must be at least 6 character long.");
    else if(len>12)
    printf("Failure Password must be at max 12 character long.");
    else if(f1==0)
    printf("Failure Password must contain at least one character from a-z.");
    else if(f2==0)
    printf("Failure Password must contain at least one character from A-Z.");
    else if(f3==0)
    printf("Failure Password must contain at least one character from 0-9.");
    else if(f4==0)
    printf("Failure Password must contain at least one character from *$_#=@.");
    else if(f5==1)
    printf("Failure Password cannot contain %!)(.");
    else
    printf("Success");}

    int main()
{
    char arr[100000];
    printf("Enter the password  ");
    scanf("%s",&arr);
    check(arr);
}



