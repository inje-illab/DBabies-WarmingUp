#include<iostream>
using namespace std;

class Matric{
private:
    int arr[4];
public:
    Matric(int a=0, int b=0, int c=0, int d=0){
        arr[0]=a; arr[1]=b; arr[2] = c; arr[3] =d;
    }
    void show(){
        cout << "Matric {"<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<"}\n";
    }

    Matric operator+(Matric obj){
        Matric tmp;
        for(int i = 0; i< 4; i++){
            tmp.arr[i] = this->arr[i] + obj.arr[i];
        }

        return tmp;
    }

    Matric& operator+=(Matric obj){
        for(int i = 0; i< 4; i++){
            this->arr[i] += obj.arr[i];
        }

        return *this;
    }

    bool operator==(Matric obj){
        for(int i=0; i<4; i++){
            if(this->arr[i] != obj.arr[i]){
               return false;
            }
        }
        return true;
    }
};



int main(){
 Matric a(1,2,3,4 ), b(2,3,4,5), c;
 c = a+b;
 a+=b;
 a.show();b.show();c.show();

 if(a==c){
     cout << "a and c are the same"<< endl;
 }  
}