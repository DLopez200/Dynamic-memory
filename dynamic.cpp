#include <iostream>
using namespace std;


int main(){

    //new int; //"new" can be used to request memory//
    int* ptr = new int; //ptr is on the stack that points to int on heap
    *ptr = 100;


    cout << ptr << endl;
    cout << *ptr << endl;
    



    
    return 0;
}