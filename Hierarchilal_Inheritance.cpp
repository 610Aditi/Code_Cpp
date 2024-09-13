#include<iostream>
using namespace std;
class B1
{
protected :
int i,j;
public :
void get()
{
cout<<"\n Enter i : ";
cin>>i;
cout<<"\n Enter j : ";
cin>>j;
}
};

class D1 : public B1
{
public :
void add()
{
cout<<"\n Addition i and j : "<<i+j;
}
};

class D2 : public B1
{
public :
void sub()
{
cout<<"\nSubstraction : "<<i-j;
}
};
main()
{
D1 O;
O.get();
O.add();

D2 d;
d.get();
d.sub();
}