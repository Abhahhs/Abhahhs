#include<iostream>
#include<fstream>
using namespace std;
class stud
{
	int id;
	char name[20];
	public:
	void get()
	{
		cout<<"enter the detalis"<<endl;
		cin>>id>>name;
	cout<<"id is"<<id<<"name is"<<name<<endl;
	}
};
int main()
{
	stud s;
	ofstream file;
	file.open("abu.txt");
	char op;
	do
	{
		s.get();
		file.write((char*)&s,sizeof(s));
		cout<<"one data created"<<endl;
		cout<<"any more student[y/n]"<<endl;
		cin>>op;
	}
	while(op=='y'||op=='y');
	file.close();
	return 0;
}
