#include<iostream>
using namespace std;

template <typename T>
bool equalArrays(T x[], T y[], int num){
    int check = 0;

    for(int i=0; i < num; i++){
        if(x[i] != y[i]) {check =0; break;}
    }
    if(check == 0)return true;
    else return false;

}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    int y[] = {1, 10, 100, 5, 4};

    if(equalArrays(x,y,5)) cout<< "같다";
    else cout << "다르다";
}