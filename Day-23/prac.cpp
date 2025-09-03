#include<iostream>
using namespace std;


int areaSq(int n)
{
    int area;
    area=n*n;
    return area;
}

int cost(float pencil,float pen, float eraser)
{
    int totalans=pencil+pen+eraser;
    return totalans;

}

int simple(int p,int r,int t)
{
    int interest=(p*r*t)/100;
    return interest;
}

int areaCircle(int rd)
{
    int radius=3.14*rd*rd;
    return radius;
}

int main()
{

    int n;
    cout<<"enter side of a square:";
    cin>>n;
    int ans=areaSq(n);
    cout<<"\n area of a square is:"<<ans;


    float pencil,pen,eraser;
    cout<<"\n enter cost of pencil:";
    cin>>pencil;
    cout<<"\n enter cost of pen:";
    cin>>pen;
    cout<<"\n enter eraser:";
    cin>>eraser;
    int tans=cost(pencil,pen,eraser);
    cout<<"\n total cost pf above items are:"<<tans;

    int p,r,t;
    cout<<"\n enter principle:";
    cin>>p;
    cout<<"\n enter rate:";
    cin>>r;
    cout<<"\n enter time:";
    cin>>t;
    
     int ians=simple(p,r,t);
    cout<<"\n simple interest:"<<ians;
   

    int r1;
    cout<<"\nenter radius of circle:";
    cin>>r1;
    int ac=areaCircle(r1);
    cout<<"\n area of a circle is:"<<ac;
     return 0;

}