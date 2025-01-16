#include <stdio.h>

int main() {
    int age_in_years=18;
    
    int age_in_minutes=0;
    
    puts("Enter the age in minutes");

    scanf("%d",&age_in_years);

    age_in_minutes = age_in_years* 365* 24* 60;

printf("The age in minutes is %d is %d\n",age_in_years, age_in_minutes);

    return 0;

}