#include<iostream>
using namespace std;
class student
{
int id;
char name[20];
int sub[6];
public:
void getstudent();
void result();
}s;
void student :: getstudent()
{
cout<<"Enter id and name";
cin>>id>>name;
for(int i=0; i<6; i++)
{
cin>>sub[i];
}
}
void student :: result()
{
int total = 0;
float average;
for(int i=0; i<6; i++)
total += sub[i];
average = total/6;
cout<<"total:"<<total<<endl;
cout<<"average:"<<average<<endl;
cout<<"Result";
for(int i=0; i<6; i++)
if(sub[i]<35)
cout<<"Fail";
else
cout<<"Pass";
}
int main()
{
//student s;
s.getstudent();
s.result();
}
