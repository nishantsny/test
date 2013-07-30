#include<stdio.h>
int substring(char a[],int n,char b[],int m)
{
int i,j=0,k,flag=1,count=0;
for(i=0;i<n;i++)
{
if(a[i]==b[j])
{
	j++;
	if(flag)
	{
		k=i;
		flag=0;
	}
	if(j==m)
	{
		count++;
		j=0;
	}
	
}
else
{
	if(!flag)
	{
		i=k;
		flag=1;
		j=0;
	}
}

}
//printf("%d d ",count);
return count;

}

scan(char a[]){
char ch;
int i=0;
scanf("%c",&ch);
while(ch!='\n'){
	a[i]=ch;
	scanf("%c",&ch);
	i++;
}
a[i]='\0';
return i;
}

int comm(char a[],int n,char b[],int m,int l){
int i,count=0;
for(i=0;l+i<=m;i++){
count=count+substring(a,n,b+i,l);
//printf("%d ",count);
}
return count;
}

int main(){
int t,j;
scanf("%d",&t);
for(j=0;j<t;j++){
char a[200000],b[200000],L[200000];
int n,m,l,i,k;
char ch;
scanf("%c",&ch);
n=scan(a);

m=scan(b);
scanf("%d",&l);
if(n<l){
	for(i=n;i<l;i++)
		L[i]=0;
	k=n+1;
}
else
	k=l+1;
for(i=1;i<k;i++){
	L[i]=comm(a,n,b,m,i);
}
for(i=1;i<k;i++)
	printf("%d ",L[i]);
printf("\n");
}
return 0;
}
