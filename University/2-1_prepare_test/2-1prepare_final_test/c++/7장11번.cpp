#include<iostream>
using namespace std;

class Stack{
private:
    int top;
    int *arr;
public:
    Stack(){
        top=0;
        arr = NULL;
    }
    Stack operator<<(int num){ //push
        this->arr[++top] = num;
        
        return *this;
    }
    void operator>>(int &num){
        num = arr[top--];
    }
    bool operator!(){
        if(top ==0) return true;
        else return false;
    }
};

int main(){
    Stack stack;
    stack<<3<<5<<10; //push

    while(true){
        if(!stack)  break;  //empty
        int x;
        stack >>x; //pop
        cout <<x<<" ";
    }
    cout<<endl;
}