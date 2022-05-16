#include<iostream>
using namespace std;

class node{
    private:
        int *memory;
        int size;

    public:
        node(int index){
            this->memory = new int [index];
            this->size =index;
        }
        ~node(){delete[] memory;}
       
    protected:
        int get_memory(int top){return  memory[top];}

        void set_memory(int data, int top){memory[top] = data; }

        int get_size(){return size;}
};

class Mystack : public node{
    private:
        int top;

    public:
        Mystack(int data) : node(data){top =0;} 

        void push(int data){
            top++;
            set_memory(data,top);
        }
        int capacity(){return get_size();}

        int length(){return top;}

        int pop(){
            return get_memory(top--);
        }        
};

int main(){
    Mystack mstack(100);
    int n;
    cout <<"스택에 삽입할 5개워 정수를 입력하라>> ";

    for(int i=0; i<5; i++){
        cin>>n;
        mstack.push(n); //스택에 푸시
    }

    cout << "스택용량:" <<mstack.capacity() << ", 스택 크기 "<<mstack.length()<<endl;
    cout<< "스택의 모든 원소를 팝하여 출력한다.>> ";

    while(mstack.length() != 0){
        cout << mstack.pop()<<" ";
    }

    cout<<"\n"<<"스택의 현재 크기 :  " <<mstack.length()<< endl;
}