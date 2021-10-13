#include<iostream>
using namespace std;
class tollBooth{
 private:
  unsigned int cars;
  double amount;
 public:
  tollBooth():cars(0),amount(0)
  { } 
  
  void payingCar()
  {
   cars++;
   amount=amount+0.50;
  }
  
   void nopayingCar()
   {
   cars++;
   amount=amount;
  }
  
  void display()
  {
   cout<<"Number of cars passed: "<<cars<<endl;
   cout<<"Total Amount: "<<amount<<endl;
  }
};

int main ()
{
 tollBooth c1;
 int selection;
 cout<<"Press 1 for Paying Car Counter\n";
 cout<<"Press 2 for NON-Paying Car Counter\n";
 cout<<"Press 3 for Display\n";
 cout<<"Press 4 for Exit\n\n";
 do{
  cout<<"Input: ";
  cin>>selection;
 switch(selection)
 {
  case 1:
  c1.payingCar();
  c1.display();  
  break;
  
  case 2:
  c1.nopayingCar();
  c1.display();  
  
  case 3:
  c1.display();  
 }
 cout<<"\n";
} while(selection!=4);
}
