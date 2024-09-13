#include<iostream>
using namespace std;
class IT
{
int i;
public : 
void get()
{
cout<<"enter i : ";
cin>>i;
}
void show()
{
cout<<"Value of i : "<<i;
}
};
main()
{
    
IT obj;
obj.get();
obj.show();

}