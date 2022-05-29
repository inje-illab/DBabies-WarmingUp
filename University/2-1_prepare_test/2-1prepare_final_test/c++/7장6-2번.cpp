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

    friend Matric operator+(Matric obj1,Matric obj2);

    friend void operator+=(Matric &obj1,Matric &obj2);

    friend bool operator==(Matric obj1, Matric obj2);
};


Matric operator+(Matric obj1, Matric obj2){
    Matric tmp;
    for(int i = 0; i< 4; i++){
        tmp.arr[i] = obj1.arr[i] + obj2.arr[i];
    }

    return tmp;
}
void operator+=(Matric &obj1, Matric &obj2){
    for(int i = 0; i< 4; i++){
        obj1.arr[i] += obj2.arr[i];
    }
}

bool operator==(Matric obj1, Matric obj2){
        for(int i=0; i<4; i++){
            if(obj1.arr[i] != obj2.arr[i]){
               return false;
            }
        }
        return true;
    }

int main(){
 Matric a(1,2,3,4 ), b(2,3,4,5), c;
 c = a+b;
 a+=b;
 a.show();b.show();c.show();

 if(a==c){
     cout << "a and c are the same"<< endl;
 }  
}