/*
Write a C program to find angle between given hour and minute hands. 

Example 1:
Input: int ha = 11
int ma = 30 Output: Angle between hour and minute hands 165
*/

#include <stdio.h>
#include <stdlib.h>

int ClacAngle(int ha, int ma)
{
    int hour_angle, minute_angle, angle, ang;
    if (ha == 12)
        ha = 0;
    if (ma == 60)
        ma = 0;

    hour_angle = (int)(0.5 * (ha * 60 + ma));
    minute_angle = (int)(6 * ma);
    angle = abs(hour_angle - minute_angle);
    ang = 360 - angle;
    return (ang > angle) ? angle : ang;
}

int main()
{
    int ha = 11;
    printf("\n\nAngle move by hour hands %d\n", ha);
    int ma = 30;
    printf("Angle move by minute hands %d\n", ma);
    if (ha < 0 || ma < 0 || ha > 12 || ma > 60)
        printf("\nwrong input...!");
    else
        printf("\nAngle between hour and mintue hands %d", ClacAngle(ha, ma));
    return 0;
}