#include<iostream>                                            
using namespace std;               


// overloading constructor...........


class IT 
{
int a,b;
public :
IT()
{
cout<<"constructor without parameter :  ";
}
IT(int i)
{
a=i;
cout<<"\n Value of a : "<<a;
cout<<"\n constructor with One parameter : ";

}
IT(int i,int j)
{
a=i;
b=j;
cout<<"\n Value of a : "<<a;
cout<<"\n Value of b : "<<b;
cout<<"\n constructor with Two parameter : ";


}

};
main()
{
IT O1();

IT O2(1);

IT O3(2,3);

}