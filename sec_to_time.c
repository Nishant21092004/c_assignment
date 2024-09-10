 // date Sat, Aug 31, 2024 11:24:05 PM 
 // made by nishant
#include<stdio.h>
int main(){
    int sec; // declaring variable for seconds
    printf("enter the seconds");
    scanf("%d",&sec); 
    int seconds=sec%60;    
     int minutes=sec/60; 
    int hours=minutes/60; 
    minutes+=hours%60; 
    printf("time is %d hour:%d minutes:%d seconds",hours,minutes,seconds); // diaplaying time
    return 0;
}