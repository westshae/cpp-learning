//C++ Libraries
#include "iostream"
#include "string"

//Custom libraries
#include "header.h"

//External libraries (none as of now)

using namespace std;

int main(){
    int a, b;
    a = 10;
    b = 11;

    string sum = to_string(sumOfNumbers(a,b));
    
    cout<<sum<<endl;

    return 0;
}