#include<iostream>
using namespace std;
class IT 
{
int i;
public :
IT()
{
    cout<<"\n Enter i : ";
    cin>>i;
}
void show()
{
    cout<<"\n Value of i : "<<i;
}
};
main()
{
IT O;
O.show();
}