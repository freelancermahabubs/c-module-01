#include<iostream>
#include<stdio.h>
int main(){
    // std::cout<<"Running";
    int a =10;
    long long int b = 100000000;
    float c =1.5;
    double d = 1.05666;
    char cc = 'A';
    std::cout << a;
    printf("My Favaourite number is %d", a);
    std::cout << "MY favourite number is " <<a;
    std::cout<<"My "<<a <<" favaourite number is ";

    std::cout<<a <<" "<<b;
    std::cout <<a <<"\n" <<b <<"\n";

        std::cout <<a << std:: endl
     << b << std:: endl;
    return 0;
}