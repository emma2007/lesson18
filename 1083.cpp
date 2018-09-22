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

int daoshu(int n){
    int t = 0;
    int x = n;

    while(x != 0){
        t = t * 10 + x % 10;
        x = x / 10;
    }

    return t;
}

int main(){
	int n,i = 1,c = 0;;
	cin>>n;
	
	while(i != 0){
		if(huiwen(n) == true){
			cout<<0<<endl;
			break;
		}else{
			n = n + daoshu(n);
			c++;
			if(huiwen(n) == true){
				cout<<c<<endl;
				break;
			}
		}
	}
}
