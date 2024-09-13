#include<iostream>
using namespace std;
class B1
{
protected :
int i;
};

class B2
{
protected :
int j;
};

class D : public B1,B2
{
public :
void get()
{
cout<<"\n Enter i : ";
cin>>i;
cout<<"\n Enter j : ";
cin>>j;
}
void show()
{
cout<<"\nAddition of i and j : "<<i+j;
}
};
main()
{
D d;
d.get();
d.show();
}