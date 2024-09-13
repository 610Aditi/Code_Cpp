#include<iostream>
using namespace std;
class IT 
{
int i,j,k;
public :
IT(int x=0,int y=24,int z=15)
{
i=x;
j=y;
k=z;
}
void show()
{
    cout<<"\n Value of i : "<<i;
    cout<<"\n Value of j : "<<j;
    cout<<"\n Value of k : "<<k;
}
};
main()
{
IT O(45,876);
O.show();
}