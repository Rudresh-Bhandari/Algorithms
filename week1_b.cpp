#include<iostream>
using namespace std;

int binSearch(int a[], int s, int e, int key){
    if(s>e){
        return -1;
    }
    
    int mid =(s+e)/2;

    if(key==a[mid])
        return mid;

    else if(key<a[mid]){
        return binSearch(a,s,mid-1,key);
    }
    else{
        return binSearch(a,mid+1,e,key);
    }
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
        int result= binSearch(a,0,n-1,key);

        if(result!=-1){
            cout<<"Present "<<result<<endl;
        }
        else{
            cout<<"Not Present "<<endl;
        }
    }
    return 0;
}