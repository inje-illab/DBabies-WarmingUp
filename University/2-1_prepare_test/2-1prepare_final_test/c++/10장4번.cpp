#include<iostream>
using namespace std;

template<typename T>
bool search(int num, T x[], int size){
    bool check = false;

    for(int i=0;i<size; i++){
        if(x[i] == num){
            check = true;
            break;
        }
    }

    if(check == true) return true;
    else return false;
}

int main(){
    int x[] = {1,10,100,5,4};
    if(search(100,x,5))  cout << "100이 배열 x에 포함되어 있다.";
    else cout << "100이 배열 x에 포한되어 있지 않다.";
}