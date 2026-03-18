#include<bits/stdc++.h>
using namespace std;

vector<int>funtion(int n){
    vector<int>p;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            p.push_back(i);
            while(n%i==0)n/=i;
        }
    }
    if(n>1)p.push_back(n);
    return p;
}