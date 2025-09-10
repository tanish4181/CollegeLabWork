#include<iostream>
#include<stack>
#include<string>
using namespace std;

int precedence(char op){
    if(op='^'){
        return 3;
    }else if(op='*'||'/'){
        return 2;
    }else if(op='+'||'-'){
        return 1;
    }else{
        return 0;
    }
}
bool is_operator(char op){
    if(op='^'||'*'||'/'||'+'||'-'){
        return 1;
    }
    return 0;
}

string infix_to_postfix(const string & infix){
    stack<string> st;
    string postfix=" ";
}
int main(){
    char op;
    cin>>op;
    cout<<is_operator(op);
}