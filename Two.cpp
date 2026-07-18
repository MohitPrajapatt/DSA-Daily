#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int row = 1;
    while(row<=n){
        int col = row;
        char value = 'A';
        while(col<=n){
            cout<<value;
            col = col+1;
            value = value+1;
            
        }
        cout<<endl;
        row = row +1;
    }
}
