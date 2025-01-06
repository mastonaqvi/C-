// #include<iostream>
// using namespace std;

// class Complex{
//     int real;
//     int imaginary;

//     public:

//     void setData(int real, int imaginary){
//         this->real=real;
//         this->imaginary=imaginary;
//     }
//     void addData(Complex a , Complex b){
//         real=a.real+b.real;
//         imaginary=a.imaginary+b.imaginary;
//     }
//     void display(){
//         cout<<"Complex Number "<<real<<" "<<imaginary<<" i"<<endl;
//     }

// };

// int main(){

//     Complex c1,c2,c3;
//     c1.setData(20,30);
//     c1.display();
//     c2.setData(60,70);
//     c1.display();

//     c3.addData(c1,c2);
//     c1.display();




// }
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Constructor to initialize real and imaginary parts
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    // Overloading the + operator
    Complex operator+(const Complex& other) {
        // Adding real and imaginary parts separately
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Member function to display complex number in a + bi format
    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Creating two complex number objects
    Complex c1(20, 30), c2(60, 70);

    cout << "Complex Number 1: ";
    c1.display();  // Display c1

    cout << "Complex Number 2: ";
    c2.display();  // Display c2

    // Adding the two complex numbers using overloaded + operator
    Complex c3 = c1 + c2;

    cout << "Sum of Complex Numbers: ";
    c3.display();  // Display the result of the addition

    return 0;
}
