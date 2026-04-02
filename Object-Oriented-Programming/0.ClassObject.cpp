#include <iostream>
#include<string>
using namespace std;

class Teacher{
  private:
  double salary;
  
  public:
  //properties //attribute
  string name;
  string dept;
  string subject;
  
  
  // methods // member function 
  void changeDept(string newDept){
    
    dept = newDept;
  }
  void setSalary(double s){
    salary = s;
  }
  double getSalary(){
    return salary;
  }
  
};
class Student{
  
};

int main() 
{
  Teacher t1;
  Teacher t2;
  Teacher t3;
  Teacher t4;
  Teacher t5;
  t1.name = "Rex";
  t1.subject = "Research";
  t1.dept = "CSE";
  
  t1.setSalary(2500);
  cout<<t1.getSalary();
  
  
  
    
    return 0;
}
