#include <iostream>

using namespace std;

struct Person {
    string name;
    int number;
};
Person arr[11];

int hashFunction(string name) 
{
    int sum = 0;
    for (int i = 0; i < name.length(); i++)
    {
        sum += name[i] * (i + 1);
    }
    return sum % 11;
}


int main() {
    
    int input;
    int number;
    string name;
    int left = 11;
    cout << "Welcome to Phonebook!" << endl;
    do {

        cout << "Menu: " << endl;
        cout << "1. Add a number" << endl;
        cout << "2. Search a number" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> input;

        if (input == 1) 
        {
            if (left == 0) 
            {
                cout << "The phonebook is full." << endl;
            }
            else 
            {
                cout << "The name of the person: ";
                cin >> name;
                cout << "The number: ";
                cin >> number; 
                int index = hashFunction(name);
                if (arr[index].name == "") 
                {
                    arr[index].name = name;
                    arr[index].number = number;
                }
                else
                {
                    for (int i = index; i < 11; i++)        //Linear Probing for the hash table
                    {
                        if (arr[i].name == "")
                        {
                            arr[i].name = name;
                            arr[i].number = number;
                            break;
                        }
                        else if (i==10)
                        {
                             i=0;
                        }
                    }
                }
                left--;
            }
        }
        
        else if (input == 2) 
        {
            cout << "The name of the person: ";
            cin >> name;
            int index = hashFunction(name);
            if (arr[index].name == "") 
            {
                cout << "The person is not found." << endl;
            } 
            else if (arr[index].name == name)
            {
                cout << "The number of " << name << " is: " << arr[index].number << "." << endl;
            }
            else
            {
                for (int i = index; i < 11; i++)
                {
                    if (arr[i].name == name)    
                    {
                        cout << "The number of " << name << " is: " << arr[i].number << "." << endl;
                        break;
                    }
                    else if (i==10)
                    {
                        i=0;    
                    }
                    else if (i==index)
                    {
                        cout << "The person is not found." << endl;
                        break;
                    }
                }
            }
        }

        else if (input == 3)
        {
            cout << "Goodbye!" << endl;
            break;
        }
    } while ((input == 1 || input == 2) && left != 0);

    cout << "The phonebook is: " << endl;
    for (int i = 0; i < 11; i++)
    {
        if (arr[i].name != "")
        {
            cout << arr[i].name << ": " << arr[i].number << endl;
        }
    }
    cout << endl;

   return 0;
}
