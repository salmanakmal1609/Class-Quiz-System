#include<iostream>
using namespace std;
int main()
{
    int choice =1;
    cin>>choice;
    for(int i=1;i<10;i++){
        if(choice==1){
            cout<<"Choice is 1";
        }
        else{
            if(choice!=1){
                cout<<"Choice is not 1";
                break;
            }
        }
    }
    return 0;
}
    