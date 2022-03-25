#include<iostream>
#include<vector>
using namespace std;
//https://www.acmicpc.net/problem/2606

bool visit[101]={0,};
vector<int> node[101];
int cnt =0;
 
void DFS(int a){
    visit[a] = true;

    for(int i =0; i < node[a].size(); i++){
        int y = node[a][i];
        
        if(!visit[y]){
            DFS(y);
            cnt++;
        }
    }
}

int main(){ cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int num=0,num2=0,a,b; 
    cin >> num>>num2;

    while(num2--){
        cin >>a>>b;
        node[a].push_back(b);
        node[b].push_back(a); //양방향 연결
    }
    
    DFS(1); //1번 컴퓨터만 검사하면 되니까 1대입

    cout<< cnt;
}