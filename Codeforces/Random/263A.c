#include<stdio.h>
int main()
{
    int i,j,row,column,cnt=0,arr[5][5],temp;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j] > 0){
                    row = i;
                    column = j;
                    break;
            }
        }
    }
    while(arr[2][2]!=1)
    {
        if(i>2 && j>2)
        {
            temp = arr[i-1][j-1];
            arr[i-1][j-1] = arr[i][j];
            arr[i][j] = temp;
            cnt++;
        }
        if(i<2 && j<2)
        {
            temp = arr[i+1][j+1];
            arr[i+1][j+1] = arr[i][j];
            arr[i][j] = temp;
            cnt++;
        }
        if(i>2 && j<2)
        {
            temp = arr[i-1][j+1];
            arr[i-1][j+1] = arr[i][j];
            arr[i][j] = temp;
            cnt++;
        }
        if(i<2 && j>2)
        {
            temp = arr[i+1][j-1];
            arr[i+1][j-1] = arr[i][j];
            arr[i][j] = temp;
            cnt++;
        }

    }
    printf("%d\n",cnt);
    return 0;
}
