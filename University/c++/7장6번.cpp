#include<iostream>
using namespace std;

// class Matrix{ //6-1번
//     private:
//     int a,b,c,d;

//     public:

//     Matrix(int a = 0, int b =0, int c =0, int d =0){
//         this->a = a;
//         this->b = b;
//         this->c = c;
//         this->d = d;
//     }

//     void show(){
//         cout << "Matric = { "<< a<<" "<<b<<" "<< c << " " <<d<<" }\n"; 
//     }

//     Matrix operator+(Matrix one){
//         Matrix tmp;
//         tmp.a = this->a + one.a;
//         tmp.b = this->b + one.b;
//         tmp.c = this->c + one.c;
//         tmp.d = this->d + one.d;
        
//         return tmp;
//     }

//     Matrix& operator+=(Matrix one){
//         this->a += one.a;
//         this->b += one.b;
//         this->c += one.c;
//         this->d += one.d;

//         return *this;
//     }

//     bool operator==(Matrix one){
//         if(this->a == one.a &&this->b == one.b &&this->c == one.c &&this->d == one.d){
//             return 1;
//         }
//         else{return 0;}
//     }
// };

class Matrix{
        private:
    int a,b,c,d;

    public:

    Matrix(int a = 0, int b =0, int c =0, int d =0){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    void show(){
        cout << "Matric = { "<< a<<" "<<b<<" "<< c << " " <<d<<" }\n"; 
    }
        friend Matrix operator+(Matrix one, Matrix two);
        friend void operator+=(Matrix& one, Matrix two);
        friend bool operator==(Matrix one, Matrix two);
};

    Matrix operator+(Matrix one, Matrix two){
        Matrix tmp;
        tmp.a = two.a + one.a;
        tmp.b = two.b + one.b;
        tmp.c = two.c + one.c;
        tmp.d = two.d + one.d;
        
        return tmp;
    }

    void operator+=(Matrix& one, Matrix two){
        one.a += two.a;
        one.b += two.b;
        one.c += two.c;
        one.d += two.d;

    }

    bool operator==(Matrix one, Matrix two){
        if(two.a == one.a &&two.b == one.b &&two.c == one.c &&two.d == one.d){
            return 1;
        }
        else{return 0;}
    }

int main(){
    Matrix a(1,2,3,4),b(2,3,4,5),c;
    c = a+b;
    a+=b;
    a.show();b.show();c.show();

    if(a ==c){
        cout << "a and c are the same"<<endl;
    }
}