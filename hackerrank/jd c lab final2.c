#include <stdio.h>
int main(){
FILE *f1, *f2, *f3;

int number, i;

printf("Contents of DATA file\n\n");

f1=fopen("DATA", "w"); for(i=1; 1 <= 30; i++) {

scanf("%d", &number); if(number==-1)
break;
 putw(number, *fl);
}
fclose(fl);

f1= fopen("DATA", "r");

f2 fopen("ODD", "w");

f3= fopen ("EVEN", "w");

/* Read from DATA file */ while((number=getw(f1)) != EOF)
{
if (number %2 == 0)

putw (number, f3); /* Write to EVEN file */
else

putw (number, f2);
/ *Write to ODD file
*/
}
fclose(fl);

fclose(f2);

fclose(f3);

f2 = fopen("ODD". "r");  f1=fopen("EVEN", "r");

printf("\n\nContents of ODD file\n\n");
while ((number = getw(f2)) != EOF) printf("%4d", number);

printf("\n\nContents of EVEN file\n\n");
while ((number = getw(f3)) != EOF) printf("%4d", number);

fclose(f2); fclose(f3);
}