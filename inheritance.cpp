#include <iostream>
using namespace std;


class B {
    int a;
    public: int b;
    public:void get_ab();
    public:int get_a(void);
    public:void show_a(void);
};
class D : public B {
    int c;
    public: void multiply(void);
    public : void display (void);
};
void B :: get_ab(void){
    a = 5; b = 10;
}
int B :: get_a() {
    return a;
}
void B :: show_a (){
    cout << "a = "<<a<<"\n";
}
void D :: multiply(){
    c = b * get_a();
}
void D :: display() {
    cout << "a = "<<get_a()<<endl;
    cout << "b = "<<b<<endl;
    cout << "c = "<<c<<endl; 
}
int main (){
    D d;
    d.get_ab();
    d.get_a();
    d.multiply();
    d.show_a();
    d.b = 20;
    d.multiply();
    d.display();
    return 0;

}