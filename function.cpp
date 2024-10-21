#include<iostream>

using namespace std;

int add_two_numbers(int a,int b){

    return a + b;
}

void printmyname(string name){

    cout << name << " is a good boy"  << endl;

}





int main(){

int result = add_two_numbers(10,10);

cout << "The result is " << result << endl;

printmyname("Naveen");
printmyname("Naresh");

return 0;

}

