#include<iostream>
using namespace std;

class Employee
{
  private:
     int emp_id;
     string name;


  public:

   //constructor
   Employee(int id, string n)
   {
      emp_id = id;
      name = n;
      cout<<"Employee record created for"<<name<<endl;
   }

   //Display employee details

    void display()
    {
      cout<<"Employee ID:"<<emp_id<<endl;
      cout<<"Employee Name:"<<name<<endl;
    }

    //destructor

    ~Employee()
     {
       cout<< "Employee record removed for"<<name<<endl;
     }
};

int main()
{

  //creating an employee object
  Employee emp(101,"Anjali");

  //Displaying employee details
   emp.display();

  //Object is automatically destroyed when main() ends

  return 0;
}
