#include<iostream>
using namespace std;

inline int product(int a, int b){  // this saves time and consume less memory. If not use it in long programs its effects our memory,etc.
 
    return a*b;   // whenever we inline a function, we are requesting complier to inline the function.
}                 // It is not neccesary that complier inline your function everytime. sometime it takes decision to reject or accept your request on his own. 

/*int product(int a, int b){    // this is for understanding only.
    static int  c = 0;      //this will executes only once.
    c = c + 1;            //Next time this function is run the value of c will be retained
    return a*b+c;         // If your are using static function then do not use inline function. because it is not recommended.
}*/

float moneyReceived(float currentMoney, float factor=1.04){    //4% interest.
    return currentMoney * factor;        // if you are not using void function then it is essential to return the value to main function.    
}

//int strlen(const char *p){
                                //If you don't want any modification in value, then you can use 'const' to constant your value 
//}

int main(){
    int a, b;
   //cout<<"Enter the value of a and b"<<endl;
   //cin>>a>>b;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;         //don't forget to declare int money.
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<" Rs after 1 year"<<endl; 
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<<" Rs after 1 year"<<endl; 
    
    // Understand the meaning of upper two line .

    return 0;
}