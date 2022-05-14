#include<iostream>
using namespace std;

class node{
    private:
        int size;
        int *memory;

    public:
    node(int size){
        this->size = size;
        this->memory = new int[size];
    }
    ~node(){
        delete[] memory;
    }

    protected:
    void put(int index, int value){
        memory[index] = value;
    }
    int get(int index){return memory[index];}
    int getsize(){return size;}
};


class MyQueue : public node{
    private:
        int front;
        int rear ;

    public:
        MyQueue(int data) : node(data){front =0;rear =0;} //node에 있는 생성자 이용 == super

        void enqueue(int num){
            if(rear >= getsize()){
                cout << "Queue is full..\n";
                exit(1);
            }
            rear++;
            put(rear,num);
        }

        int dequeue(){//큐에서 처음 하나를 제거한 후 출력
            if(rear == 0){
                cout <<"Is empty..\n";
            }
            rear--;front++;
            return get(front);
        }

        int capacity(){return getsize();}//큐의 용량

        int length(){return rear;} //큐의 길이
};

int main(){
    MyQueue mQ(100);
    int n; 
    cout <<"큐에 삽입할 5개의 정수를 입력하여라>>";
    for (int i=0; i <5; i++){
        cin >>n;
        mQ.enqueue(n); //큐에 삽입
    }
    cout << "큐의 용량 : " << mQ.capacity() << "의 크기: "<<mQ.length()<<endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다.>> ";

    while(mQ.length() != 0){
        cout << mQ.dequeue() << ' '; //큐에서 제거하여 출력
    }

    cout << endl<<"큐의 현재의 크기 : " <<mQ.length() <<endl;
}