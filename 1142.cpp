#include <bits/stdc++.h>
using namespace std;

bool huiwen(int n){
    bool r;
    int t = 0;
    int x = n;

    while(x != 0){
        t = t * 10 + x % 10;
        x = x / 10;
    }
    
    if(t == n){
        r = true;
    }else{
        r = false;
    }

    return r;
}

bool sushu(int n){
    bool r = true;
    int i;

    for(i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            r = false;
        }
    }

    if(n <= 1){
        r = false;
    }

    return r;
}

int main(){
    int i;
    
    for(i = 10;i <= 1000;i++){
        if(huiwen(i) == true && sushu(i) == true
		){
        	cout<<i<<endl;
        }
    }

    return 0;
}
