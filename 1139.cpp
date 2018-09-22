#include <bits/stdc++.h>
using namespace std;

bool sushu(int n){
    bool r = true;
    int i;

    for(i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            r = false;
        }
    }
    
    return r;
}

int main(){
	int n,i;
	cin>>n;
	
	for(i = 2;i <= n;i++){
		if(sushu(i) == true && sushu(i+2) == true && i+2 <= n){
			cout<<i<<" "<<i+2<<endl;
		}
	}
	
	return 0;
}
