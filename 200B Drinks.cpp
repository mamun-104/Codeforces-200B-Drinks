#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double a=0.0,b,t;

    int i;
    for(i=0;i<n;i++)
    {
        cin>>t;
        a=a+(t/100);
    }
    //cout<<a<<endl;
    b=(a/n)*100;
    cout<<setprecision(14)<<b<<endl;


    return 0;
}



