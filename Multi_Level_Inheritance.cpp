#include<iostream>
using namespace std;
class B1
{
protected :
int i;
};

class D : public B1
{
public :
void get()
{
cout<<"\n Enter i : ";
cin>>i;
}
};

class D2 : public D
{
public :
void show()
{
i++;
cout<<"\nValue of i : "<<i;
}
};
main()
{
D2 d;
d.get();
d.show();
}