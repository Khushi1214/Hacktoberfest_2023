#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
   
    while(s<=e){
         int element=arr[mid];
        if(target==element)
        {
            return mid;
        }
        else if(target<element)
        {
            e=mid-1;
        }
        else if(target>element)
        {
            s=mid+1;
        }
        
        
        mid=s+(e-s)/2;
    }
    return -1;

}
int main()
{
    int arr[]={2,4,6,8,10,16,22,32,84,98};
    int size=10;
    int target=10;
    int indexoftarget= binarySearch(arr,size,target);
    if(indexoftarget==-1)
    {
        cout<<"target not found";
    }
    else{
        cout<<"target is at index"<<" "<<indexoftarget;
    }
    return 0;
    

}
