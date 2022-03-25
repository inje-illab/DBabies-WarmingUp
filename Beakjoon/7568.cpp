#include<iostream>
#include<utility>
using namespace std;

int main(){cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int num,rank=1;
    cin >> num; 
    pair<int, int> arr[50];

    for(int i =0; i < num; i++){ //값 입력
        cin >> arr[i].first>>arr[i].second;
    }

    for(int i =0; i < num; i++){
        for(int j =0; j < num; j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second){
                rank++;
            }
        }
        cout<<rank<<" ";
        rank =1;
    }   
}