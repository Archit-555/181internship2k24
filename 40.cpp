#include<iostream>
using namespace std;
void bubble_sort()
{
    int arr[5],temp,n=10;
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<=i;j++){
                if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    bubble_sort();
    return 0;
}
