/*  Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Eligibility Criteria : 
Marks in Maths >=65 and 
Marks in Phy >=55 and 
Marks in Chem>=50 and 
Total in all three
 subject >=190 or 
 Total in Maths and Physics >=140 ------------------------------------- 
 Input the marks obtained in Physics :65 
 Input the marks obtained in Chemistry :51 
 Input the marks obtained in Mathematics :72 
 Total marks of Maths, Physics and Chemistry : 188 
 Total marks of Maths and Physics : 137 
 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission. */

#include <stdio.h>
int main()
{
    int phy, che, mat;
    printf("Input the markes obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the markes obtained in Chemistry: ");
    scanf("%d", &che);

    printf("Input the markes obtained in Mathematics: ");
    scanf("%d", &mat);

    int mark = phy + che + mat;
    printf("Total marks of Maths, Physics and Chemistry: %d\n", mark);

    int mp = phy + mat;
    printf("Total marks of Maths and Physics: %d\n", mp);

    if (mat >= 65)
        if (phy >= 55)
            if (che >= 50)
                if (mark >= 190 || mp >= 140)
                    printf("The candidate is eligible for admission.\n");

                else
                    printf("The candidate is not eligible.\n");
            else
                printf("The candidate is not eligible.\n");
        else
            printf("The candidate is not eligible.\n");
    else
        printf("The candidate is not eligible.\n");
}
