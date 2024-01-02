#include <stdio.h>

int main() {

    char name[50];
    scanf("%s",name);
    double salary,sold,d;
    d = 15.00/100.00;
    scanf("%lf%lf",&salary,&sold);
    double total = salary + sold*d;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
