#include<iostream>
using namespace std;
main()
{
    string temparature;
    string humidity;
    cout <<"ENTER THE TEMPARATURE= ";
    cin  >>temparature;
    cout <<"ENTER THE HUMIDITY= ";
    cin  >>humidity;
    if(temparature == "warm" && humidity == "dry")
    {
        cout <<"PLAYS TENIS..!";
    }
    if(temparature == "warm" && humidity == "humid")
    {
        cout <<"swim...!";
    }
     if(temparature == "cold" && humidity == "dry")
    {
        cout <<"plays basketball...!";
    }
     if(temparature == "cold" && humidity == "humid")
    {
        cout <<"watch tv...!";
    }
}