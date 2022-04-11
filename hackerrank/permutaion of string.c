#include<stdio.h>
#include<string.h>
void sort(char *P);
int main()
{   int i;
    char s[][10]={"ram","shyam","mohan","nitesh"};
    char *p;
    p=&s;
    sort(s);
    for(i=0;i<4;i++)
    {
        printf("%s\n",*(p+i));
    }
    return 0;
}

void sort(char *p)
{   int i,j;
   char t[10];
   for(i=0;i<4;i++)
   {
       for(j=i+1;j<4;j++)
       {
           strcpy(t,*(p+i));
           strcpy(*(p+i),*(p+j));
           strcpy(*(p+i),t);
       }
   }
}
