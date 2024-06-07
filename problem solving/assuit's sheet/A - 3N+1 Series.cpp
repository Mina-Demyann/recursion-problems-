#include <iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#include "vector"
#include "algorithm"
 
#include "numeric"
#include "limits"
#include "set"
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define S second
#define F first
#define MP make_pair
#define el "\n"
#define PI 3.14159265
using namespace std;
ll M=1e9+7;
const int sz=1e5+10;
const int OO=0x3f3f3f3f;
#define all(my) my.begin(), my.end()
#define rall(my) my.rbegin(), my.rend()
ll mul(ll a,ll b,ll m)
{
    return ((a%m)*(b%m))%m;
}
int binaryExponentiation(int x,int n)
{
    int result=1;
    while(n>0)
    {
        if(n%2==1){result=result*x;}
        x=x*x;
        n=n/2;
    }
    return result;
}// كل الاعداد الاوليه ماعدا الاتنين
// 3 5 7 9 11 13 15 =*******=| 3 2 3  2 3 2   2 2 5
ll modularExponentiation(ll x,ll n,ll m)
{
    ll result=1;
    while(n>0)
    {
        if(n%2==1){
            result=mul(result,x,m);
        }
        x=mul(x,x,m);
        n=n/2;
    }
    return result;
}
// Erase–remove idiom
// Removes all odd numbers.
//v.erase(std::remove_if(v.begin(), v.end(), [](int val) { return val & 1; }),v.end());
//std::iota(cm.rbegin(), cm.rend(), 1);
// ========================================
// std::vector<int> nums = {1, 2, 3, 4};      =
//std::vector<int> sum = prefix_sum(nums);    =
//=============================================
//    vector<unsigned long long >v(n) ;
//    iota(v.begin(),v.end(),1) ;
//    std::sort(v.begin(), v.end(), customCompare);
//
bool valid(int mid , int n, int k )
{
    int sum = 0 ;
    for (int i = 0 ;(mid/binaryExponentiation(k, i)) > 0  ; ++i ) {
        sum += (mid/binaryExponentiation(k, i)) ;
    }
    return sum >= n ;
}
int binarySearch(int n , int k )
{
    int l = 0 , r = 1e9 , rs = 0 ;
    while (l<= r )
    {
        int mid = (l+r)/2 ;
        if (valid(mid,n,k))
        {
            r = mid - 1 ;
            rs = mid ;
        }
        else
        {
            l = mid + 1 ;
        }
    }
    return rs;
}
char cheak(ull n ){
    ull rs {} , tmp = n ;
    for (int i=1;i*i<=n;i++)
    {
        if (n%i==0) {
            rs += i;
            if (tmp < rs) {
                return '<';
            }
            if (i*i!=n and i != 1)
            {
                rs += n/i ;
            }
 
        }
 
 
            if (tmp < rs ) {
                return '<' ;
            }
 
        }
     if (tmp == rs) {
        return '=';
    }
        return '>' ;
    }
 
 
void solve() {
    ull n ; cin >> n ;
    if(cheak(n) == '<')
    {
        cout << "abundant" << el ;
    }
    else if(cheak(n) == '>'){
        cout << "deficient"  << el ;
    }else {
        cout << "perfect" << el ;
    }
}
/*
 *****   5 4 3 2 1 0 // printing in the first
 ****
 ***
 **
 *
 
 */// 3n + 1 if it is odd and N/2 if it is even
 
int recursive(int num )
{
    if (num == 1)
        return 1;
    if ((num & 1) == 0)
        return 1 + recursive(num/2) ;
    else
        return 1 + recursive(num*3 + 1) ;
 
}
 
 
int main() {
    int in{1} ;
    //cin >> in ;
    while(in--){ int num; cin >> num ;
   cout <<  recursive(num);
    }
 
    return 0;
}
