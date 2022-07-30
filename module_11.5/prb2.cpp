#include<bits/stdc++.h>
using namespace std;



int  main(){

    int T;
    scanf("%d", &T);
    for(int l = 0; l < T; l++){
        string str;
        getline(cin, str);

        int N;
        int q;
        scanf("%d %d", &N, &q);
        int arr[N];
        for(int i = 0; i <N; i++){
            scanf("%d", &arr[i]);
        }
        printf("Case %d:\n", l+1);

        int pre[N] = {arr[0]};
        for(int i = 1; i < N; i++){
            pre[i] = pre[i-1] + arr[i];
        }
        for(int i = 0; i <q; i++){
            int j, k;
            scanf("%d %d", &j, &k);
            int mx = INT_MAX;
            if(j==k){
                mx = arr[j-1];
            }else if(k-j == 1){
                mx = min((pre[j-1] - pre[j-2]), (pre[k-1]- pre[k-2]));
            }
            else{
                for(int p = j-1; p <k; p++){
                    mx = min(arr[p], mx);
                }
            }
            printf("%d\n", mx);
        }
    }



    return 0;
}
