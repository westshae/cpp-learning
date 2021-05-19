#include "iostream"
#include "vector"

using namespace std;

#define print(text) cout<<"DEBUG: "<<text<<endl;

int main(){

    vector<int> items = {12,13};

    items.push_back(14);

    print("random string of text");
    print(items[0]);
    print(items.size());

    return 0;
}