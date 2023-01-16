#include<iostream>
using namespace std;

float weekdays(string fruit, string day ,float quantity);
float weekends(string fruit, string day ,float quantity);

main()
{
    string fruit;
    string day;
    float quantity;
    float result;
    float result1;
    
    cout <<"ENTER THE NAME OF THE FRUIT= ";
    cin  >>fruit;
    cout <<"ENTER THE NAME OF THE DAY= ";
    cin  >>day;
    cout <<"ENTER THE QUANTITY OF THE FRUIT= ";
    cin  >>quantity;
    result = weekdays(fruit,day,quantity);
    cout <<"THE PRICE OF THE FRUIT IN WEEKDAYS IS= "<<result<<endl;
    result1 = weekends(fruit,day,quantity);
    cout <<"THE PRICE OF THE FRUIT IN WEEKEND IS= "<<result1<<endl;
}
    float weekdays(string fruit,string day ,float quantity)
    {
        float price;
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if(fruit == "banana" )
    {
        price = 2.50 * quantity;
    }
    else if(fruit == "apple" )
    {
        price = 1.20 * quantity;
    }
    else if(fruit == "orange" )
    {
        price = 0.85 * quantity;
    }
    else if(fruit == "grapefruit" )
    {
        price = 1.45 * quantity;
    }
    else if(fruit == "kiwi" )
    {
        price = 2.70 * quantity;
    }
    else if(fruit == "pineapple" )
    {
        price = 5.60 * quantity;
    }
    else if(fruit == "grapes" )
    {
        price = 4.20 * quantity;
    }
     return price;
    }
   
    }
float weekends(string fruit, string day ,float quantity)
{
    float pric;
    if(day == "saturday" || day == "sunday")
    {
    if(fruit == "banana" )
    {
        pric = 2.70 * quantity;
        
    }
    else if(fruit == "apple" )
    {
        pric = 1.25 * quantity;
        
    }
    else if(fruit == "orange" )
    {
        pric = 0.90 * quantity;
        
    }
    else if(fruit == "grapefruit" )
    {
        pric = 1.60 * quantity;    
    }
    else if(fruit == "kiwi" )
    {
        pric = 3.00 * quantity;
        
    }
    else if(fruit == "pineapple" )
    {
        pric = 5.60 * quantity;
        
    }
    else if(fruit == "grapes" )
    {
        pric = 4.20 * quantity;
        
    }
    return pric;
    }
   
}