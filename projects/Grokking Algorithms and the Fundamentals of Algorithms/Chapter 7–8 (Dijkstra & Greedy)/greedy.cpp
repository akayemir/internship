#include <iostream>

using namespace std;

double money[12] = {200, 100, 50, 20, 10, 5, 1, 0.5, 0.25, 0.1, 0.05, 0.01};

int main() {
    
  
    cout << "Enter the amount of money: ";
    double amount;
    cin >> amount;
    int* count = new int[12];
    
   
    for (int i = 0; i < 12; i++)
    {
        while (amount >= money[i])
        {
            amount -= money[i];
            count[i]++;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        cout << money[i] << " TL : " << count[i] << " tane" << endl;
    }

    return 0;
}
