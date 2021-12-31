#include<iostream>
using namespace std;
template<class t>
t sum(t a,t b)
{
return a+b;
}
int main()
{
cout<<" int sum"<<sum(1,5)<<endl;
cout<<"float sum"<<sum(1.54,10.34)<<endl;
}

