#include <stdio.h>
#include <string.h>

char * hashMap[]={"000","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int findlen(char str[], int i,int max)
{
    int len=0;
    char current=str[i];
    while(str[i]==current&&len<max)
    {
        len++;
        i++;
    }
    return len;
}
void printold(char* str, int n)
{
    int i=0,charlen;
    while(i<n)
    {
        int index=str[i]-'0';
      //   printf("\n %d",index);
        if(index>=0&&index<=9)
        {
            
            charlen=findlen(str,i,strlen(hashMap[index-1]));
         //    printf("%d has charlen %d",index,charlen);
           printf("%c",hashMap[index-1][charlen-1]);
            i+=charlen;
        }
        i++;
      //  printf(" i is %d",i);
    }
    
}
int main()
{
    char *str;
    printf("\n Enter string");
    scanf("%s",str);
    int n=strlen(str);
    //printf("%d",n);
   printold(str,n);
    return 0;
}
