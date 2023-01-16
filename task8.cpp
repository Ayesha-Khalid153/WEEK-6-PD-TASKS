#include<iostream>
using namespace std;
main()
{
    int h;
    int x,y;
    cout <<"ENTER THE HEIGHT= ";
    cin  >>h;
    cout <<"ENTER THE ABSSISA OF THE POINT= ";
    cin  >>x;
    cout <<"ENETR THE ORDINATE OF THE POINT= ";
    cin  >>y;
    if((x >= 0 && x<= 3 *h) && (y ==0))
    {
    cout <<"BORDER...";
    }
    else if((x >= 0 && x <=h) && (y == h))
    {
    cout <<"BORDER...";
    }
    else if((x >= 2 * h && x <= 3 *h) && (y == h))
    {
    cout <<"BORDER...";
    }
    else if( x == h && (y >= h && y <= 4 * h))
    {
    cout <<"BORDER...";    
    }
    else if( x == 2 * h && (y >= h && y <= 4 * h))
    {
    cout <<"BORDER...";    
    }
    else if(x == 0 && (y >= 0 &&  y <= h))
    {
    cout <<"BORDER...";      
    }
    else if( x == 3 * h && (y >= 0 &&  y <= h))
    {
    cout <<"BORDER...";      
    }
    else if( x >= h & x <= 2 * h && y == 4 * h)
    {
    cout <<"BORDER...";     
    }
    else if((x < 0 || x > 3 * h))
    {
        cout <<"OUTSIDE";
    }
    else if((x < h) && (y > h))
    {
        cout <<"OUTSIDE";
    }
    else if((x > 2 * h) && (y > h))
    {
        cout <<"OUTSIDE";
    }
    else if (y < 0 || y > 4 * h)
    {
        cout <<"OUTSIDE";
    }
    else
    {
        cout <<"INSIDE";    
    }
}