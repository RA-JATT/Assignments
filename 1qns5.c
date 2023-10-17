#include<stdio.h>
int main()
{

    char s[100];
    printf(" ENTER a string ");
    gets(s);
    int l=printf("%s",s);
    //int l=printf ("lenth of string %s is ",s); 
    printf("%d",l);
    return 0;
}