#include<iostream>
using namespace std;
class IT 
{
int a;
public :
IT(int i)
{
a=i;
cout<<"\n Value of a : "<<a;
}

IT(IT &t)
{
a=t.a;
cout<<"\n Value of a : "<<a;
}
};


main()
{
int v;
cout<<"\n Enter Num : ";
cin>>v;
cout<<"\n Value Before Copy: ";

IT O1(v);

cout<<"\n Value After Copy: ";

IT O2(O1);

}