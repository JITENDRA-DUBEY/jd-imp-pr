//wap function to print all distnic element of an array
void disele(int b[],int size);
int main()
{
int i,size;
printf("plzz enter the size value:-\n");
scanf("%d",&size);
int a[size];
printf("plzz enter the elements :-\n");
for(i=0;i<=size-1;i++)
{
   scanf("%d",&a[i]);
}
disele(a,size);
getchar();
return 0;
}
void disele(int b[],int size)
{ int i,j;
 for(i=0;i<=size-1;i++)
  {
   for(j=0;j<i;j++)
   {
    if(b[i]==b[j])
    break;}
 if(i==j)
   printf("%d\t",b[i]);

  }
}
