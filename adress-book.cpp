// here we are going to create a adress book using cpp
// functionalities : create record, Delete record, modify record, view book, exit


#include <iostream>
#include <string>
using namespace std;

class book_operations {
    
    public: void add(string *arr, int *len);

};
void book_operations :: add(string *arr, int *len)
    {
        cout<<*len<<endl;    
    } 

int main() {

    int n = 1000;
    string book[n];

    book_operations Opr;
    Opr.add(&book[n], &n);

    return 0;

}