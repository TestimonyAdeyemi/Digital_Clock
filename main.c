#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int hour,minute,second;
    int d=1000;
    printf("Set time : \n");
    printf("Put in the hour: ");
    scanf("%d",&hour);
    printf("Put in the minute: ");
    scanf("%d",&minute);
    printf("Put in the second: ");
    scanf("%d",&second);
  
    
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
