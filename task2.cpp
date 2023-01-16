#include<iostream>
using namespace std;
main()
{
    float totalMarks;
    float per;
    string grade;
    cout <<"ENTER YOUR TOTAL MARKS OF 5 SUBJECTS= ";
    cin  >>totalMarks;
    per = (totalMarks * 100)/500;
    if(per >= 90 && per <= 100 )
    {
        grade = "A+";
    }
    if(per >= 80 && per <= 90 )
    {
        grade = "A";
    }
    if(per >= 70 && per <= 80 )
    {
        grade = "B+";
    }
    if(per >= 60 && per <= 70 )
    {
        grade = "B";
    }
    if(per >= 50 && per <= 60 )
    {
        grade = "C+";
    }
    if(per >= 40 && per <= 50 )
    {
        grade = "D";
    }
    if(per < 40)
    {
        grade = "F";
    }
    cout <<"YOUR GRADE IS= "<<grade;
}