#include<iostream>
using namespace std;
class test
{
int a;
public:
test()
{
a=2;
}
void operator ++()
{
a++;
}
void operator --()
{
a--;
}
void show()
{
cout<<a<<endl;
}
};
int main()
{
test t;
++t;
t.show();
--t;
t.show();
return 0;
}
