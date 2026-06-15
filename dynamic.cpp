#include <iostream>
using namespace std;

class number{
    private:
    int* x;

    public:
    number(int num){
        x = new int;
        *x = num;
    }

    ~number(){
        cout << "DESTROYED" <<endl;
        delete x;
    }

    void print(){
        cout << *x << endl;
    }

};

int main(){
    {
    number n = number(123);
    n.print();
    }//bracket just create a local loop allowing the number to be destroyed once 
     //it not needed rather than when the program ends
    
    
    //we can allocate space for more than just int//
    char* c= new char;
    string* s = new string;

    delete c;
    delete s;

    int* arr = new int [10];// this crates a array of 10 at start but it could be any size at start up
    arr[0] = 123;
    arr[1] = 123123;
    arr[9] = 8324;

    for(int i=0; i <10; i++){
        cout << arr[i] <<endl;
    }
    delete[] arr; // the special command to delete the hole array//
    //other whise: "delete arr" whould just delete the variable it points to//

    //new int; //"new" can be used to request memory//
    int* ptr = new int; //ptr is on the stack that points to int on heap
    *ptr = 100;


    cout << ptr << endl;
    cout << *ptr << endl;
    

    /*while(true) {
        int* a = new int; //causes a forever loop that keeps asking for memory
                        //leading to memory leak and eventually crahs
    }*/

    //delete ptr; // if new is used end with delete to return the memory to computer

    
    return 0;
}