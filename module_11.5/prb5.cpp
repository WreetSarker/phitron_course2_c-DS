#include<bits/stdc++.h>
using namespace std;


int  main(){

    int T;
    cin>>T;
    for(int o = 0; o <T; o++){
        int n, q;
        cin>>n>>q;

        int arr[n];
        for(int i =0; i < n; i++){
            cin>>arr[i];
        }
        printf("Case %d:\n", o+1);
        int pre[n] = {arr[0]};
        for(int i = 1; i <n; i++){
            pre[i] = pre[i-1] + arr[i];
        }

        for(int i = 0; i < q; i++){
            int a, b, c;
            cin>>a;
            if(a == 1){
                cin>>b;
                cout<<arr[b]<<endl;
                arr[b] = 0;
                for(int i = b; i <n; i++){
                    pre[i] = pre[i-1] + arr[i];
            }
            }else if(a == 2){
                cin>>b>>c;
                arr[b]+=c;
                for(int i = b; i <n; i++){
                    pre[i] = pre[i-1] + arr[i];
            }
            }else if(a == 3){
                cin>>b>>c;
                if(b == 0){
                   cout<<pre[c]<<endl;
                }else{
                    cout<<pre[c]-pre[b-1]<<endl;
                }

            }
        }

    }



    return 0;
}
