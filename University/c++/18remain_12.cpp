#include<iostream>
#include<string>
using namespace std;

class Book{
private:
    string str;
    int price;
    char *publishedData; //출판일 09022018 2018년 9월 2일
public:
    Book(char *title, int price, char *pData);
    Book();
    void set(char * title, int price, char *pData);  //책 정보를 설정
    void show(); // 책이름, 가격, 출판년도 출력
};

int replaceBookTitle(Book *books, int nbks, char *oldtitle, char *newtitle){
    //교체할 이름을 가진 책을 찾으면 이름을 교체하고, 인덱스 반환, 없으면 -1반환



}

Book::Book(){
    str = " ";
    price =0;
    publishedData = nullptr;
}

Book::Book(char *title, int price, char *pData){
    for(int i =0; i< sizeof(title)/sizeof(char); i++){
        str[i] = title[i];
    }
    cout <<str<<endl;
    this->price = price;
    publishedData = pData;
}

void Book::set(char *title, int price, char *pData){
    str = str(title);
    this->price = price;
    publishedData = pData;
}

void Book::show(){
    string year,month,day;
    int iyear,imonth,iday;

    for(int i =4; i <8; i++){
        year[i-4] += publishedData[i];
    }
   
    month[0] = publishedData[0];
    month[1] = publishedData[1];

    day[0]= publishedData[2];
    day[1] =publishedData[2];

    iyear = stoi(year);
    imonth = stoi(month);
    iday = stoi(day);

    cout << "책이름 : " << str<<endl;
    cout << "가격 : " << price<<endl;
    cout << "출판년도 : " << year<<"년 " << month << "월" << day << "일" <<endl;
}


int main(){
    Book bookShelf[3] = { Book("C#프로그래밍",20000,"09012016"),
                          Book("c++",25000,"09022018"),
                          Book()
                          };
    bookShelf[2].set("java programming", 28000, "12052017");

    bookShelf[0].show();
    bookShelf[1].show();

    if(int n = replaceBookTitle(bookShelf,3,"c++","C++")<0){

    }
    else{
        bookShelf[n].show();
    }
}