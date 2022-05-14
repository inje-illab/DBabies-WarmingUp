#include<iostream>
using namespace std;

class Storage{
    private:
        int nData; //동적 배열의 크기
        int *strg;  
    
    public:
        Storage(int ndata){//생성자를 이용해 배열 동적생성과 입력하기 ---3번
            this->nData = ndata;
            strg = new int[nData];   
            int cnt =0,num;
            bool check= false;

            cout << "자료 " << nData << "개 입력 :";
            while(1){
                cin >> num;
                for(int i =0; i < nData ;i++){
                    if(strg[i] == num){
                        cout << num<< "<중복>\n";
                        check = true;
                    }
                }

                if(check == true){
                    check = false;
                    continue;
                }
                else{                    
                    strg[cnt]=num;           
                    cnt++;
                }

                if(cnt ==nData){ //탈출
                    cout << "입력완료:";
                    for(int i=0; i < nData; i++){
                        cout <<" " <<strg[i];
                    }
                    cout<<"\n";
                    break;
                }
            }       
        }

        ~Storage(){//소멸자를 통해 동적 해제
            cout<<"소멸되기 직전 \n";
            delete[] strg;  //여기서 오류 뜨는 거 같은데 몰겠네
        } 


        void showList(){ // nData의 크기와 배열 안에 있는 요소들을 출력 ---3번
            cout << nData << " : ";
            for(int i =0; i < nData; i++){
                    cout << strg[i] <<" ";
            }
            cout<<"\n";
        }

        void addnData(int Add_num){//데이터를 추가로 받을 때 사용 ----3번
            int cnt2 = nData-Add_num-1;
            int *tmp = new int [nData];
            int prev_ndata= nData;
            bool check = false;

            for(int i=0; i < nData; i++){ //임시로 strg에 있는 값을 저장
                tmp[i]=strg[i]; 
            }

            this->nData += Add_num;
            strg = new int[nData]; //크기 늘리기

            for(int i=0; i <prev_ndata; i++){//크기를 늘린 strg에 다시 값 대입
                strg[cnt2] = tmp[cnt2];
                cnt2++;
            }
            delete[] tmp; //필요없어진 tmp를 free
            
            cout << "자료 " << Add_num<<"개 추가입력 : ";
            for(int i= 0; i<nData-Add_num; i++){
                cout << strg[i] <<" ";
            }
            cout << "\n";

            while(1){
                int num;
                cin >> num;

                for(int i=0; i<nData; i++){ //검사
                    if(strg[i]==num){
                        cout << num << "<중복>\n";
                        check = true;
                        break;
                    }
                }
                if(check == true){
                    check = false;
                    continue;
                }
                else{
                    strg[cnt2] = num;                
                    cnt2++;
                }
                
                if(cnt2 == nData){ //탈출
                    cout << "자료:";
                    for(int i=nData-Add_num; i < nData; i++){
                        cout <<" " <<strg[i];
                    }
                    cout<<" 추가\n";
                    break;
                }
            }
        }

        void subStrg(Storage get_strg){ //4번
            int *tmp = new int[nData];
            int cnt=0;            

            for(int i = 0; i < nData; i++){
                bool check = false;

                for(int j = 0; j<get_strg.nData; j++){//검사
                    if(strg[i] == get_strg.strg[j]){ //같은 게 있으면
                        check = true;
                        break;//탈출
                    }                    
                }

                if(check != true){// 같지 않다면 새로운 공간에 임시저장   
                    tmp[cnt] = strg[i];
                    cnt++;                                   
                }
            }

            strg = new int[cnt]; //strg의 공간을 알맞은 크기를 재정의한 후
            this->nData = cnt;

            for(int i=0; i < cnt; i++){//임시저장한 걸 대입
                strg[i] = tmp[i];
            }

            

            delete[] tmp; //임시저장소 free
        }
};

int main(){
    Storage s1(4);
    s1.showList(); // 출력

    Storage s2(s1);
    s2.showList();

    s2.addnData(3); 
    s2.showList();
   //--------------------여기까지 3번
    
    Storage s3(3);
    s3.showList(); //s3 출력
    s2.subStrg(s3); 
    //s2의 자료중 s3에 포함된 자료인
    //3 10를 삭제, 남은 공간정리
    s2.showList();
    
    //--------------------- 4번
    return 0;
}