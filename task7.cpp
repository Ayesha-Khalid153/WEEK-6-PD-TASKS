#include<iostream>
using namespace std;
int hoursAndMins(int startingHours,int  startingMins,int arrivingHours,int arrivingMins);
main()
{
    int startingHour;
    int startingMin;
    int arrivingHour;
    int arrivingMin;
    int result;
    int result1;
    int result2;
    int hours;
    int mins;
    cout <<"ENTER THE STARTING TIME OF THE EXAM(HOURS)= ";
    cin  >>startingHour;
    cout <<"ENTER THE STRATING TIME OF THE EXAM(MINUTES)= ";
    cin  >>startingMin;
    cout <<"ENETR THE ARRIVING TIME OF THE STUDENT(HOURS)= ";
    cin  >>arrivingHour;
    cout <<"ENETR THE ARRIVING TIME OF THE STUDENT(MINUTES)= ";
    cin  >>arrivingMin;
    result = hoursAndMins(startingHour,startingMin,arrivingHour,arrivingMin);
cout <<"LATE"<<endl;
cout <<hours <<":"<<mins<<"TIME AFTER THE START..."<<endl;
    result1 = hoursAndMins(startingHour,startingMin,arrivingHour,arrivingMin);
cout <<"ON TIME"<<endl;
cout <<hours<<":"<<mins<<"TIME BEFORE THE START.."<<endl;
    result2 = hoursAndMins(startingHour,startingMin,arrivingHour,arrivingMin);
cout <<"EARLY"<<endl;
cout <<hours <<":"<<mins<<"TIME AFTER THE START..."<<endl;
}
int hoursAndMins(int startingHours,int startingMins,int arrivingHours,int arrivingMins)
{
int stratingHoursToMins;
int totalStartMins;
int arrivingHoursToMins;
int totalArriveMins;
int timeBefore;
int conclusion;
int mins;
int hours;
stratingHoursToMins = startingHours * 60;
totalStartMins = stratingHoursToMins + startingMins;
arrivingHoursToMins = arrivingHours * 60;
totalArriveMins = arrivingHoursToMins + arrivingMins;
timeBefore = totalStartMins - 30;
if(totalArriveMins > totalStartMins)
{
    
    conclusion = totalArriveMins - totalStartMins;
    mins = conclusion % 60;
    hours = conclusion / 60;
    
}
else if(totalArriveMins >= timeBefore && totalArriveMins < totalStartMins)
{
    
    conclusion = totalStartMins - totalArriveMins;
    mins = conclusion % 60;
    hours = conclusion / 60;
    
}
else if(totalArriveMins < timeBefore)
{
    
    conclusion = totalStartMins - totalArriveMins;
    mins = conclusion % 60;
    hours = conclusion / 60;
    
}
return conclusion;
}