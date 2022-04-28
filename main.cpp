#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<char> input;
    char name;

    cout << "Input name: " << endl;
    while(cin.get(name) && name != '\n') {
        input.push(name);
    }

    while(!input.empty()) {
        cout << input.top();
        input.pop();
    }

    cout << endl;
    system("pause");
    return 0;
}
