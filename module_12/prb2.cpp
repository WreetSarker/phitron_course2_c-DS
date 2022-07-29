#include<bits/stdc++.h>
using namespace std;


int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        for(int i = 0; i <q; i++){
            int j, k;
            scanf("%d %d", &j, &k);
            int mx = INT_MAX;
            if(j==k){
                mx = arr[j-1];
            }else{
                for(int p = j-1; p <k; p++){

                    if(arr[p]<mx){
                        mx = arr[p];
                    }
                }
            }
            printf("%d\n", mx);
        }
    }



    return 0;
}
