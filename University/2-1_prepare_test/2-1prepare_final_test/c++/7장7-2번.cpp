#include<iostream>
using namespace std;

class Matric{
private:
    int arr[4];
public:
    Matric(int a=0,int b=0,int c=0, int d=0){
        arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;
    }

    void show(){
        cout <<"Metric = { "<<arr[0] <<" "<< arr[1] << " "<< arr[2]<<" "<<arr[3] <<" }";
    }

    friend int* operator>>(Matric a,int *get_arr);

    friend Matric operator<<(Matric &b,int *get_arr);

};
int* operator>>(Matric a,int *get_arr){
    for(int i=0; i <4; i++){
        get_arr[i] = a.arr[i];
    }
    return get_arr;
}

Matric operator<<( Matric &b, int *get_arr){
    for(int i=0; i < 4; i++){
        b.arr[i] = get_arr[i];
    }
    return b;
}

int main(){
    Matric a(4,3,2,1),b;
    int x[4], y[4] = {1,2,3,4}; //2차원 행렬의 4개 원소 값
    a>>x; //a의 각 원소를 배열 x에 복사. x[]는 {4,3,2,1}
    b<<y; //배열 y의 원소 값을 b의 각 원소에 설정

    for(int i=0; i < 4; i++){ //x 출력
        cout << x[i] << " ";
    }
    cout<<endl;
    b.show();
}