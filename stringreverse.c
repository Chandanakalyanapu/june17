#include<stdio.h>
#include<string.h>
int main()
{
        int count = 0, i = 0;
        char s1[100],ch;
        printf("enter any string:");
        scanf("%s",s1);
        while(s1[i] != '\0')
        {
                count++;
                i++;
        }
                printf("string lenght :%d\n",count);
                for(i = 0; i < count / 2; i++)
                {
                        ch = s1[i];
                        s1[i] = s1[ count - 1 - i];
                        s1[count - 1 - i] = ch;
                }
                printf("reversed string is:%s\n",s1);
                return 0;
}
