#include<iostream>
using namespace std;
class B
{
public :
B()
{
cout<<"\n Base Class Constructor ";
}
};
class D :public B
{
public :
D()
{
cout<<"\n Derive Class COnstructor ";
}
};
main()
{
D d;
}