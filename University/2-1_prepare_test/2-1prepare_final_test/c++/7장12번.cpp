#include<iostream>
using namespace std;

class SortedArray{
private:
    int size; //현재 배열의 크기
    int *p; // 정수 배열에 대한 포인터
    void sort(){ // 정수 배열을 오름차순으로 진행
        int swp;
        for(int i=0; i<size; i++){ //p[0] ~ p[size] sequential sort 
            for(int j=i; j<size; j++){
                if(p[i]>p[j]){
                    swp = p[i];
                    p[i] = p[j];
                    p[j] = swp;
                }
            }
        }
    }
public:
    SortedArray(){
        size = 0;
        p = NULL;
    }
    SortedArray(SortedArray &src){ //복사생성자
        this->size = src.size;
        p = new int[this->size];
        for(int i=0; i< size; i++){
            this->p[i] = src.p[i];
        }
    }
    SortedArray(int p[], int size){//생성자, 정수 배열과 크기를 전당받음
        this->size = size;
        this->p = new int [size];
        for(int i=0; i< size; i++){
            this->p[i] = p[i];
        }
    }
    ~SortedArray(){//소멸자
        delete[] p;
    }

    SortedArray operator + (SortedArray& op2){//현재 배열에 op2 배열 추가
        SortedArray tmp;
        tmp.size  = this->size + op2.size;
        tmp.p = new int [tmp.size];

        int cnt=0;
        for(int i=0; i < this->size;i++){
            tmp.p[cnt++] = this->p[i];
        }
        for(int i =0; i < op2.size;i++){
            tmp.p[cnt++] = op2.p[i];
        }

        return tmp;
    }

    SortedArray& operator = (const SortedArray &op2){//현재 배열에 op2 배열 복사
        this->size = op2.size;
        delete[] p;
        this->p = new int[this->size];

        for(int i=0; i < this->size; i++){
            this->p[i] = op2.p[i];
        }

        return *this;
    }

    void show(){//배열의 원소 출력
        sort();
        cout << "배열 출력 : ";
        for(int i=0; i<size; i++)
            cout << p[i] << ' ';
        cout << endl;
        }  
};

int main(){
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };
    SortedArray a(n, 3), b(m, 4), c;
    
    c = a + b; // +, = 연산자 작성 필요
    // + 연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요
    
    a.show();
    b.show();
    c.show();
}