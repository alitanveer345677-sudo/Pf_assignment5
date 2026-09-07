// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char inc_id[20],analyst[20];
    int af_sys,R_cost,T_cost;
    float D_time;
    printf("\nIncident ID: ");
    scanf("%s",inc_id);
    printf("Analyst: ");
    scanf("%s",analyst);
    printf("Affected System:");
    scanf("%d",&af_sys);
    printf("Recovery cost: ");
    scanf("%d",&R_cost);
    printf("Down Time: ");
    scanf("%f",&D_time);
    T_cost=af_sys*R_cost;

    printf("\n=============================");
    printf("\nSECURITY INCIDENT REPORT");
    printf("\n=============================");
    printf("\nIncident ID: %s ",inc_id);

    printf("\nAnalyst: %s ", analyst);

    printf("\nAffected System: %d",af_sys);

    printf("\nRecovery cost: %d",R_cost);

    printf("\nDown Time: %.2f hours",D_time);

    printf("\nTotal cost: %d",T_cost);
    printf("\n=============================");



    return 0;
}
