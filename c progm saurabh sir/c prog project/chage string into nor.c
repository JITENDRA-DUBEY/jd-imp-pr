#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


char s[110];
int i,b[20],a[10],k,j;

gets(s);

for(i=0;s[i];i++){
if(s[i]!='0')
    b[i]=s[i]-'0';

else
b[i]=s[i]-48;
}
for(j=0;j<10;j++){
    k=0;
for(i=0;s[i];i++){
    if(b[i]==j)
        k++;
}
a[j]=k;
}

for(i=0;i<10;i++){
    printf("%d ",a[i]);
}




    return 0;
}
