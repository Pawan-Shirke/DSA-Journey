#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,rev=0;
    cout<<"Enter a number to reverse: ";
    cin>>n;

    while(n!=0){
        int rem = n%10;
        n = n/10;
            //Check whether rev greater than 64 bits
            if(rev>INT_MAX/10 || (rev == INT_MAX/10 && rem > 7)){
                return 0;
            }
            if(rev<INT_MIN/10 || (rev == INT_MIN/10 && rem < -8)){
                return 0;
   
        rev = rev*10+rem;
    }
    cout<<"Your Number is reversed: "<<rev;
    return 0;
}