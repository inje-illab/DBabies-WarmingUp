#include<iostream>
using namespace std;

template<typename T>
int* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize){
//src[]에 있는 수 중 minus랑 겹치는 게 잇으면 지우고 총 사이즈를 retSize에 저장한 후 반환
    T *tmp = new T[sizeSrc];
    bool check = false;

    for(int i =0; i < sizeSrc; i++){
        for(int j = 0; j < sizeMinus; j++){
            if(src[i] == minus[j]){
                check = true;
                break;
            }
        }

        if(check == true){
            check = false;
            continue;
        }
        else{
            tmp[retSize++] = src[i];
        }
    }

    T *TP = new T[retSize];
    for(int i =0; i < retSize; i++){
        TP[i] = tmp[i];
    }
    delete[] tmp;
    
    return TP;    
}

int main(){
    int src[] = {1,2,3,4,5,6};
    int minus[] = {3,4};
    int size =0;

    int *p = remove(src,6,minus,2,size);

    for(int i= 0; i < size; i++){
        cout << p[i]<<" ";
    }
}