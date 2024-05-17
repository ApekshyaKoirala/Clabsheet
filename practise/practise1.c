#include<stdio.h>
 typedef struct time{
  int hr;
  int min;
  int sec;
}tme;
void timeinfo(tme s1, tme s2, float*sum, float*difference);
int main()
{
  tme s1;
  tme s2;
  float sum;
  float difference;
  printf("Enter the starting time");
  printf("Enter hour, minute and second");
  scanf("%d%d%d",&s1.hr,&s1.min,&s1.sec);
  printf("Enter the stopping  time");
  printf("Enter hour, minute and second");
  scanf("%d%d%d",&s2.hr,&s2.min,&s2.sec);
  timeinfo(s1,s2, &sum, &difference);
  printf("The sum of time is %f hr",sum);
  printf("The difference of time is %f hr",difference);
  return 0;
}
 void timeinfo(tme s1, tme s2, float*sum, float*difference)
 {
  float start=s1.hr+s1.min/60.0+s1.sec/3600.0;
  float stop=s2.hr+s2.min/60.0+s2.sec/3600.0;
   *sum=start+stop;
   *difference=stop-start;
 }