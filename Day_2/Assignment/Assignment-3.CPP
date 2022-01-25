#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> max;
    stack<int> myStack;
    max.push(0);
    int n;
    cin>>n;
    while(n--){
        int n;
        cin>>n;
        if(n==1){
            cin>>n;
            if(n>=max.top())
                max.push(n);
            myStack.push(n);
        }else if(n==2){
            if(myStack.top()==max.top())
                max.pop();
            myStack.pop();
        } 
        else if(n==3)
            cout<<max.top()<<"\n";
    }
    return 0;
}