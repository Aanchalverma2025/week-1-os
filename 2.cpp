// Write a C program that takes a string input from the user and reverses the string. 

#include<iostream>
using namespace std;

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    // Reverse the string
    int l=0;
    int r = input.length()-1;

    while(l<r){
        swap(input[l], input[r]);
        l++;
        r--;
    }

    cout<<"reversed string"<<s<<endl;
}
