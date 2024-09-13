#include<iostream>
using namespace std ;
class IT
{
int a,b,c,d;
public : 
IT(int x,int y,int z,int s)
{
a=x,b=y,c=z,d=s;
}
void show()
{
cout<<"\n value of a : "<<a<<" and b : "<<b<<" and c : "<<c<<" and d : "<<d;    
}
void operator++();
};
void IT :: operator++()
{
a++;
b++;
c++;
d++;  
}
main()
{
IT obj(2,4,6,8);
cout<<"\n Value Before Increment : ";
obj.show();
++obj;
cout<<"\n Value After Increment : ";
obj.show();
}