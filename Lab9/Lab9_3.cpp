//Ian Lin
#include <iostream>
using namespace std;

int power(int n, int e){
    if(e==0)
    return 1;

    return n*power(n,e-1);
}

int main(){
    int n,e;

    cout << "Enter two positive integers: ";
    cin >> n >> e;

    cout << power(n,e) << endl;
}