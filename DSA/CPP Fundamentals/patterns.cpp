#include<iostream>
using namespace std;
int main(){
   
    // for (int i = 1; i<=4;i++){
    // for(int j=1; j<= 4;j++ ){
    //     cout<<i<<"  ";
    // }
    // cout<<endl;  
    
    // }

    // Star Pattern
    // int n ;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //   for(int j = 1; j<= i ; j++){
    //      cout<<"*"<<" ";
    //   }
    //   cout<<endl;
    // }  

    // Inverted Star Pattern

    //    int n ;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j = 1; j<=(n-i+1);j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // Half Pryamind Pattern
    // int n ;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for(int i = 1 ; i<= n ; i++){
    //    for(int j = 1 ; j<= i ; j++){
    //     cout<<j<<" ";

    //    } 
    //    cout<<endl;
    // }          
    
    //pryamid character pattern
    // char alpha = 'A';
    // int n ;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<= i; j++){
    //         cout<<alpha<<" ";
    //         alpha++;
    //     }
    //     cout<<endl; 
    // }

    // Hollow Rectangle Pattern 
    // int n;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //     cout<<"*";
    //     for(int j = 1 ; j<= n-1 ; j++){
    //         if( i == 1 || i == n){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }

    //     cout<<"*"<<" "<<endl;
    // }
 
    //Inverted and Rotated Half Pyramid
   
    // int n;
    // cout<<"enter the value of n : ";
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1 ; j<= n-i ;j++){
    //      cout<<" "; 
           
    //     }
    //     for(int j = 1; j<= i ; j++){
    //     cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Floyd's Triangle;
    // int n;
    // cout<<"enter your number : ";
    // cin>>n;
    // int num = 1;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1 ; j<=i ; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    
    
    //Diamond Pattern
    int n; 
    cout<<"enter the value of n : ";
    cin>>n;
    
    // for(int i = 1; i<=n; i++){
    //   for(int j = 1; j<= n-i ; j++){
    //     cout<<" ";
    //   }  
    //   for(int x = 1; x<= (2*i - 1); x++ ){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }
    
    // for(int i = n; i>=1; i--){
    //    for(int j = 1; j<= n-i ; j++){
    //     cout<<" ";
    //     }
    //     for(int j = 1 ; j <= (2*i - 1); j++){
    //     cout<<"*";
    //     } 
    //     cout<<endl;
    // }

    // Butterfly Pattern
    
    // for(int i = 1;i<= n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<"*";
    //     }
    //      for(int j = 1 ; j<= (2*(n-i)); j++ ){
    //         cout<<" ";
    //     }
    //     for(int x = 1; x<=i;x++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
      
    // for(int i = n; i>= 1;i--){
    //    for(int j = 1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int j = 1 ; j<= 2*(n-i); j++ ){
    //         cout<<" ";
    //     }
    //     for(int x = 1; x<=i;x++){
    //         cout<<"*";
    //     }
    //     cout<<endl;  
        
    // }

    // Assignement Questions

    // Question 1
    
    // bool num = 1;
    // for(int i = 1 ; i<= n ; i++){
    //     for(int j = 1 ; j<= i ; j++){
    //         cout<<num;
    //         num = !num;
    //     }
        
    //     cout<<endl;
        
    // }

    // Question 2
    // for(int i = 1; i<=n;i++){
    //   for(int j = 1; j<= n-i ; j++){
    //     cout<<" ";
    //   }  
    //   for(int x = 1; x<= n; x++){
    //     cout<<"*";
    //   }
    //   cout<<endl;
    // }

    // Question 3 
    
    for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) {
        cout << " ";
        }
        //nums backward
        for(int j=i; j>=1; j--) {
        cout << j;
        }
        //nums forward
        for(int j=2; j<=i; j++) {
        cout << j;
        }
        cout << endl;
    }

    return 0;
}