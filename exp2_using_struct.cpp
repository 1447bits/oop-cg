// Develop an object oriented program in C++ to create a database of student information system containing the
// following information: Name, Roll number, Class, division, Date of Birth, Blood group, Contact address, telephone
// number, driving license no. etc Construct the database with suitable member functions for initializing and destroying
// the data viz constructor, default constructor, Copy constructor, destructor, static member functions, friend class, this
// pointer, inline code and dynamic memory allocation operators-new and delete

#include <iostream>
#include <string>
using namespace std;

struct stud {
    string name;
    int Roll_no;
    string Std;
    char Div;
    string DOB;
    string BlookGroup;
    string Adress;
    int Tele;
};

class Student {
    private : 
        string Name;
        int Roll_no;
        string Std;
        char Div;
        string DOB;
        string BloodGroup;
        string Adress;
        int Tele;
    public : Student(
    string nm,
    int rn,
    string stand,
    char divi,
    string dob,
    string bg,
    string ad,
    int tele
    ){
        Name = nm;
        Roll_no = rn;
        Std = stand;
        Div = divi;
        DOB = dob;
        BloodGroup = bg;
        Adress = ad;
        Tele = tele;
    }
    void display(void){
        cout << "<---------------------------------------------------->\n";
        cout << "\n\nHello My Name is " << Name << " Roll.No : " << Roll_no << " I study in " << Std << " Year, Division " << Div << "\n My BloodGroup is " << BloodGroup << " You can find me at " << Adress << ", \ncontact Number : " << Tele << endl;
        cout << "<---------------------------------------------------->\n";
    }
};

void inp(stud person){
    cout << "\t\tEnter student info\n";
    cout << "<---------------------------------------------------->\n";
    cout << "Name : ";
    getline (cin, person.name);
    if (person.name == "exit") return;
    cout << "Contact Address : ";
    getline (cin, person.Adress);
    cout << "Roll No : ";
    cin >> person.Roll_no;
    cout << "Year : ";
    cin >> person.Std;
    cout << "Division : ";
    cin >> person.Div;
    cout << "Date Of Birth : ";
    cin >> person.DOB;
    cout << "Blood Group : ";
    cin >> person.BlookGroup;
    cout << "Telephone Number : ";
    cin >> person.Tele;
}

int main(){

    int n;
    cout << "number of students in class";
    cin >> n;
    stud list[n];
    for (int i = 0; i < n; i++){
        stud tempstudent;
        inp(tempstudent);
        list[i] = tempstudent;
    }

    cout << "enter roll number of student you want to display : ";
    cin >> n;
    int indx;
    for (int i = 0; i<sizeof(list)/sizeof(list[0]); i++) {
        if (list[i].Roll_no == n){
            indx = i;
            break;
        } 
    } 
    Student object = Student(list[indx].name, list[indx].Roll_no, list[indx].Std, list[indx].Div, list[indx].DOB, list[indx].BlookGroup, list[indx].Adress, list[indx].Tele);
    object.display();

    return 0;
}
