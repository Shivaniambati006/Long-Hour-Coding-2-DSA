#include<bits/stdc++.h>
using namespace std;

void compareTriplets(int a[], int b[])
{
    int alice = 0;
    int bob = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i]){
            alice++;
        }
        else if(a[i] < b[i]){
            bob++;
        }
    }
    cout << alice << bob;

}

int main(){
    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int b[3];
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }
    compareTriplets(a, b);
    return 0;

}
