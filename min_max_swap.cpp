#include<iostream>
#include<algorithm>
using namespace std;
#include<utility>
// void my_swap(int *a, int *b){
// int tmp = *a;
// *a = *b;
// *b = tmp;
// }
int main(){
int a, b;
cin >> a >>b;
// my_swap(&a, &b);
swap(a, b);

cout << a << " " << b << endl;

// int a, b, c, d;
// cin >> a >>b >>c >> d;
// if (a < b)
// {
//    cout <<a;

// }
// else 
// cout << b;
// int c = min(a, b);
// int d = max(a, b);
// cout << c << " " << d << endl;\

// int mn = min({a, b, c, d});
// int mx = max({a, b, c, d});
// cout <<mn << " " << mx <<endl;

return 0;
}