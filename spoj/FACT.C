#include<stdio.h>
#include<time.h>
int a[200],b[102][200];
int copy(int b[][200],int n)
{
int i;
for(i=0;i<a[0];i++){
b[n][i]=a[i];
//printf("%d",b[n][i]);
}
return 0;
}

int fact(int b[][200])
{
int i,len,k,j,x,ex;
a[1]=1;len=2;
for(i=2;i<101;i++)
{
for(x=len-1;x>0;x--)
printf("%d",a[x]);
printf("\n");
ex=0;
for(j=1;j<len;j++)
{
k=a[j]*i+ex;
a[j]=k%10;
ex=k/10;}
while(ex)
{
a[len]=ex%10;
ex=ex/10;
len++;
}
a[0]=len;
copy(b,i);
}
return 0;
}

int main()
{
//time_t begin=time(NULL);
int s[100], Q,i,j=0;
int t;
scanf("%d",&t);
b[1][0]=2;
b[1][1]=1;
fact(b);
for(j=0;j<t;j++){
scanf("%d",&s[j]);
}
for(j=0;j<t;j++){

for(i=b[s[j]][0]-1;i>0;i--)
printf("%d",b[s[j]][i]);
printf("\n");
}
//printf("\n%ld\n",time(NULL)-begin);
return 0;
}
