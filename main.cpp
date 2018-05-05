#include<iostream>
using namespace std;
#include "bankacc.h"
int main()
{
  BankAccount myacc;
  myacc.display();
  cout<<endl;
  BankAccount acc2("chanyeol" , 7172 , 7000.34);
  acc2.display();
  cout<<endl;
  BankAccount acc3(myacc);
  acc3.display();
  system("pause");
}