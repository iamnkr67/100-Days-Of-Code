#include<stdio.h>

//STRUCT TIME
struct Time {
    int h;
    int m;
    int s;
    char meridian;
};

//time addition  
struct Time addTime(struct Time time1, struct Time time2) {
    struct Time result;

    result.s = (time1.s + time2.s) % 60;
    int carry_s = (time1.s + time2.s) / 60;

    result.m= (time1.m + time2.m + carry_s) % 60;
    int carry_m = (time1.m + time2.m + carry_s) / 60;

    result.h = (time1.h + time2.h + carry_m) % 24;
    if(result.h > 12)
      {
        result.h = result.h - 12;
        // if(time1.meridian == time2.meridian == ("am || AM") )
        //    result.meridian = "PM";
        // else 
        //    result.meridian = "AM";
      }
 
  
    return result;
}

//*DRIVER CODE*
int main() {
    struct Time time1, time2, result;

    printf("Enter the first time (hh mm ss): ");
    scanf("%d %d %d",&time1.h, &time1.m, &time1.s);

    printf("Enter the second time (hh mm ss): ");
    scanf("%d %d %d",&time2.h, &time2.m, &time2.s);

    result = addTime(time1, time2);

    printf("The sum of the time is: %02d:%02d:%02d\n",result.h, result.m, result.s);

    return 0;
}

