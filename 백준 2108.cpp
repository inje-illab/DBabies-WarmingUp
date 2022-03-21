#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    vector<double> vec;
    bool check = false;
    int arr[8001]={0};
    int num,tmp=0,max=0,sum=0;
    cin >> num;

    int a;
    for(int i =0; i <num; i++){
        cin >> a;
        arr[a+4000]++;
        vec.push_back(a);
        sum +=a;
    }

    for(int i =0; i < 8001;i++){
        if(arr[i] != 0){
            if(max < arr[i]){
                tmp = i; //숫자
                max = arr[i]; //최대개수
            }
        }
    }

    for(int i = tmp+1; i<8001; i++){
        if(arr[i] == max){
            tmp = i;
            break;
        }
    }

    sort(vec.begin(),vec.end());
    sum = round(sum/(double)num);

    cout << sum<< "\n" << vec[(num-1)/2] << "\n" <<  tmp-4000 << "\n"
     << vec[num-1]-vec[0] << "\n";
}