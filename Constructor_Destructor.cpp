#include<iostream>
using namespace std;
class IT 
{
public :
IT()
{
    cout<<"\n Inside Constructor : ";
}
~IT()
{
    cout<<"\n Inside Destructor : ";
}
};
main()
{
IT O;
cout<<"\n Inside Main : ";
}