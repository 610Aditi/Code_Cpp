#include<iostream>
using namespace std;
class B
{
public :
void show()
{
cout<<"\nBase Class B : ";
}
};
class D :public B
{
public :
void show()             //Function  Overloading
{
cout<<"\nDerived Class D  : ";
}
};
main()
{
D d;
d.show();
}