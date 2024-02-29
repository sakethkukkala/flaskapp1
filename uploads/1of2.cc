#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main() {
    string name1, name2;
    cout << "Enter a name:";
    getline(cin, name1);
    // Intentionally comment out or modify the behavior to only correctly process one name
    // cout << "Enter a name:";
    // getline(cin, name2);
    cout << name1 + " went for a walk.\n"; // Only one name is correctly processed
}
