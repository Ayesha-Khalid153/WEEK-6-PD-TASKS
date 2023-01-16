#include<iostream>
using namespace std;
main()
{     int day;
      string month;
      cout <<"ENTER THE DAY= ";
      cin  >>day;
      cout <<"ENTER THE MONTH= ";
      cin  >>month;
      string sign;
    if((day >= 21 && month == "MARCH") || day <= 19 && month == "APRIL")
    {
        sign = "ARIES...";
    }
    if((day >= 20 && month == "APRIL") || day <= 20 && month == "MAY")
    {
        sign = "TAURUS...";
    }
    if((day >= 21 && month == "MAY") || day <= 20 && month == "JUNE")
    {
        sign = "GEMINI...";
    }
    if((day >= 21 && month == "JUNE") || day <= 22 && month == "JULY")
    {
        sign = "CANCER...";
    }
    if((day >= 23 && month == "JULY") || day <= 22 && month == "AUGUST")
    {
        sign = "LEO...";
    }
    if((day >= 23 && month == "AUGUST") || day <= 22 && month == "SEPTEMBER")
    {
        sign = "VIRGO...";
    }
     if((day >= 23 && month == "SEPTEMBER") || day <= 22 && month == "OCTOBER")
    {
        sign = "LIBRA...";
    }
     if((day >= 23 && month == "OCTOBER") || day <= 21 && month == "NOVEMBER")
    {
        sign = "SCORPIO...";
    }
     if((day >= 22 && month == "NOVEMBER") || day <= 21 && month == "DECEMBER")
    {
        sign = "SAGITTARIOUS...";
    }
     if((day >= 22 && month == "DECEMBER") || day <= 19 && month == "JANURARY")
    {
        sign = "CAPRICON...";
    }
     if((day >= 20 && month == "JANURARY") || day <= 18 && month == "FEBRUARY")
    {
        sign = "AQUARIOUS...";
    }
     if((day >= 19 && month == "FEBRUARY") || day <= 20 && month == "MARCH")
    {
        sign = "PISCES...";
    }
    cout  <<"YOUR ZODAIC SIGN IS= "<<sign;
}