#include<iostream>                                            
using namespace std;               

class IT 
{
int a;
public :
void set()
{
a=0;
}
void display()
{
a++;
cout<<"\n Value of a : "<<a;
cout<<"\n Address of a : "<<&a;

}
}; 


main()
{
IT A,B,C;
cout<<"\n For Object A";
A.set();
A.display();

cout<<"\n For Object B";
B.set();
B.display();

cout<<"\n For Object C";
C.set();
C.display();
}