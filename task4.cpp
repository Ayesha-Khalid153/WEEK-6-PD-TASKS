#include<iostream>
using namespace std;

float regularCharges(char dayNight,char type,float minutes);
float premiumCharges(char dayNight,char type,float minutes);

main()
{
    char dayNight;
    char type;
    float minutes;
    float result;
    float result1;
    cout<< "Enter which type of customer you are (REGULAR OR PREMIUM) select (r/p) =  ";
    cin>>type;
    cout<< "(Press 'D' for day time and 'N' for night time) call= ";
    cin>> dayNight;
    cout<<"Enter the number of minutes you used the service = ";
    cin>>minutes;
    result = regularCharges(dayNight,type,minutes);
    cout <<"YOUR CHARGES ARE= "<<result;
    result1 =  premiumCharges(dayNight,type,minutes);
    cout <<"YOUR CHARGES ARE= "<<result1;
}
float regularCharges(char dayNight,char type,float minutes)
{
    float price;
    if(minutes < 50)
    {
        price = 10;
    }
    if(minutes > 50)
    {
        price = 10 * 0.20 * minutes;
    }
    return price;
}
float premiumCharges(char dayNight,char type,float minutes)
{
    float price;
    if(dayNight ==  'D')
    {
        if(minutes < 75)
        {
            price = 25;
        }
        if(minutes > 75)
        {
            price = 25 * 0.10 * minutes;
        }
    }
    if(dayNight == 'N')
    {
        if(minutes < 100)
        {
            price = 25;
        }
        if (minutes > 100)
        {
            price = 25 * 0.05 * minutes;
        }
    }
    return price;
}