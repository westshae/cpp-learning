#include "iostream"
#include "string"

#include "header.h"

using namespace std;

int main(){
    int a,b;

    cout<<"Input the first digit: "<<endl;
    cin >> a;
    cout<<"Input the second digit: "<<endl;
    cin >> b;

    int sum = sumOfNumbers(a,b);
    string sumStr = to_string(sum);



    cout<<"The sum is "<<sumStr<<endl;

    return 0;
}