#include<bits/stdc++.h>
using namespace std;

int n,left_arr[105],right_arr[105];
int st[105],ed[105],cnt,ct2;

int change(int x){
	while(right_arr[x]) x=right_arr[x];
	return x;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
        cin>>left_arr[i]>>right_arr[i];
	}
	for(int i=1;i<=n;i++) {
		if(left_arr[i]==0){
			st[++cnt]=i;
			ed[cnt]=change(i);
		}
	}
	for(int i=1;i<cnt;i++) {
		right_arr[ed[i]]=st[i+1];
		left_arr[st[i+1]]=ed[i];
	}
	for(int i=1;i<=n;i++){
        cout<<left_arr[i]<<" "<<right_arr[i]<<endl;
	}
}
