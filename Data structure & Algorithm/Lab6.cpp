#include <bits/stdc++.h>

using namespace std;

char A[10];
int top = -1;
void push(char x);
char pop();
bool isEmpty();
bool ExpChecker(string s);
bool ExpCheckerAdvanced(string s);

int main(void){

    push('V');
    push('K');
    push('U');
    cout << pop();
    cout << pop();
    cout << pop();
    top=-1;

    cout << endl;

    if (ExpChecker("(a+b)-2ac")) {
      cout << "Expression valid" << endl;
    } else {
      cout << "Expression invalid" << endl;
    };

    if (ExpCheckerAdvanced("({{[[[()]]]}})")) {
      std::cout << "Valid expression" << endl;
    } else {
      std::cout << "Invalid expression" << endl;
    }
    return 0;
}

bool isEmpty()
{
  if (top==-1)
    return true;
  else
    return false;
}


void push(char x){
    top++;
    A[top]=x;
}

char pop(){
    return A[top--];
}

bool ExpChecker(string s){
  bool valid = true;
  for (auto &c : s){
    if (c=='(')
      push(c);
    else if (c==')'){
      if (top==-1) {
        valid = false;
      } else
        pop();
    }
  }
  
  if (top>=0){
    valid = false;
  }
  return valid;
}


bool ExpCheckerAdvanced(string s){
  bool valid = true;
  for (auto &c : s){
    if (c=='(' || c=='{' || c=='[')
      push(c);
    else if (c==')' || c=='}' || c==']'){
      if (top==-1)
        valid = false;
      else {
        char b = pop();
        if (b=='(' && (c=='}' || c==']'))
          valid = false;
        if (b=='[' && (c==')' || c=='}'))
          valid = false;
        if (b=='{' && (c==')' || c==']'))
          valid = false;
      }
    }
  }
  
  if (top>=0){
    valid = false;
  }
  return valid;
}
