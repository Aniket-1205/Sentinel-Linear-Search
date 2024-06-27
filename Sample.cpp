#include<iostream>
using namespace std;
void search(int arr[],int len,int key){
    int i=0;
    int last=arr[len-1];
    arr[len-1]=key;
    while(arr[i]!=key){
        i++;
    }
    arr[len-1]=last;
    if(i<len-1){
        cout<<"Elements found at position "<<i+1<<endl;
    }
    else{
        cout<<"Elements not found"<<endl;
    }
}
int main(){
    int arr[]={1,3,5,6,7,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the elements you wants to search"<<endl;
    cin>>key;
    search(arr,len,key);
    return 0;
}