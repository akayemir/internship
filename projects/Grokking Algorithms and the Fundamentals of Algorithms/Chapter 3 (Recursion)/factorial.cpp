#include <iostream>

using namespace std;

long long factorial(int ind){

    if (ind <= 1)
        return 1;
    else
        return ind * factorial(ind - 1);
}

int main() {
    
    int a;  
    cout << "Value: ";
    cin >> a;
    cout<< factorial(a);
    return 0;
}
