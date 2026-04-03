#include <iostream>
#include<string>
using namespace std;

class student{
  public:
  string name;
  int age;
  int rollNo;
 

  
}; 
class teacher {
  public:
  int subject;
  double salary;
  
 
  
 
  
 
  
 
    
  };
  class TA : public student,public teacher{
    public:
    
    
  };
  


int main() 
{
  TA g1;
  g1.name = "Amy";
  g1.age = 23;
  g1.rollNo = 420;
  g1.salary = 10000;
  
 
  cout<<"Name : "<<g1.name <<endl;
  cout<<"Age :"<<g1.age<<endl;
  cout<<"Roll No:"<< g1.rollNo<<endl;
  cout<<"salary: "<< g1.salary<<endl;
  
  return 0;
}
