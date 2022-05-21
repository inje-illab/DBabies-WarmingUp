#include<iostream>
using namespace std;

class Stack{
private:
    int *data;
    int top;
public:

    Stack(){
        data = new int [4];
        top =0;
    }
    ~Stack(){delete[] data;}

    Stack& operator<<(int num){
        data[++top] = num;
        return *this;
    }
    bool operator!(){
        if(top == 0){return true;}
        else return false;
    }
    void operator>>(int &x){
        x = data[top--];
    }
};


int main(){
    Stack stack;
    stack << 3 << 5 << 10; 
    
    while(true){
        if(!stack) break;

        int x;
        stack >> x; //스택의 탑에 있는 정수 팝
        cout << x << ' ';
    }
    cout << endl;
}