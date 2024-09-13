#include<iostream>                                            
using namespace std;               

class IT 
{
int a;
public :
void get()
{
cout<<"\n Enter a : ";
cin>>a;
}
friend void display(IT t);
}; 
void display(IT t)
{
cout<<"\n Value of a : "<<t.a;    
}
main()
{
IT O;
O.get();
display(O);

}