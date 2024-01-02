#include <stdio.h>

int main() {
    int num,hour_worked;
    float per_hour;
    scanf("%d%d%f",&num,&hour_worked,&per_hour);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",(hour_worked*per_hour));
    return 0;
}

