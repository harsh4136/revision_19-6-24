//There are three types of c++ control structures
/* 1. sequence structure  //we can perform multiple actions;
   2. selection structure //we have to make decision (true or false)like if-else;
   3. loop structure  // we can print value unless the statment is false; 
*/
// Selection control structure:  if-else ladder
#include<iostream> 
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"Sorry are not eligible for vote"<<endl;
    }
    else if(age==17){
        cout<<"You can vote after one year or next year"<<endl;
    }
    else{
        cout<<"Congratulation...You are eligible for vote"<<endl;
    }

    return 0;

    //selection control structure: Switch case statements;
    /*syntax of swtich case
    #include<iostream>
    using namespace std;
    int main()
    {
        int age;
        cout;
        cin;

        switch(age)
        {
            case 1:
                   //code                  
                   break;                 //we can take many case as per we want;

            case 2:
                   //code                 //break; statement is very essantial otherwise
                                          //the other case will also run which we don't want;
                   break;

            default:
            //code
            break;

        }
        return 0;
    }
                     */
}