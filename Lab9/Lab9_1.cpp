//Ian Lin
#include <iostream>
using namespace std;

void cp(int n, int current =1){
    if(current>n)
    return;
    cout << current << endl;
    cp(n, current + 1);
}

int main(){
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cp(n);
    return 0;
}