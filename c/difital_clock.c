#include <stdio.h>
#include <time.h>
void main(){
    int h,m,s;
    h=m=s=0;
    while (1)
    {
        printf("%02d | %02d | %02d\n",h,m,s);
        sleep(1);

        #ifdef __linux__    //if  os is linux "clear" command will run else "cls" command will run
            system("clear");
        #else
            system("cls");
        #endif

        s++;
        if (s == 60){
            m++;
            s = 0;
        }
        if (m == 60){
            h++;
            m=0;
        }
        if (h == 24)
            h = m = s = 0;
    }
}