#include<bits/stdc++.h>
using namespace std;
 
// method 1
// void pattern20(int n){
//     for(int i=1;i<=n;i++){
//         if(i==1 || i==n){
//             for(int j=1;j<=n;j++){
//                 cout << "*";
//             }
//         }
//         else{
//             for(int j=1;j<=n;j++){
//                 if(j==1 || j==n){
//                     cout << "*";
//                 }
//                 else{
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

//method 2 - same logic as above method, just combined them and optimized it
void pattern20(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == 1 || j==1 || i == n || j==n)
                cout << "*";
            else    
                cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern20(n);
}