#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int>& s) {

    //base case
    if (s.empty()) {
        return;
    }

    //pop
    int topElement = s.top();
    s.pop();

    reverse(s);

    //push popped element to bottom stack
    stack<int> tempStack;
    while (!s.empty()) {
        tempStack.push(s.top());
        s.pop();
    }
    s.push(topElement);
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    reverse(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
