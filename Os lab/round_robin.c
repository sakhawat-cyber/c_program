/*
Total number of process in the system: 4

Enter the arrivel and Burst time of the process[1]
Arrival time is:        0

Burst time is:  8

Enter the arrivel and Burst time of the process[3]
Arrival time is:        2

Burst time is:  10

Enter the arrivel and Burst time of the process[4]
Arrival time is:        3

Burst time is:  11
Enter the time  quantum for the process:        6

Process No          Burst Time         TAT               Waiting Time
Process No[2]           5               10                      5   
Process No[1]           8               25                      17   
Process No[3]           10              27                      17
Process No[4]           11              31                      20
Average trun Around time:       14.750000
Average waiting time:   23.250000
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i, nop, sum = 0, count = 0, y, quant, wait = 0, total = 0, a1[10], b1[10], temp[10];
    float avgWait, avgTotal;
    printf("Total number of process in the system: ");
    scanf("%d", &nop);
    //assing the number of process to variable y
    y = nop;
    //use for loop to enter the detalis of the process like arrivel time and the Burst time
     for(i = 0; i < nop; i++)
     {
         printf("\nEnter the arrivel and Burst time of the process[%d]\n", i + 1);
         //accept arrival time
         printf("Arrival time is: \t");
         scanf("%d", &a1[i]);
         printf("\nBurst time is: \t");
         scanf("%d", &b1[i]);
         //store the burst time in temp array
         temp[i] = b1[i];
     }
    //accept the time qunat 
    printf("Enter the time  quantum for the process: \t");
    scanf("%d", &quant);
    //display the process no, burst time turn around time and the waiting time
    printf("\nProcess No\t\tBurst Time \t\tTAT \t\tWaiting Time");
    for(sum = 0, i = 0; y != 0;){
        //define the condition 
        if(temp[i] <= quant && temp[i] > 0){
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if(temp[i] > 0){
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if(temp[i] == 0 && count == 1){
            //decriment the process no.
            y--;
            printf("\nProcess No[%d]\t\t%d\t\t\t%d\t\t\t%d", i + 1, b1[i], sum - a1[i], sum - a1[i] - b1[i]);
            wait = wait + sum - a1[i] - b1[i];
            total = total + sum - a1[i];
            count = 0;
        }
        if(i == nop - 1){
            i = 0;
        }
        else if(a1[i + 1] <= sum){
            i++;
        }
        else{
            i = 0;
        }
    }
    //represents the average waiting time and turn Around time
    avgWait = wait * 1.0/nop;
    avgTotal = total * 1.0/nop;
    printf("\nAverage trun Around time: \t%f", avgWait);
    printf("\nAverage waiting time: \t%f", avgTotal);
    getch();
}