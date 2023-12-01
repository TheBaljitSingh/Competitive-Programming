// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int n = 14;
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0 ){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
            
            
        }
    }
    if(cnt==2?cout<<"prime":cout<<"Not prime");

    return 0;
}