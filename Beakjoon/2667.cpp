#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
 
string arr[26];
bool check[26][26] ={false,};
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
vector<int> cnt_house;
queue<pair<int, int> > q;

void bfs(int x,int y){
    int cnt =1;
    q.push(make_pair(x,y));
    check[x][y] = true;

    while(!q.empty()){
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        check[xx][yy] = true;

        for(int i = 0; i < 4; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];

            if(nx>= 0 && ny>=0 && check[nx][ny] == false && arr[nx][ny] == '1'){
                q.push(make_pair(nx,ny));
                check[nx][ny] = true;
                cnt++;
            }
        }
    }

    cnt_house.push_back(cnt);
}

int main(){ cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int num,cnt=0;
    cin >> num;

    for(int i = 0; i <num; i++){ //입력
        cin >> arr[i];
    }

    for(int i = 0; i <num; i++){ //계산
        for(int j = 0; j < num; j++){
            if(arr[i][j] =='1'&& check[i][j] == false){
                bfs(i,j);
                cnt++;
            }
        }
    }
    sort(cnt_house.begin(),cnt_house.end());
    cout<<cnt<<"\n";
    for(int i=0; i < cnt_house.size(); i++){
        cout<<cnt_house[i] <<"\n";
    }
}