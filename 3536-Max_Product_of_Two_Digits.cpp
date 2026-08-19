//You are given a positive integer n. Return the maximum product of any two digits in n. Note: You may use the same digit twice if it appears more than once in n.

#include<iostream>
using namespace std;

int main(){
        int arr[10],rem,max = 0,pro,i=0,n;

        cout<<"Enter the number: ";
        cin>>n;

        //Creating array for better understanding out of the number.
        while(n!=0){
            rem = n%10;
            n = n/10;
            arr[i] = rem;
            i++;
        }
        //Value Extraction and Multiplication.
        for(int u = 0 ; u<i ; u++){
            for(int v = u+1 ; v<i ; v++){
                pro = arr[u]*arr[v];
                if(pro>=max){
                    max = pro;
                }
            }
        }
        cout<<"Maximum product: "<<max;
        return 0;
    }
