#include<stdio.h>
int main()
{
    char str1[10],str2[10];
    long long int day1,day2,hour1,hour2,min1,min2,sec1,sec2,day,min,sec,hour,rem,s1,s2,s;
    scanf("%s %lld",&str1,&day1);
    scanf("%lld : %lld : %lld",&hour1,&min1,&sec1);
    scanf("%s %lld",&str2,&day2);
    scanf("%lld : %lld : %lld",&hour2,&min2,&sec2);

    s1=sec1+(min1*60)+(hour1*3600)+(day1*86400);
    s2=sec2+(min2*60)+(hour2*3600)+(day2*86400);
    s=s2-s1;
    day=s/86400;
    rem=s%86400;
    hour=rem/3600;
    rem=rem%3600;
    min=rem/60;
    rem=rem%60;
    sec=rem;
    printf("%lld dia(s)\n",day);
    printf("%lld hora(s)\n",hour);
    printf("%lld minuto(s)\n",min);
    printf("%lld segundo(s)\n",sec);
}
