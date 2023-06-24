#include<iostream>
using namespace std;
int add(int x,int y)
{
 int c=x+y;
 return c;
}

int main()
{
    int a;
    float b;

    a=add(5,6);
    cout<<a<<"\n";
    b=add(5.3,6.2);
    cout<<b;
    return 0;
}
