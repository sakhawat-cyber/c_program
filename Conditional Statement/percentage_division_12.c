/* Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First */

#include<stdio.h>
int main()
{
    int roll, phy, che, com;
    char str[50];
    printf("Input the Roll Number of the student : ");
    scanf("%d", &roll);

    printf("Input the Name of the Student : ");
    scanf("%s", str);

    printf("Input the markes of physics, Chemistry and Computer Aplication : ");
    scanf("%d %d %d", &phy, &che, &com);

    int total = phy + che + com;
    float per = (float)total / 3; 

    printf("Roll No : %d\n", roll);
    printf("Name of Student : %s\n", str);
    printf("Markes in Physics : %d\n", phy);
    printf("Markes in Chemistry : %d\n", che);
    printf("Markes in Computer Application : %d\n",com);
    printf("Total Marks = %d\n",total);
    printf("Percentage : %f\n", per);

    if(100.00 >= per || 79.00 >= per){
        printf("Division = First\n");
    }
    else if(60.00 >= per || 49.00 >= per){
        printf("Divition = Second\n");
    }
    else{
       printf("Divition = Third\n");
    }

}