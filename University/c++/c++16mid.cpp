#include<iostream>
using namespace std;

class Strg{
private:
    int strg[5];
    int Available_strg; //저장 가능한 공간의 수

public:
    Strg(){
        for(int i=0; i < 5; i++){
            strg[i] = -1;
        }
        Available_strg = 5;
    }

    Strg(int a){
        strg[0] = a;
        for(int i =1; i <5; i++){
            strg[i] = -1;
        }
        Available_strg = 4;
    }

    Strg(int a, int b){
        strg[0] = a;
        strg[1] = b;
        for(int i =2; i< 5; i++){
            strg[i] = -1;
        }
        Available_strg = 3;
    }

    Strg(int a, int b, int c){
        strg[0] = a;
        strg[1] = b;
        strg[2] = c;
        strg[3] = -1;strg[4] = -1;
        Available_strg = 3;
    }

    Strg(int a,int b, int c, int d, int e){
        strg[0] = a;
        strg[1] = b;
        strg[2] = c;
        strg[3] = d;
        strg[4] = e;
    }

    void showlist(){ //배열에 들어있는 값들을 보여준다.
        cout << Available_strg << " : ";
        for(int i =0; i <5; i++){
            cout << strg[i]<<" ";
        }
        cout<<endl;
    }

    int add(int adata){
        int cnt=0;
        for(int i =0; i < 5; i++){
            if(strg[i] != -1){
                cnt++;
            }
        }
        if(cnt ==0){
            cout<<-1<<endl;
        }
        else{
            strg[cnt] = adata;
            Available_strg = 4 - cnt;       
        }
        
        return Available_strg;
    }

    int del(int ddata){
        int cnt =0; 
        for(int i =0; i<5; i++){
            if(strg[i] == ddata){
                cnt++;
                strg[i] = -1;
            }
        }

        if(cnt ==0){
            return -1;
        }
        else{
            Available_strg = cnt;
            return cnt;
        }
    }
};

int main(){
    Strg c2(5,7,5,6,8);

    cout << c2.del(9)<<endl;
    cout<< c2.del(5)<<endl;
    c2.showlist();
}   

