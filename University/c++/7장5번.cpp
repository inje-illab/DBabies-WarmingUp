#include<iostream>
using namespace std;

// class color{ //5-1번
// private:
//     int x,y,z;
    
// public:
//     color(int x=0,int y=0, int z= 0){
//         //초기화 해주는 수가 없다면 0으로 초기화
//         this->x = x;
//         this->y = y;
//         this->z = z;
//     }
    
//     color operator+(color one){
//         color tmp;
//         tmp.x = this->x + one.x;
//         tmp.y = this->y + one.y;
//         tmp.z = this->z + one.z;

//         return tmp;
//     }

//     bool operator==(color one){
//         if(this->x == one.x && this->y == one.y && this->z == one.z){
//             return 1;
//         }
//         else{return 0;}
//     }

//     void show(){
//         cout << x<<" "<<y<< " " << z<<"\n";
//     }

// };

class color{ //5-2번
private:
    int x,y,z;
    
public:
    color(int x=0,int y=0, int z= 0){
        //초기화 해주는 수가 없다면 0으로 초기화
        this->x = x;
        this->y = y;
        this->z = z;
    }
    
    friend color operator+(color one,color two);

    friend bool operator==(color one, color two);

    void show(){
        cout << x<<" "<<y<< " " << z<<"\n";
    }

};
color operator+(color one, color two){
        color tmp;
        tmp.x = one.x + two.x;
        tmp.y = one.y + two.y;
        tmp.z = one.z + two.z;

        return tmp;
    }

bool operator==(color one, color two){
    if(one.x == two.x && one.y == two.y && one.z == two.z){
        return 1;
    }
    else{return 0;}
}

int main(){
    color red(255,0,0), blue(0,0,255),c;
    c= red + blue;
    c.show(); //색 값 출력
    
    color fuchsia(255,0,255);
    if(c == fuchsia){
        cout <<"보라색 맞음";
    }
    else{
        cout << "보라색 아님";
    }
}