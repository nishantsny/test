#include<stdio.h>
#include<stdlib.h>
#define N 1000000000
int main(){
int i,j,m,n,t,*a;
a=calloc(N,sizeof(int));
for(i=2;i*i<N;i++)
    {
          for(j=i*i;j<N;j=j+i)
          {
                if(!a[j])
                a[j]=1;
          }
    }
scanf("%d",&t);
for(i=0;i<t;i++);{
	scanf("%d%d",m,n);
	for(j=m;j<=n;j++)
	{
		if(!a[j])
			printf("%d\n",j);
	}printf("\n");
}
return 0;
}