#include<iostream>
using namespace std;
class IT 
{
int a;
public :
IT(int i)
{
a=i;
}
void show()
{
    cout<<"\n Value of a : "<<a;
}
};
main()
{
int A;
cout<<"\n Enter the value A: ";
cin>>A;
IT O(A);
O.show();
}