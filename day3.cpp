// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << endl;

//     int count = 1;

//     while(count <= n){
//         cout << count << endl;
//         count++;
//     }

//     cout << endl;
//     return 0;

// }

// camel case




// for loop  for(initialization; condition ; updastion)

#include<iostream>
using namespace std;

// int main()
// {


//     int n;

//     for(int i=0; i<=10; i=i+2){
//         cout << i << " ";
//     }
//     cout << endl;
    
//     return 0;
// } 


// int main(){

//     int n , sum = 0;
//     cout << "Enter the n value : ";
//     cin >> n;

//     for( int i=0; i<=n; i++){
//         sum += i;
//         if(i == 10){
//             break;
//         }
//     }
//     cout << "The sum of "<< n<<" numbers is: "<< sum << endl;

//     return 0;
// }


int main(){
    int n ;
    cout << "Enter the n value: ";
    cin >> n;
    int sum =0;

    for(int i =1; i<=n; i++){
        if( i%2 != 0){
            sum += i;
            cout << i << " ";
        }
        cout << endl;
    }
    
    cout << "sum= " << sum << endl;
    return 0;
}