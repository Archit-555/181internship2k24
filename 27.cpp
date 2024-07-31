#include<iostream>
using namespace std;
int main(){
    int a[5]={};
    int elements;
    int value=5;
    int count=0;
    cout<<"enter the elements of array:"<<endl;
    cin>>elements;
    //pick the first element of the pairs
    for(int i=0;i<5;i++){
    //pick the second element of the pair along with a[i]
    for(int j =i+1;j<5;j++)
    {
    if(a[i]+a[j]==value)
    {
    count =  count+1;
    }
    }
    }
    cout<<"The count of pairs : "<<value<<" is "<<count<<endl;
    return 0;
    }
