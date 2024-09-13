#include<iostream>                                            
using namespace std;               

class A
{
public :
void display1()
{
cout<<"\n Address of object A : "<<this;
}
}; 

class B
{
public :
void display2()
{
cout<<"\n Address of object B : "<<this;
}
}; 

class C
{
public :
void display3()
{
cout<<"\n Address of object C : "<<this;
}
}; 


main()
{
A a;
B b;
C c;
cout<<"\n For Object A";
a.display1();

cout<<"\n For Object B";
b.display2();

cout<<"\n For Object C";
c.display3();
}