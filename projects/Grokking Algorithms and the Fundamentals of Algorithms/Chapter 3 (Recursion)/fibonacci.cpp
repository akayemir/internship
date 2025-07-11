#include <iostream>

using namespace std;

int fibonacci(int ind){

    if (ind <= 2)
    {
        return 1;
    }
    return fibonacci(ind-1) + fibonacci(ind-2);
}

int main() {
    
    int a;  
    cout << "Index: ";
    cin >> a;
    cout<<fibonacci(a);
    return 0;
}
