#include <iostream>
#include <cctype>
using namespace std;
bool isLowercase(string name){
    for (string::size_type i = 0; i < name.length(); i++) {
            if (!islower(name[i])) {
                return false;
            }
    }return true;
}

int main() {
    string nameId;
    string isNameId = "?\?!";
    cin >> nameId;
    if(nameId.length() < 50 && isLowercase(nameId)){
    nameId.append(isNameId);
    cout << nameId;
    }
    return 0;
}
