#include<stdio.h>
int main()
{ char ch;
    FILE *fp;

    fp=fopen("file2.txt","r");
    if(fp==NULL)
    {
        printf("file can not be open\n");
        //exit(1);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }

    fclose(fp);
    //getch ();
    return 0;

}

