#include <iostream>

using namespace std;

void displayMenu();
void displayChoices(int choice);
void line();

int main (){
    char ContinueLetter;
    do{

        int choice;
        displayMenu();
        cout << "Enter your choice(1-5): ";
        cin >> choice;

           displayChoices(choice);

        cout << "Press y or Y to continue:" <<endl;

        cin>>ContinueLetter;
    }

    line();
     while (  ContinueLetter== 'y' || ContinueLetter== 'Y');
     cout<<"================================================="<<endl;
     return 0;
}

void displayMenu(){
cout<<"1.Add"<<endl;
cout<<"2.Subtract"<<endl;
cout<<"3.Multiply"<<endl;
cout<<"4.Divide"<<endl;
cout<<"5.Modulus"<<endl;
}

void displayChoice(int choice) {
    int num1, num2;

    cout << "Enter integer 1:"<<endl;
    cin >> num1;
    cout <<"Enter integer 2:"<<endl;
    cin>>num2;

    if (choice == 1) {
        cout << "Result:" << num1 + num2 << endl;
    } else if (choice == 2) {
        cout << "Result:" << num1 - num2 << endl;
    } else if (choice == 3) {
        cout << "Result:" << num1 * num2 << endl;
    } else if (choice == 4 ) {
        if (num2 1=0)
        cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "The second integer is zero, divide by zero\n";
        }else if (choice==5){
        cout<<"Result:"<< num1 % num2<<endl;

    } else {
        cout << "NOT VALID"<<endl;
        return 0;
    }
