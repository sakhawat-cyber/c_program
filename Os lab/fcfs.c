#include <stdio.h>
int time(int pro[],int n, int burTime[], int witTime[]){
    witTime[0] = 0;
    for(int i = 1; i < n; i++)
    witTime[i] = burTime[i - 1] + witTime[i - 1];
    return 0;
}

int trunRoundTime(int pro1[], int n, int burTime1[], int witTiem1[], int tat[]){
    int i;
    for ( i = 0; i < n; i++)
        tat[i] = burTime1[i] + witTiem1[i];
    return 0;
}

//function to culcolate average time
int avgtime(int pro2[], int n, int burTime2[]){
    int witTime2[n], tat1[n], total = 0, totalTat = 0, i;
    //function  to find waiting time of all processes 
    time(pro2, n, burTime2, witTime2);
    trunRoundTime(pro2, n, burTime2, witTime2, tat1);
    //display processes along with all details 
    printf("Processes total waiting turn around \n");
    for(i = 0; i < n; i++){
        total = total + witTime2[i];
        totalTat = totalTat + tat1[i];
        printf("%d\t%d\t%d\t\t%d\n", i + 1, burTime2[i],witTime2[i], tat1[i]);
    }
    printf("Average witing time = %f\n", (float)total/(float)n);
    printf("Average turn around time = %f\n", (float)totalTat/ (float)n);
    return 0;
}
//mian function
int main(){
    int pro3[]= {1, 2, 3};
    int n = sizeof pro3/ sizeof pro3[0];
    int bur3[] = {5, 8, 12};
    avgtime(pro3, n, bur3);
    return 0;
}