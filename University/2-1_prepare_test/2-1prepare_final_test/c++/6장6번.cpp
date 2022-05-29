#include<iostream>
using namespace std;

class ArrayUtillty{
public:
    static int* concat(int s1[], int s2[], int size){
        int *tmp = new int[size*2];
        int cnt=0;

        for(int i= 0; i < size; i++){
            tmp[cnt++] += s1[i];
        }

        for(int i= 0; i < size; i++){
            tmp[cnt++] += s2[i];
        }
        
        return tmp;
    }

    static int* remove(int s1[], int s2[], int size, int& retsize){
        int *tmp = new int[size];
        int cnt =0;
        bool check = false;

        for(int i=0; i < size; i++){
            for(int j =0; j < size; j++){
                if(s1[i] == s2[j]){
                    check = true;
                    break;
                }
            }
            if(check == true){
                check = false;
                continue;
            }
            else{
                tmp[retsize] += s1[i];
                retsize++;
            }
        }

        int *tmp2 = new int[retsize];
        for(int i =0; i < retsize; i++){
            tmp2[i] = tmp[i];
        }
        delete[] tmp;

        return tmp2;
    }
};

int main(){
    int s1[5];
    int s2[5];
    int *tmp1, *tmp2, retsize = 0;
    
    cout << "s1배열에 들어갈 수 5개를 입력하세요 >>";
    for(int i=0; i< 5; i++){
        cin >> s1[i];
    }
    cout << "s2배열에 들어갈 수 5개를 입력하세요 >>";
    for(int i=0; i< 5; i++){
        cin >> s2[i];
    }

    tmp1 = ArrayUtillty::concat(s1,s2,5);
    tmp2 = ArrayUtillty::remove(s1,s2,5,retsize);
    
    cout << "concat의 실행 결과\n";
    for(int i =0; i < 10; i++){
        cout << " "<<tmp1[i];
    }cout<<endl;

    cout << "remove의 실행 결과\n";
    for(int i =0; i < retsize; i++){
        cout << " "<< tmp2[i];
    }

    return 0;
}