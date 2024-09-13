#include<iostream>
using namespace std;
class IT
{
private :
int i;

protected :
int j;

public :
int k;
void get()
{
cout<<"\n Enter i : ";
cin>>i;
cout<<"\n Enter j : ";
cin>>j;
cout<<"\n Enter k : ";
cin>>k;
}
void show()
{
cout<<"\n Value of i : "<<i; 
cout<<"\n Value of j : "<<j;   
cout<<"\n Value of k : "<<k;     
}
};
main()
{
IT d;
d.get();
d.show();
}