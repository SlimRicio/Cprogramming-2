/*
Practice with non void functions
*/
#include <stdio.h>

//functions prototypes
int getfive(void);

void printCourse( int course_number);

void describeWeather(int temp);

double milestoKms(int miles);

int main(void) {
    int var=0;
    //call getfive function
    var = getfive();
    printf("var is %d\n", var);

    //call printCourse
    printCourse(2271);

    //Testdescribeweather
    int temp = 0;
    printf("Enter a temperature:");
    scanf("%d", &temp);
    describeWeather(temp);

    int miles=0;
     printf("Enter distance in miles: ");
     scanf("%d", &miles);
     double kms=milestoKms(miles);
     printf("Distance in kilometers is:%.3f\n", kms);


}

//getfive implementation
int getfive(void) {
    int five = 5;
    return five;
}

/***********************/
void printCourse( int course_number) {
    printf("You are in COP%d course.\n", course_number);
}
/*********************************/
void describeWeather(int temp) {
    if (temp > 70) {
        puts("HOT");
    }
    if (temp <= 70) {
        puts("COLD");
    }
}
double milestoKms(int miles){
    double kms= miles*1.608;
    return kms;
}