#include<conio.h>
#include<stdio.h>
#include<string.h>
char xoa(char s1[100], char x)
{
            int i, j;
            int n= strlen(s1);
            for(i=0; i<n; i++)
            {
                        if(s1[i]== x)
                        {
                                    for(j=i; j<n; j++)
                                    {
                                                s1[j]= s1[j+1];
                                                s1[n]='\0';
                                                i--;
                                    }
                        }
            }
            puts(s1);
}
int main()
{
            char s1[100], x;
            printf("nhap chuoi\n");
            gets(s1);
            printf("nhap ki tu xoa\n");
            scanf("%c", &x);
            xoa(s1, x);
            return 0;
}
