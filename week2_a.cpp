#include<iostream>
using namespace std;

void check(int a[], int n, int key){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            c++;
        }
    }
    cout<<key<<"-"<<c<<endl;
}
int main(){
    int a[100];
    int t;
    cin>>t;

    while(t-->0){
        int n;
        int key;

        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cin>>key;
       check(a,n,key);


    }
    return 0;
}