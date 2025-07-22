#include<bits/stdc++.h>
using namespace std ;


int fibo(int n)
{

    if (n<=1)
        return n ;
    return fibo(n-1)+ fibo (n-2);

}
void printfibo(int n , int i =0)
{
    if (i < n){
        cout << fibo(i)<< " ";
        printfibo (n, i+1);
    }
}
int main()
{
    int n ;
    cin >> n ;
    printfibo(n);
    cout << endl ;
    return 0 ;

}
