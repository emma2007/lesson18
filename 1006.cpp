#include <bits/stdc++.h>
using namespace std;

void printSpace(int i) {
for(int j = 1;j <= i;j++){
			cout<<" ";
		}
}

void printStar(int i) {
for(int j = 1;j <= i;j++){
			cout<<"*";
		}
}

int main(){
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++){
		printSpace(n-i);
		int starIdx=2*i-1;
		printStar(starIdx);
		for(int j=0;j<2;j++) {
			printSpace((n-i) *2);
			printStar(starIdx);
		}
		cout<<endl;
	}
}
