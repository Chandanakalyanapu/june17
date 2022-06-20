#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
        char s1[20],ch;
        int i,count=0;
        printf("enter rhe string\n");
        scanf("%s",s1);
        __fpurge(stdin);
        printf("enter the character to check frequency:");
        scanf("%c",&ch);
        for(i=0;s1[i]!='\0';i++)
        {
                if(s1[i]==ch)
                count++;

        }
        printf("frequency of %s=%d",s1,count);
        return 0;
}

~        
