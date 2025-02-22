#include <iostream>
#include <stack>
using namespace std;

string func(string &word){
    stack<char> s; // storing stack

    for(int i = 0; i < word.length(); i++){
        char ch = word[i]; //store to stack
        
        if(!s.empty() && s.top() == ch) {
            s.pop();
        }
        else {
            s.push(ch);
        }
    }

    string new_s = "";
    while(!s.empty()){
        new_s = s.top() + new_s; //prepend
        s.pop();
    }

    return new_s;

}

int main(){
    string input0 = "abbaca";
    string input1 = "azxxzy";
    string input2 = "acbbbbcca";

    cout << func(input0) << endl;
    cout << func(input1) << endl;
    cout << func(input2) << endl;

    return 0;
}
