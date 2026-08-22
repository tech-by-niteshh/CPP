# include <iostream>
# include <string>
using namespace std;


// string operations


int main(){
    string name = "Nitesh";
    cout << name << endl; 
    name = "Niteshh";
    cout << name << endl;

    string lastName = "  Chaurasiya";
    name += lastName;

    cout << name;
    return 0;
}