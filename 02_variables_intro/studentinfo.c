#include<stdio.h>

int main () {

    int courseID = 2271;

    int studentID = 10234;

    
    printf("The first number is %d\n", studentID);
    printf("The second number is %d\n", courseID);

    int difference = studentID - courseID;
    //printf("%d - %d= %d\n", studentID, courseID, difference);
    printf("the difference between the student id and course id is %d\n",difference);
    return 0;

}