#include<iostream>
using namespace std;
#include<typeinfo>
class IT
{
private :
int i;
char c;
float f;
double l;
public :
void show()
{
cout<<"\nThe type of var i : "<<typeid(i).name();
cout<<"\nThe type of var c : "<<typeid(c).name();
cout<<"\nThe type of var f : "<<typeid(f).name();
cout<<"\nThe type of var l : "<<typeid(l).name();
}
};
main()
{
IT A;
A.show();
}