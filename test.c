#include <stdio.h>
#include <stdlib.h>
int main(){
    int hour, minute, seconds;
    printf("Set time : \n");
    scanf("%d%d%d", &hour, &minute, &seconds);

    if(hour > 12 || minute > 60  || seconds > 60){
        printf("Error ! \n");
        exit(0);
    }

    while(1){ // Making use of an infinite loop
        seconds++;
        if(seconds > 60){
            minute++;
            seconds=0;
        }
        if(minute > 60){
            hour++;
            minute=0;
        }
        if(hour>12){
            hour = 1;

        }
        printf("\n clock");
        printf("\n %02d:%02d:%02d", hour,minute,seconds); //We can format our time accordingly 00:00:00
        system("sleep 1"); // Adds clock-like functionality to this application by adding a delay of 1 second.

        system("clear"); // We want to clear the screen here.
    }
}