//cpp program for merge sort
//Author:neetu kumari
//date modified:18-10-2021

#include <iostream>
using namespace std;

void merge(int arr[],int a,int mid, int b){
    
    int n1=mid-a+1;
    int n2=b-mid;
    
    int a1[n1];
    int a2[n2];
    
    for(int i=0;i<n1;i++){
        a1[i]=arr[a+i];
    }
    for(int j=0;j<n2;j++){
        a2[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=a;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            arr[k]=a1[i];
            i++;
        }else{
            arr[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a1[i];
            k++; i++;
    }
    while(j<n2){
        arr[k]=a2[j];
            k++; j++;
    }
}

void mergeSort(int arr[], int a, int b){
    if(a>=b)
    	return;
	int mid=(a+b)/2;
    mergeSort(arr,a,mid);
    mergeSort(arr,mid+1,b);
    merge(arr,a,mid,b);
}

int main()
{
    int arr[]={6,5,4,3,2,1};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
