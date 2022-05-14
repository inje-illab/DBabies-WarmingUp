#include<iostream>
using namespace std;

class Storage{
private:
    int nData;
    int *strg;
public:
    Storage(int nsize);
    ~Storage();
    void showList();
    void add_Strg(Storage &S1);
};

Storage ::Storage(int nsize){
    nData = nsize;
    strg = new int[nsize];
    fill_n(strg,nsize,0);
    bool check = false;

    cout << "자료 "<<nsize <<"개 입력 :\n";

    int cnt =0,num=0;
    while(cnt < nData){
        cin >>num;
        for(int i =0; i <cnt; i++){
            if(num == strg[i]){
                check = true;
                break;
            }
        }
        if(check){
            cout<< "<중복> ";
            check = false;
        }
        else{
            strg[cnt] = num;
        }
        cnt++;
    }        
}

Storage:: ~Storage(){
    delete[] strg;
}

void Storage :: showList(){ //strg 배열 안에 있는 값들을 출력
    cout << nData<< ": ";
    for(int i =0; i < nData; i++){
        cout << strg[i]<< ' ';
    }
    cout <<endl;
}

void Storage::add_Strg(Storage &S1){
    bool check = true;
    int add_num = nData + S1.nData;
    int tmp[nData];

    if(add_num >20){
        cout<< "덧셈을 수행할 수 없습니다.\n";
        return;
    }

    for(int i =0; i < nData; i++){ //임시저장
        tmp[i] = strg[i];
    }

    for(int i =0; i < S1.nData;i++){//종복 검사
        for(int j = 0; j < nData; j++){
            if(S1.strg[i] == strg[j]){
                add_num--;
                break;
            }
        }    
    }
    delete[] strg;
    strg = new int[add_num];//재할당
    fill_n(strg,add_num,0);//초기화

    for(int i =0; i < nData; i++){ //다시 대입
        strg[i] = tmp[i];
    }

    int i=0,size = nData;
    while(i <S1.nData){//중복 제외하고 대입하기
        for(int j = 0; j < nData; j++){
            if(S1.strg[i] == strg[j]){
                check = false;
                break;
            }
        }

        if(check){
            strg[size] = S1.strg[i];
            size++;
        }
        check = true;
        i++;
    }

    nData = add_num;
}

int main(){
    Storage s1(4); 
    s1.showList();

    Storage s2(10); 
    s2.showList();


    s1.add_Strg(s2);
    s1.showList();
}
//10 3 4 5
//1 12 33 24 5 16 7 28 3 27