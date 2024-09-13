#include<iostream>
using namespace std;
int add();
int add()
{
int a,b;
cout<<"\nEnter A abd B : ";
cin>>a>>b;
return a+b;
}

main()
{
int value;
value=add();
cout<<"\n Addition A and B is: "<<value;
}