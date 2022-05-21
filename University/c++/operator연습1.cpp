#include<iostream>
using namespace std;

class Statistics{
    private:
    int *arr;
    int cnt;

    public:

    Statistics(){
        arr = new int [8];
        cnt =0;
    }
    ~Statistics(){delete[] arr;}

    bool operator!(){
        if(cnt == 0) return true;
        else return false;
    }
    
    Statistics& operator <<(int num){
        this->arr[cnt++] = num;
        return *this;
    }

    void operator~(){
        for(int i =0; i< cnt; i++){
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

    void operator>>(int &avg){
        int sum =0;
        for(int i = 0; i< cnt; i++){
            sum += arr[i];
        }
        avg = sum / cnt;
    }
};

int main(){
    Statistics stat;

    if(!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5개의 정수를 입력하라>> ";
    for(int i =0; i <5; i++){
        cin >> x[i];
    }

    for(int i =0; i< 5; i++){
        stat << x[i];
    }
    stat<<100<<200; // 100,200을 통계 객체에 삽입한다
    ~stat;//통게 데이터를 모두 출력한다.

    int avg;
    stat >> avg;//통계 객체로부터 평균을 받는다.
    cout << "avg= " <<avg << endl;//평균을 출력한다.
}