#include<iostream>
using namespace std;
float calculation(string month,float noOfStays);
float apartment(string month,float noOfStays);
main()
{
    string month;
    float noOfStays;
    float result;
    float result1;
    cout <<"ENTER THE MONTH= ";
    cin  >> month;
    cout <<"ENTER NUMBER OF STAYS= ";
    cin  >>noOfStays;
    result = calculation(month,noOfStays);
    cout <<"your price for whole stay in studio= "<<result<<endl;
    result1 = apartment(month,noOfStays);
    cout <<"your price for whole stay in apartment= "<<result1;
}
    float calculation(string month,float noOfStays)
    {
        float pric;
        float per;
   if(month == "MAY" || month == "OCTOBER")
    {
        if(noOfStays <= 7)
        {
           pric = noOfStays*50;
        }

        else if(noOfStays > 7 && noOfStays <= 14)
        {
            per = 50 -(0.05*50);
            pric = per*noOfStays;
            
        }
       else if(noOfStays > 14)
        {
            per = 50 -(0.3*50);
            pric = per*noOfStays;
            
        }
    }
   else  if(month == "JUNE" || month == "SEPTEMBER")
  {
        
         if(noOfStays <=14 )
        {
            
            pric = 75.20*noOfStays;
            
        }
       else if(noOfStays > 14)
        {
            per = 75.20 -(0.2*75.20);
            pric = per*noOfStays;
            
        }
            
  }  
      else if(month == "JULY" || month == "AUGUST")
         {
        
           pric = 76*noOfStays;
         }
     
       return pric;
}

float apartment(string month,float noOfStays)
{
    float pric;
     float per;
    if(month == "MAY" || month == "OCTOBER")
    {
       
          if(noOfStays <=14 )
        {
            
            pric = 65*noOfStays;
            
        }
       else if(noOfStays > 14)
        {
            per = 65 -(0.1*65);
            pric = per*noOfStays;
            
        }
    }
    if(month == "JUNE" || month == "SEPTEMBER")
        {
             if(noOfStays <=14 )
        {
            
            pric = 68.70*noOfStays;
            
        }
       else if(noOfStays > 14)
        {
            per = 68.70 -(0.1*68.70);
            pric = per*noOfStays;
            
        }
        }

     if(month == "JULY" || month == "AUGUST")
        {
         
             if(noOfStays <=14 )
        {
            
            pric = 77 *noOfStays;
            
        }
       else if(noOfStays > 14)
        {
            per = 77 -(0.1*77);
            pric = per*noOfStays;
            
        }
        }
    return pric;
}