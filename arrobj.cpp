#include<iostream>
using namespace std;
class student
{
public:
char name[30];
int age;
int roll_num;
int student_id;
char section;
public:
void getdetails(void);
void putdetails(void);
};
void student :: getdetails(void)
{

        cin>>name>>age>>roll_num>>student_id>>section;
}
void student :: putdetails(void)
{
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll num:"<<roll_num<<endl;
        cout<<"Student Id:"<<student_id<<endl;
        cout<<"Section:"<<section<<endl;
}
 int main()
{
        int i,n;
        student s[25];
        
        cout<<"Enter student details:"<<endl;
        cin>>n;
        if(n!=1)
        {
        for(i=0;i<n;i++)
           {
             s[i].getdetails();
         
             s[i].putdetails();
           
        }
        }
        return 0;
}
