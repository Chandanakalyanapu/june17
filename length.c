#include<stdio.h>
void main()
{
        char str[20];
        int count=0,i=0;
        printf("enter a string:");
        scanf("%s",str);
        while(str[i]!='\0')
        {
                count++;
                i++;
        }
                printf("length of the string:%d\n",count);

}
~              
