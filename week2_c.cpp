#include<iostream>
using namespace std;
#define max 100

void linearSearch(int arr[], int low, int high,int c,int key);

void JumpingSearch(int arr[], int n,int key){
    int l=1,i=0;
    while(i<n)
    {
        if(arr[i]==key)
        {
            cout<<"Present "<<l<<endl;
            break;
        }
        else if(arr[i]>key)
        {
            linearSearch(arr,(i*0.2),i,l,key);
        }
        if(i==0)
        i = i +2;
        else
        i = i*2;
        if(i>=n)
        {
            i = i*0.2;


            linearSearch(arr,i,n,l,key);
            break;
        }
        l++;
    }
}
void linearSearch(int arr[], int low, int high,int c,int key)
{
    int l=0,k=0;
    for(int i=low;i<=high;i++)
    {
        l++;
        if(arr[i]==key)
        {
            k++;
            cout<<"Present "<<l+c<<endl;
            break;
        }
    }
        if(k==0)
        cout<<"Not present "<<l+c<<endl;
}
int main(){
    int arr[max],t,n,key;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        JumpingSearch(arr,n,key);
    }
    return 0;
}