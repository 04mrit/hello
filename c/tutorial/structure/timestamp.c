#include <stdio.h>

typedef struct time_stamp{
    int yrs;
    int mth;
    int day;
    int hrs;
    int min;
    int sec;

}ts;

void tsdsp(ts ts1){
    printf("\nYears : %d",ts1.yrs);
    printf("\nMonth : %d",ts1.mth);
    printf("\nDay : %d",ts1.day);
    printf("\nHour : %d",ts1.hrs);
    printf("\nMinute : %d",ts1.min);
    printf("\nSec : %d\n",ts1.sec);
}

int tscmp(ts t1,ts t2){
    if (t1.yrs<t2.yrs)  { return 1; }
    if (t1.yrs>t2.yrs)  { return -1; }

    if (t1.mth<t2.mth)  { return 1; }
    if (t1.mth>t2.mth)  { return -1; }

    if (t1.day<t2.day)  { return 1; }
    if (t1.day>t2.day)  { return -1; }

    if (t1.day<t2.day)  { return 1; }
    if (t1.day>t2.day)  { return -1; }

    if (t1.hrs<t2.hrs)  { return 1; }
    if (t1.hrs<t2.hrs)  { return -1; }

    if (t1.sec<t2.sec)  { return 1; }
    if (t1.sec>t2.sec)  { return -1; }

    return 0;
}

void main(){
    ts d1= {2004,12,25,12,30,21};
    ts d2= {2004,12,25,12,30,20};
    tsdsp(d1);
    tsdsp(d2);
    printf("\nThe comprasion returned %d.\n",tscmp(d1,d2));

}