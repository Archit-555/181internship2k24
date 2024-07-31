#include<iostream>
using namespace std;
void selectionsort(int arr[],int len){
for (int i=0;i<len-1;i++){
    int min_index=i;
    for (int j=i+1;j<len;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }
    swap(arr[i],arr[min_index]);
}
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<endl;
}
}
int main(){
    int arr[6]={44,5,67,12,89,45};
    selectionsort(arr,6);
    return 0;
}

