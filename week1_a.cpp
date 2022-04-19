#include<iostream>
using namespace std;

int linSearch(int a[], int n, int key){
    int i;
    for(int i=0;i<n;i++)
        if(a[i]==key)
            return i+1;
    
    return -1;
}

int main(){
    int a[100];
    int t;
    cin>>t;
    
    while(t-->0){
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int key;
        cin>>key;
        int result= linSearch(a,n,key);

        if(result!=-1){
            cout<<"Present "<<result<<endl;
        }
        else{
            cout<<"Not Present "<<endl;
        }
    }
    return 0;
}