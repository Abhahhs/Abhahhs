#include<iostream>
using namespace std;
class base
{
public:
 virtual void show()
{
cout<<"base class show"<<endl;
}
virtual void display()
{
cout<<"base class display"<<endl;
}
};
class derived:public base
{
public:
void show()
{
cout<<"derived class show"<<endl;
}
void display()
{
cout<<"derived class display"<<endl;
}
};
int main()
{
base*ptr;
base b;
ptr=&b;
ptr->show();
ptr->display();
derived d;
ptr=&d;
ptr->show();
ptr->display();
return 0;
}
