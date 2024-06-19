#include<iostream>
using namespace std;
int main(){
    for (int i =0; i<40; i++)
    {
        /*   code   */
        if(i==8){
            break;     //this break keyword is use to break the given number.. so none of the below
                       //number will print.
        }
        cout<<i<<endl;

        /*   code   */
        /*   #include<iostream>
             using namespace std;
            int main(){
                for(int i=0;i<40;i++)
                {
                   if(i==8){
                    continue;  //continue keyword is use to skip no 8.but then after below   
                    }          //will print upto 39.
                    cout<<i<<endl; 
                }    
                   return 0;
            }           */
    }
    return 0;
}