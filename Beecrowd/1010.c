#include<stdio.h>
int main()
{
    int code1,piece1,code2,piece2;
    double price1, price2, payable;
    scanf("%d%d%lf",&code1,&piece1,&price1);
    scanf("%d%d%lf",&code2,&piece2,&price2);
    payable = (piece1*1.0*price1) + (piece2*1.0*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",payable);
    return 0;
}
