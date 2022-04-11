#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area (triangle *tr,int n)
{
    int i,j;
    float a[n],s,ar,p;
    for(i=0;i<n;i++)
      {
        p=(tr[i].a)+(tr[i].b)+(tr[i].c)/2.0;
        s=p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].b);
        ar=sqrt(s);
    }
    for(i=0;i<n;i++)
    {
        printf("area of %d trianle is=%f\n",i+1,ar);
    }
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i<n; i++) {
            printf("plzz enter side of %d triangle:\n",i+1);
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("now sorted area\n");
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
