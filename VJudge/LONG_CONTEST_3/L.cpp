#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    for(int i =1; i<=t; i++)
    {
        string current, birth;
        cin>>current>>birth;
        //cout<<current<<" \n"<<birth<<"\n\n";
        int currentYear = (current[6]-48)*1000+(current[7]-48)*100+(current[8]-48)*10+current[9]-48;
        int currentMonth = (current[3]-48)*10+(current[4]-48);
        int currentDate = (current[0]-48)*10+(current[1]-48);
        int birthYear = (birth[6]-48)*1000+(birth[7]-48)*100+(birth[8]-48)*10+birth[9]-48;
        int birthMonth = (birth[3]-48)*10+(birth[4]-48);
        int birthDate = (birth[0]-48)*10+(birth[1]-48);
        int age = currentYear-birthYear;
        
        if(currentYear < birthYear) {
            cout<<"Case #"<<i<<": Invalid birth date\n";
        }   
        else if(currentYear == birthYear)
        {
            if(currentMonth < birthMonth)
            {
                cout<<"Case #"<<i<<": Invalid birth date\n";
            }
            else if(currentMonth == birthMonth){
                if(currentDate<birthDate){
                    cout<<"Case #"<<i<<": Invalid birth date\n";
                }
                else{
                    cout<<"Case #"<<i<<": 0\n";
                }
            }
            else{
                cout<<"Case #"<<i<<": 0\n";
            }
        }
        else{
            if(currentMonth<birthMonth){
                age--;
            }
            else if(currentMonth == birthMonth){
                if(currentDate<birthDate){
                    age--;
                }
            }
            if(age>130){
                cout<<"Case #"<<i<<": Check birth date\n";
            }
            else{
                cout<<"Case #"<<i<<": "<<age<<"\n";
            }
        }   
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}