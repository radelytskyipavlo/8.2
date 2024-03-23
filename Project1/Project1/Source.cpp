#include <iostream>
#include <string>
using namespace std;

void capitalizeAfterDot(string& s) {
    bool capitalizeNext = false;
    for (char& c : s) {
        if (c == '.') {
            capitalizeNext = true;
        }
        else if (c != ' ' && capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    capitalizeAfterDot(str); 

    cout << "Modified string: " << str << endl;
    return 0;
}
