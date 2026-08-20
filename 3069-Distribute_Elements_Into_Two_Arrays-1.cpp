#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int nums[n];

    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the element "<<i+1 <<" : ";
        cin>>nums[i];
    }

    int arr1[n],arr2[n],i=0,j=0;
    arr1[i] = nums[0];
    arr2[j] = nums[1];

    for(int m = 2 ; m<n ; m++){
        if(arr1[i]>arr2[j]){
            i++;
            arr1[i] = nums[m];
        }

        else if(arr2[j]>arr1[i]){
            j++;
            arr2[j] = nums[m];
        }
    }

    int fin[n],k=0;
    for(int u = 0 ; u<=i ; u++){
        fin[k] = arr1[u];
        k++;
    }
    for(int v = 0 ; v<=j ; v++){
        fin[k] = arr2[v];
        k++;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<fin[i]<<" ";
    }
    return 0;
}

    