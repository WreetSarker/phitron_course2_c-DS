#include<bits/stdc++.h>
using namespace std;



int  main(){
    int T;
    cin>>T;
    int arr[105];
    int n = 0;
    for(int l = 0; l <T; l++){
        int minn = 100;
        int k = 0;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>arr[i];
            if(arr[i]<minn)
            {
                minn = arr[i];
            }
        }

        for(int i = 0;i<n;i++)
            {
                if(arr[i]==minn)
                {
                 k++;
                }
            }
            cout<<n-k<<endl;


    }




    return 0;
}
