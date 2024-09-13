#include<iostream>
using namespace std;
int add(int i,int j);
inline int add(int a,int b)    //inline function 
{
return a+b;
}

main()
{
int value;
int i,j;
cout<<"\nEnter values A and B : ";
cin>>i>>j;
value=add(i,j);
cout<<"\n Addition A and B is: "<<value;



cout<<"\nEnter values A and B : ";
cin>>i>>j;
value=add(i,j);
cout<<"\n Addition A and B is: "<<value;



cout<<"\nEnter values A and B : ";
cin>>i>>j;
value=add(i,j);
cout<<"\n Addition A and B is: "<<value;
}