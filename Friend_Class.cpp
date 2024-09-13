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
friend class B;
}; 

class B
{
public :
void display(IT t)
{
cout<<"\n value of A : "<<t.a;
}
};


main()
{
IT O;
B b;
O.get();
b.display(O);

}