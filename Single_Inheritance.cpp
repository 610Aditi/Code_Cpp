#include<iostream>
using namespace std;
class B
{
protected :
int i;
};
class D :public B
{
public :
void get()
{
cout<<"\n Enter i : ";
cin>>i;
}
void show()
{
cout<<"\nValue of i : "<<i;
}
};
main()
{
D d;
d.get();
d.show();
}