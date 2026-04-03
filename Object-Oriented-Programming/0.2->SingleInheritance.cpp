#include <iostream>
#include<string>
using namespace std;

class person{
  public:
  string name;
  int age;
 

  
};
class student : public person{
  public:
  int rollNo;
 
  
 
  
 
  
  void getInfo(){
   
  
  }
    
  };
  class GradStudent : public student{
    public:
    string research;
    
  };
  


int main() 
{
  GradStudent g1;
  g1.name = "Amy";
  g1.age = 23;
  g1.rollNo = 420;
  g1.research = "LLM";
  
 
  cout<<"Name : "<<g1.name <<endl;
  cout<<"Age :"<<g1.age<<endl;
  cout<<"Roll No:"<< g1.rollNo<<endl;
  cout<<"Research: "<< g1.research<<endl;
  
  return 0;
}
