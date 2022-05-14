#include<iostream>
using namespace std;

class Storage{
private:
    int nData;
    int strg[20];
public:
    Storage(int nsize);
    ~Storage(){}
    void showList();
    void multipleN(int N);//입력 받은 값 중 일의자리수에 N의 배수가 몇 개 있는지 
    void add_Strg(Storage &S1);//총 값들의 수가 20개가 넘으면 덧셈을 수행할 수 없음을 출력 후 종료
};

Storage ::Storage(int nsize){
    nData = nsize;
    cout << "자료 "<<nsize <<"개 입력 :\n";
    for(int i =0; i <nData; i++){
        cin >>strg[i];
    }
}

void Storage :: showList(){ //strg 배열 안에 있는 값들을 출력
    cout << nData<< ": ";
    for(int i =0; i < nData; i++){
        cout << strg[i]<< ' ';
    }
    cout <<endl;
}

void Storage::multipleN(int N){
    int cnt =0;
    for(int i =0; i < nData; i++){
        if(strg[i] <10 && strg[i] % N ==0){
            cnt++;
        }
    }
    cout << N<<"의 배수는 " << cnt <<"개 입니다.\n";
}

void Storage::add_Strg(Storage &S1){
    int add_num = nData + S1.nData;
    if(add_num >20){
        cout<< "덧셈을 수행할 수 없습니다.\n";
        return;
    }

    int cnt =0;
    for(int i = nData; i < add_num; i++,cnt++){
        strg[i] = S1.strg[cnt];
    }

    nData += S1.nData;
}

int main(){
    Storage a1(4); //4개의 자료입력
    a1.showList();

    Storage s2(10); //4개의 자료입력
    s2.showList();

// 1)
    a1.multipleN(3);

// 2)
    a1.add_Strg(s2);
    a1.showList();
}

//1 12 33 24 5 16 7 28 3 27