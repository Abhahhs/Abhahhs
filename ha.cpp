#include<iostream>
using namespace std;

class student
{
public:
int roll;

void get_roll()
{

cout<<"enter the roll number";
cin>>roll;
}

void put_roll()
{
cout<<"the roll number is ="<<roll<<endl;
}
};


class test:public virtual student
{
public:
int m1,m2;
void get_marks()
{
cout<<"enter the marks=";
cin>>m1>>m2;
}
void put_marks()
{
cout<<"the marks are="<<m1<<","<<m2<<endl;
}
};class sports:public test
{
public:
char sp[10];
void get_sports()
{
cout<<"enter the sports=";
cin>>sp;
}
void put_sports()
{
cout<<"the spots="<<sp<<endl;
}
void display()
{
cout<<sp[10]<<endl;
}
};
class result:public test
{
public:
int res;
void display()
{
res=m1+m2;
put_roll();
put_marks();
cout<<"total is "<<res;
}
};

int main()
{
result rest;
sports spt;
spt.get_roll();
spt.get_marks();
spt.display();
rest.get_roll();
rest.get_marks();
rest.display();
return 0;
}

