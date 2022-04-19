#include<iostream>
#include<algorithm>
using namespace std;

int getDiff(int a[], int n, int key){

    int c=0;
    sort(a,a+n);

    int l=0;
    int r=0;
    
    while(r<n){
        if(a[r]-a[l]==key){
            c++;
            l++;
            r++;
        }
        else if(a[r]-a[l]>key)
            l++;
        else    
            r++;
    }
    return c;
}
int main(){
    int a[100];
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        int key;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>key;
        cout<<" "<<getDiff(a,n,key);

    }
    return 0;
}