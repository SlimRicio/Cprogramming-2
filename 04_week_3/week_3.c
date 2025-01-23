/*
*/

#include <stdio.h>

int main()  {
int seconds = 0;
int minutes =0;

// Get the number of seconds
puts ("Enter the number of seconds");
scanf("%d", seconds);

//calcualte the number of minutes
minutes + seconds / 60;

// Calculate remaining seconds
remaining_seconds = seconds % 60;


//Print the result
printf("%d seconds is %d minutes and %d seconds\n", seconds, minutes, remaining_seconds);

    return 0;
}