#include<iostream>
using namespace std;

class SortedArray{
    private: 
    int size;//현재 배열의 크기
    int *p;//정수 배열에 대한 포인터
    void sort(){        //정수 배열을 오름차순으로 정렬
        for(int i =0; i < size; i++){
            for(int j = 0; j < i; j++){
                if(p[j] > p[j+1]){
                    int tmp = p[j];
                    p[j] = p[j+1];
                    p[j+1] = tmp;
                }
            }
        }
    }

    public:
    SortedArray();
    SortedArray(SortedArray& src);//복사생성자
    SortedArray(int p[],int size);//생성자, 정수 배열과 크기를 전달받음
    ~SortedArray();//소멸자
    SortedArray operator+(SortedArray& op2); //현재 배열에 op2 배열 추가
    SortedArray& operator=(const SortedArray& op2); //배열의 원소 출력

    void show(){
        cout << "배열 출력 : ";        
        for(int i =0; i < size; i++){
            cout << p[i]<<" ";
        }
        cout <<endl;
    }                        
    
};

SortedArray::SortedArray(){
    size = 0;
    p = nullptr;

}
SortedArray::SortedArray(SortedArray& src){
    this->size = src.size;
    p = new int [src.size];

    for(int i = 0; i <src.size; i++){
        p[i] = src.p[i];
    }
    sort();
}
SortedArray::SortedArray(int p[], int size){  
    this->size = size;
    this->p = new int [size];

    for(int i =0; i < size; i++){
        this->p[i] = p[i];
    }  
    sort();
}

SortedArray::~SortedArray(){
    delete p;
}

SortedArray SortedArray::operator+(SortedArray &op2){
    SortedArray tmp;
    int num =0;
    tmp.size = this->size + op2.size;
    tmp.p = new int[tmp.size];
    for(int i = 0; i < this->size; i++){
        tmp.p[num++] = this->p[i];
    }
    for(int i =0; i < op2.size; i++){
        tmp.p[num++] = op2.p[i];
    }
    tmp.sort();
    return tmp;    
}

SortedArray& SortedArray::operator=(const SortedArray &op2){
    this->size = op2.size;
    this->p = new int[op2.size];

    for(int i = 0; i < this->size; i++){
        this->p[i] = op2.p[i];
    }

    return *this;
}


int main(){
    int n[] = {2,20,6};
    int m[] = {10,7,8,30};
    SortedArray a(n,3), b(m,4),c;   

    c = a +b;

    a.show(); b.show(); c.show();
}