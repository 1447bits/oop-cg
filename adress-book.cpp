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








// New Modification 

// here we are going to create a adress book using cpp
// functionalities : create record, Delete record, modify record, view book, exit


#include <iostream>
using namespace std;

class book_operations {
    
    // // function to add elements to the array 
    // public: string add(string arr[], int len) {

    //     int count = 0;  // to count the num of elements added
    //     string item;    // input from user

    // // loop to input the elements to be added  
    //     for (int i = 0; i <= 1000; i++){
    //         // cout << length << endl;
    //         count+=1;
    //         cout << "Enter record : "; 
    //         cin>>item;
    //         if (item == "exit" || item == "Exit"){
    //             break;
    //         }
    //         arr[i] = item;
    //     }

    // // to display the elements which were added 
    //     for (int i = 0; i <= 1000; i++){
    //         if (arr[i] == ""){
    //             break;
    //         }
    //         cout << arr[i] << ", ";
    //     }
    //     cout<<endl;

    //     return "done";
    // }





    public: string* add2(int len) {
        string arr[len];
        int count = 0;  // to count the num of elements added
        string item;    // input from user

    // loop to input the elements to be added  
        for (int i = 0; i <= 1000; i++){
            // cout << length << endl;
            count+=1;
            cout << "Enter record : "; 
            cin>>item;
            arr[i] = item;
        }
        return arr;
    }

}; 

int main(){

    int n = 1000;
    string book[n];

    // object created 
    book_operations Opr;

    string New[n];
    string* newArr = Opr.add2(n);

    // // loop to the modified array after addition of th elements 
    for (int i = 0; i <= n; i++){
        book[i] = newArr[i];
    }

    // loop to display add elemets from th efunction from the function returned array to original array.
    for (int i = 0; i < n; i++){
        cout << "\"" << newArr[i] << "\" ";
    }

    return 0;
}
