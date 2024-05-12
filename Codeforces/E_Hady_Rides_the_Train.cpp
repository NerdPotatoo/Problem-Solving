#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long seat, row, column;
    cin >> seat;
    row = seat/4;

    if(row%2 == 0){
        column = seat % 4;
    }else{
        column = 3 - (seat%4);
    }
    cout << row << " " << column << endl;
}