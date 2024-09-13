#include<iostream>
using namespace std;
void add();                //function declaration

void add()                 //function defination
{
int a,b;
cout<<"\n enter a,b : ";
cin>>a>>b;
cout<<"\n Addition of A and B is : "<<a+b;
} 
main()
{
cout<<"\n Before the function call : ";
add();
add();
add();
add();
cout<<"\n After the function call : ";

}