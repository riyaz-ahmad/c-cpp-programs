//program to convert the days into years weeks and days
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define days_in_week 7;

void convert(int days){
    // year will be the quotient when days is divided by 365 days
    int year = days/365;
    //number of weeks will be equak to 
    int weeks = (days%365)/days_in_week;
    //number of remaining dats will  be
    int remDays = (days%365)%days_in_week;
    cout<<"Year "<<year<<endl;
    cout<<"weeks "<<weeks<<endl;
    cout<<"Days "<<remDays<<endl;
}

int main(){
    int days = 3000;
    //cin>>days;
    convert(days);
    return 0;
}