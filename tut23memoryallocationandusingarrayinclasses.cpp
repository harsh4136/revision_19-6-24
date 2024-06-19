#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void){
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter Id of your item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item "<<counter+1<<endl;
    cin>>itemPrice[counter]; 

    counter++;  //for incrmentation of counter we can also make an another member function but it is easy to write in this way;
}

void shop :: displayPrice(void){

    for(int i = 0; i < counter ; i++){
        cout<<"The Price of item with Id "<<itemId[i]<<" is Rs."<<itemPrice[i]<<endl; //    <---  ?
    }

}

int main(){
    shop cloths;
    cloths.initCounter();
    
    cloths.setPrice();   //We don't have to write cloths.setPrice(0); so many times, we can also put this into an loop function;
    cloths.setPrice();   // If you want to take id for so many times like 50 or above you have to write it in an loop;
    cloths.setPrice();
    cloths.setPrice();
    cloths.displayPrice();
    
    return 0;
}