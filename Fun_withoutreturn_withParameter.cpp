#include<iostream>
using namespace std;
void add(int a,int b);
void add(int i,int j)
{
cout<<"\n Addition of A and B : "<<i+j;   
}
main()
{
int a,b;
cout<<"\n Enter A,B : ";
cin>>a>>b;
add(a,b);
}
