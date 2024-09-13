#include<iostream>                                            
using namespace std;               

class IT 
{
static int a;
public :
void display()
{
a++;
cout<<"\n Value of a : "<<a;
cout<<"\n Address of a : "<<&a;
}
}; 
int IT :: a;
main()
{
IT A,B,C;
cout<<"\n For Object A";
A.display();

cout<<"\n For Object B";
B.display();

cout<<"\n For Object C";
C.display();
}