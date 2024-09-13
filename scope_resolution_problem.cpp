#include<iostream>
using namespace std;
class IT
{
int i;
public :
void get()
{ 
    cout<<"\n Enter iv: ";
    cin>>i;
}
void show();
};

void IT :: show()
{
cout<<"\n Value of i : "<<i;
}

main()
{
IT o;
o.get();
o.show();

}