#include<iostream>
using namespace std;
main()
{
int i,n;
int *p;
p = new int [n];
cout<<"How Many Number Do You Want To Enter : ";
cin>>n;
if(n==0)
{
cout<<"Memory Allocation Fail ... ";
}
else
{
for(i=0;i<n;i++)
{
cout<<"\n Enter A Number : ";
cin>>p[i];
}
cout<<"\n Entered : ";
for(i=0;i<n;i++)
{
cout<<"   "<<p[i];
}
delete[] p; //release the array
}
}