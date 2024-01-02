#include<bits/stdc++.h>
using namespace std;

int main() {
 int kids, choco;
 cin>>kids>>choco;
 choco = choco%kids;
 cout<<kids-choco;
}
