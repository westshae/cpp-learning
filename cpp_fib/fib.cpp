#include "iostream"

using namespace std;

#define print(text) cout<<text<<endl;

void fib(int type,int length){
    int list[length];
    int sum = 0;

    for(int i = 0; i < length; i++){
        if(i == 0){list[i] = i;}
        else if(i == 1){list[i] = i;}
        else{list[i] = list[i-1] + list[i-2];}
    }
    
    for(int i = 0; i < length; i++){
        if(type == 0){
            cout<<list[i];
            if(i < length-1){cout<<", ";}
            else{cout<<endl;}
        }
        else if(type == 1){
            sum += list[i];
        }
    }

    if(type == 1){
        print(sum);
    }
}

int main(){
    print("What is the length of the sequence?: ");
    int length;
    cin>>length;

    print("Would you prefer the list '0' or the sum '1'?: ");
    int type;
    cin>> type;

    fib(type, length);
    return 0;
}