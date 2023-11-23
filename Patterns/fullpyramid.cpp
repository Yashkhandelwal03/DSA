// #include <iostream>

// using namespace std;

// int main(){
//     for(int i=0;i<5;i++){
//         int a = i+1;
//         int b = 0; 
//         for(int j=0;j<4-i;j++){
//             cout << " " ;
//             b++;
//         }
//         int t = a-1;
//         for(int k=0;k<5-b;k++){
//             cout << ++t ;
//         }
//         while(t>a){
//             cout << --t ;
//         }
//         cout << " " << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n=5;
//   for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//       cout<<" ";
//     }
//     int j;
//     for(j=i;j<i+i-1;j++){
//       cout<<j;
//     }
//     for( ; j>=i;j--){
//       cout<<j;
//     }
//     cout<<endl;
//   }
//   return 0;
// }




#include <iostream>
using namespace std;

int main() {
  int n=5;
  for(int i=1;i<=n;i++){
    for(int k=1;k<=2*(n-i);k++){
      cout<<" ";
    }
    int j;
    for(j=i;j<i+i-1;j++){
      cout<<j<<" ";
    }
    for( ; j>=i;j--){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}