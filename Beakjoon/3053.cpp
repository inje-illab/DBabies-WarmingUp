#include<iostream>
#include<cstdio>
using namespace std;

int main(){cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int radius;
    double pi = 3.14159265358979;

    cin >> radius;

    printf("%0.6f\n%0.6f",radius * radius * pi, (double)2*radius * radius);
}