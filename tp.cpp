#include <iostream>
using namespace std;

void add(string arr[], int len){
    string item;
    for (int i = 0; i< len; i++){
        if (arr[i] == ""){
            cout << "enter record name : "<<endl;
            cin >> item;
            if (item == "exit" || item == "Exit"){
                break;
            } else {
                arr[i] = item;
            }
        }
    }
    cout<<"{";
    for (int i = 0; i < len; i++){
        if (arr[i] == ""){
            break;
        }
        cout<<"\""<< arr[i] <<"\" ";
        
    }
    cout<<"}";
    // return arr;
}

int main () {
    int n = 1000;
    string book[n];

    add(book, n);
    

    return 0;
}