#include<iostream>
using namespace std;
class B1                           //Diamond Space Inheritance........
{
protected :
int i;
public :                       //Virtual Base Class..............
void get()
{
cout<<"\n Enter i : ";
cin>>i;
}
};
class B2
{
protected :
int j;
public :
void get()
{
cout<<"\n Enter j : ";
cin>>j;
}
};

class D : public B1,B2
{
public :
void show()
{
B1::get();
B2::get();

cout<<"\n Addition of i and j : "<<i+j;
}
};

main()
{
D d;
d.show();
}