#include<iostream>
using namespace std;
int main()
{
cout<<"\n Inside Main Function : ";
int a,b,c;
cout<<"\n Enter a : ";
cin>>a;
cout<<"\n Enter b : ";
cin>>b;
c=a-b;
try
{
cout<<"\n Side Try Block : ";   
if(c!=0)
{
cout<<"\n a/c : "<<a/c;
}
else 
{
throw c;
} 
}
catch(int c)
{
cout<<"\n Inside Catch Block : ";
cout<<"\n C :"<<c;
}
}