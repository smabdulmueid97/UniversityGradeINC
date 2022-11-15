#include<stdio.h>
void main() {
    int CGPA;
    printf("Enter your GPA : ");
    scanf("%d", &CGPA);
    if (CGPA > 4.00) {
        printf("Wrong Entry");
    } else if (CGPA >= 3.70) {
        printf("First class honors");
    } else if (CGPA >= 3.00 && CGPA <= 3.69) {
        printf("Upper second class honors");
    } else if (CGPA >= 2.30 && CGPA <= 2.99) {
        printf("Lower second class honors");
    } else if (CGPA >= 2.00 && CGPA <= 2.29) {
        printf("Third class honors");
    } else if (CGPA < 2.00) {
        printf("Failed");
    }
}
