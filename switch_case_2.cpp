#include<iostream>
using namespace std;
int main(){
    int x =10;
cin >> x;
switch (x%2)
{
case 0:
   cout << "Even";
    break;
case 1:
cout << "Odd";
break;
default:

    break;
}

    return 0;
}