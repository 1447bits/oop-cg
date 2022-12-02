// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// single args templete example 

template <class T>
void disp (T a, T b){
    cout << "a = " << a << " b = " << b << endl;
} 

template <class T>
void sub (T a, T b) {
    cout << "a - b = " << a-b << endl;
}


// multiple type templete example
template <typename T1, typename T2>
void disp (T1 a, T2 b) {
    cout << "a = " << a << " b = " << b << endl;    
}
template <typename T1, typename T2>
void add (T1 a, T2 b) {
    cout << "a + b = " << a+b<< endl;
}

int main() {
    disp(40, 20);
    sub<int>(40, 20);
    
// multiple type templete example 
    
    disp(10, "one");
    add<string>("40", "fourty");
    
    return 0;
}
