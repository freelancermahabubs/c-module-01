#include<iostream>
using namespace std;
int main(){
    int x =10;
//    if (x ==1)
//    {
//     cout << "ONE";
//    }
//    else if (x ==2)
//    {
//     cout << "TWO";
//    }
//    else if (x ==3){
//     cout << "THREE";
//    }
//    else if (x ==4){
//     cout << "FOUR";
//    }
//    else 
//    cout << "FIVE";
switch(x){
    case 1:
     cout << "ONE"<< endl;
     break;
     case 2:
     cout << "TWO"<< endl;
     break;
     case 3:
     cout << "THREE"<< endl;
     break;
     case 4:
     cout << "FOUR"<< endl;
     break;
     case 5:
     cout << "FOUR"<< endl;
     break;
     default:
     cout << "UNKNOWN"<< endl;
}
    return 0;
}