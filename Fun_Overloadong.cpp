#include<iostream>
using namespace std ;
int area(int x)
{
return 3.14*x*x;  
}
int area(int x,int y)
{
return x*y;  
}
double area(float x ,double y)
{
return 0.5*x*y;  
}
main()
{
int r,b,l;
float base;
double h; 

cout<<"\n Enter radius : ";
cin>>r;
cout<<"\n Area of Circle : "<<area(r);

cout<<"\n Enter breadth : ";
cin>>b;
cout<<"\n Enter length : ";
cin>>l;
cout<<"\n Area of Rectangle : "<<area(l,b);

cout<<"\n Enter Base : ";
cin>>base;
cout<<"\n Enter height : ";
cin>>h;
cout<<"\n Area of Triangle : "<<area(base,h);

}