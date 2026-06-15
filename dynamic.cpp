#include <iostream>
using namespace std;


int main(){

    //new int; //"new" can be used to request memory//
    int* ptr = new int; //ptr is on the stack that points to int on heap
    *ptr = 100;


    cout << ptr << endl;
    cout << *ptr << endl;
    

    /*while(true) {
        int* a = new int; //causes a forever loop that keeps asking for memory
                        //leading to memory leak and eventually crahs
    }*/

    delete ptr; // if new is used end with delete to return the memory to computer

    
    return 0;
}