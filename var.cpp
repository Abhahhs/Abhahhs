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

class sports:public virtual student
{
public:
int sp;

void get_sports()
{
cout<<"enter the sports=";
cin>>sp;
}
void put_sports()
{
cout<<"the spots="<<sp<<endl;
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
};
class result:public test,public sports
{
public:
int res;
void display()
{
res=m1+m2+sp;
put_roll();
put_marks();
put_sports();
cout<<"total is "<<res;
}
};

int main()
{
result rest;
rest.get_roll();
rest.get_marks();
rest.get_sports();
rest.display();
return 0;
}

