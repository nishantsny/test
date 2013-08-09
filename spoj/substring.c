#include<stdio.h>
#include<string.h>
int scan (char a[])
{ int i;char ch;
scanf("%c",&ch);
while(ch=='\n' || ch==' ')
{scanf("%c",ch);}
for(i=0;ch!=' ' && ch!='\n';i++)
{
a[i]=ch;
scanf("%c",&ch);
}
a[i]='\0';
return i;
}

print(char a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%c",a[i]);
printf("\n");
}

int substring(char a[],int n,char b[],int m)
{
int i,j=0,k,flag=1;
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
		return 1;
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
return 0;
}

int main()
{
char a[100],b[100];
int i,n,m;
 n=scan(a);
 m =scan(b);
printf("%d\n",substring(a,n,b,m));
return 0;
}