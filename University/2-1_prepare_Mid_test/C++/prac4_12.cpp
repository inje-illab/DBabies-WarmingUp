#include<iostream>
#include<string>
#include<map>
using namespace std;

class Histogram{
private:
    string str;
public:
    Histogram(string s){
        str = s;
        str+="\n";
    }
    void put(string s){
        str+= s;
    }
    void putc(char c){
        str += c;
    }
    void print(){
        map <char,int> M;
        int cnt=0;
        int num=0;
        char ch ='a';
        for(char i='a'; i <='z'; i++){
            M.insert(pair<char,int>(i,0));
        }

        for(int i=0; i < str.size(); i++){
            str[i] = tolower(str[i]);
            for(int j ='a'; j <= 'z'; j++){
                if(str[i] == j){
                    cnt++;
                    M[j]++;
                    break;
                }
            }
        }
        for(int i =0; i < str.size(); i++){
            cout<<str[i];
        }

        cout <<"\n총 알파벳 수 " << cnt<<endl;

        for(int i = 'a'; i<='z'; i++){
            cout << (char)i<< " ("<< M[i]<< ")  : ";
            num = M[i];
            for(int i =0; i < num; i++){
                cout << "*";
            }
            cout <<endl;
        }

    }
};

int main(){
    Histogram elvisHisto("Wise men say, only, fools, only fools, rush, in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis presley");
    elvisHisto.print();
}
