#include<iostream>
using namespace std;

class Employee{
    int id;
    // static function is also known as class function
    // In this all the object share same value of static function
    // because know using static keyword the count is become an propertie of an class;
    static int count;   //Now the default value of count for all object is starts from o;

        public:
    void SetData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }

    void GetData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;

    }
    // static function //  In this we don't need any object . we can directly run the function. 
    // static function can only have access of another static function or variable;
    static void getCount(void){
        //cout<<id;      // It will give error because it have only the access of static function or variable.
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee.
int Employee::count; //Deafult value is 0.
//int Employee::count=1000;   <--- like this you can change the value of count from here not from the class;

int main(){
    Employee harsh, rahul, mohit;

    // harsh.id = 1;
    // harsh.count =1; // cannot do this as id and count are private;
    harsh.SetData();
    harsh.GetData();
    // for static function we don't need any object, it can be directly run by class. As show below
    // We only have to put scope resolution operetor for calling the static function.
    Employee::getCount();    // static function

     rahul.SetData();
    rahul.GetData();
    // for static function we don't need any object, it can be directly run by class. As show below
    // We only have to put scope resolution operetor for calling the static function.
    Employee::getCount();    //static function

     mohit.SetData();
    mohit.GetData();
    // for static function we don't need any object, it can be directly run by class. As show below
    // We only have to put scope resolution operetor for calling the static function.
    Employee::getCount();    // static function

    return 0;
}