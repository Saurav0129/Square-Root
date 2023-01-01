#include<iostream>
using namespace std;
int SquareRoot(int n){
    int s,e;
    s=0;
    e=n;
    long long int m=(s+e)/2;
    
    int ans ;
    while(s<=e){
        
       long long int square =m*m;
        if (square ==n){
            return m;
            }
        else if(square<n){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=(s+e)/2;
    }

    return ans;
    }


double ExactRoot(int n , int k , int r ){
    double factor = 1;
    double ans = r;

    for(int i=0; i<k; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
    
}

    

int main ()
{ int n ;
 cout<<"Enter a number: " ;
cin>>n;
int ans =SquareRoot(n);
cout<<ExactRoot(n,3,ans);

return 0;
}
