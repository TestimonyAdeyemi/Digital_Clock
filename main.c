#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    
    int hour,minute,second;
    int d=1000;
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    hour = tm.tm_hour;
    minute = tm.tm_min;
    second = tm.tm_sec;
    
    
    if(hour>12 || minute>60 || second>60) {
        printf("Error !\n");
        exit(0);
    }
    
    while(1) {
        second++;
        if(second>59){
            minute++;
            second=0;
        }
        
        if(minute>59){
            hour++;
            minute=0;
        }
        
        if (hour>12) {
            hour=1;
        }
        printf("\nClock :");
        printf("\n %02d:%02d:%02d:%02d",hour,minute,second);
        sleep(1);
        
        //system("cls");
    }
    
}
