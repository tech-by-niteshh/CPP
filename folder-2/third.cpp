# include <iostream>
using namespace std;


int main(){
    // Declaration
    int a, b, c;

    // Input
    cout << "Enter a value for variable a   :   ";
    cin >> a;
    cout << "Enter a value for variable b   :   ";
    cin >> b;
    cout << "Enter a value for variable c   :   ";
    cin >> c;

    // Processing 
    int e = (a + b);
    e = e + c;

    // Output
    cout << "The sum of all of them is    :   " << e << endl;

    return 1;
}