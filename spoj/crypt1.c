//using namespace std.;
#include<math.h>
#include<stdio.h>
#include<time.h>
int main(){
long long r,s,w,q=4000000007,i=1,n=0;;
scanf("%lld",&r);
time_t begin=time(NULL);
while(i*i<r)
i++;
while(1){
if(((i*i-r)%q)==0)
{printf("the answer is %lld\n",i);

break;}
i++;
//n++;
//printf("%lld       %lld        \n",s,w);
}

/*int day1 = i/(3600*24);
int hrs1 = i%(3600*24);
int hrs=hrs1/3600;
int min1=hrs%3600;
int min=min1/60;
int sec=min1%60;
int week=day1/7;
int day2=day1%7;*/
printf(" %d\n",time(NULL)-begin);

}
