#include <stdio.h>
#include <string.h>
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

void main()
{
	int flag=0,i,j,n,m;
	char a[100],b[100];
	n=scan(a);
	m=scan(b);
    
	
	for(i=0;i<n;i++)
	{
		int flg=1;
		for(j=0;j<m;j++)
		{
		if(a[i+j]!=b[j])
		flg=0;
		}
		if(flg==1)
		flag=1;
		
	}
	printf("%d",flag);
}