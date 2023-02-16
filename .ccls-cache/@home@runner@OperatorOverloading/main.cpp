#include <iostream>
using namespace std;

class Complex{
private:
  int real, imag, value;

public:
  Complex(){
    real = 0;
    imag = 0;
    value = 5;
  }
  
  Complex(int r, int i){
    real = r;
    imag = i;
  }

  void print(){
    cout << real <<" + " << imag << "i" << endl;
  }

  void printu(){
    cout << value << endl;
  }

  //Overload ++ when used as prefix - Unary operator overloading
  Complex operator ++(){
    Complex temp;
    temp.value = ++value;
    return temp;
    }

  //Overload ++ when used as postfix - Unary operator overloading
  Complex operator ++(int){
    Complex temp;
    temp.value = value++;
    return temp;
  }

  //Binary Operator overloading 
  Complex operator +(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }
};

int main() {
  Complex c1(2,4);
  Complex c2(5,8);
  Complex c3;
  c3 = c1+c2;

  Complex c4;
  c4 = ++c4;

  Complex c5;
  c5 = c5++;

  c3.print();
  c4.printu();
  c5.printu();
  
  return 0;
}