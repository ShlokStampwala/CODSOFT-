#include <iostream>
#include<math.h>
using namespace std;
int main() {
  double num1,num2;
  char op;
  cout<<"\n\t\tWelcome to Simple Calculator "<<endl;
  cout<<"\t\t Enter the Number 1:-"<<endl;
  cin>>num1;
  cout<<"\t\t Enter the Number 2:-"<<endl;
  cin>>num2;
  cout<<"\t\t 1.Addition\t         +"<<endl;
  cout<<"\t\t 2.Substraction\t     -"<<endl;
  cout<<"\t\t 3.Multiplication\t *"<<endl;
  cout<<"\t\t 4.Division\t         /"<<endl;
  cout<<"\n\t\t Enter the Operator:-"<<endl;
  cin>>op;
  cout<<"----------------------------------------"<<endl;
  
  switch(op)
    {
      case '+':{
        cout<<"\t\t Addition of Two numbers "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;    
      }
      case '-':{
        cout<<"\t\t Substraction of Two numbers "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;    
      }
      case '*':{
        cout<<"\t\t Multiplication  of Two numbers "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;    
      }
      case '/':{
        cout<<"\t\t Addition of Two numbers "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;    
      }
    }
  return 0;
}