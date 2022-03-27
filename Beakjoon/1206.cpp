#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
#define MAX 1001

vector<int> node[MAX];
bool check[MAX];

void reset(){
    for(int  i=0; i < MAX; i++){
        check[i] = false;
    }
}

void DFS(int num){
    check[num] = true;
    cout << num<< " ";

    for(int i =0; i < node[num].size(); i++){
        int y = node[num][i];

        if(!check[y]){
            DFS(y);
        }
    }
}

void BFS(int num){
    queue<int> q;
    q.push(num);
    check[num] = true;

    while(!q.empty()){
        int q_front = q.front();
        q.pop();
        cout << q_front << " ";

        for(int i =0 ; i  < node[q_front].size(); i++){
            int y = node[q_front][i];
            if(!check[y]){
                q.push(y);
                check[y] = true;
            }
        }

    }
}

int main(){cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int a,b,c;

    cin >>a>>b>>c;

    while(b--){
        int num1,num2;
        cin >> num1>>num2;

        node[num1].push_back(num2);
        node[num2].push_back(num1);
        sort(node[num1].begin(),node[num1].end());
        sort(node[num2].begin(),node[num2].end());

    }

    reset();
    DFS(c);
    cout<<"\n";

    reset();
    BFS(c);
}