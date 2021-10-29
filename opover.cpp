#include<iostream>
using namespace std;
class test
{
int a;
public:
void geta()
{
cout<<"value of a";
cin>>a;
}
void operator ==(test t2)
{
if(a ==t2.a)
{
cout<<"object are equal";
}
else
{
cout<<"object are not equal";
}
}
};
int main()
{
test t1,t2;
t1.geta();
t2.geta();
t1==t2;

return 0;}



