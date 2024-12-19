#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
int d,k,l,m,n;
cin>>d>>k>>l>>m>>n;

set<int>occupied;

for(int i=k;i<=d;i+=k){
occupied.insert(i);
}

for(int i=l;i<=d;i+=l){
occupied.insert(i);
}

for(int i=m;i<=d;i+=m){
occupied.insert(i);
}

for(int i=n;i<=d;i+=n){
occupied.insert(i);
}

cout<<occupied.size()<<endl;
}

return 0;
}