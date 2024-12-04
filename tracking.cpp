#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int T;
 int N;
   
cin>>T;
    for(T=0;T<5;T++){
        cin>>N;
        int arr[N];
         int count1=0;
         int count2=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int j=0;j<N;j++){
            if(arr[j]%2==0){
                count1++;
            }
            if(arr[j]%2!=0){
                count2++;
            }
            
        }
        if(count2<count1){
            cout<<"Yes"<<endl;
        }
         if(count1<count2){
            cout<<"No"<<endl;
        }
        if(count1==count2){
            cout<<"No"<<endl;
        }
        
        
    }
    
    return 0;
}
