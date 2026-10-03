#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imaginary;
    Complex(){
        real = 0;
        imaginary = 0;
    }
    Complex(int r,int i){
        real = r;
        imaginary = i;
    }
};
   Complex addComplexNumber(Complex C1,Complex C2){
        Complex res;
        res.real = C1.real + C2.real;
        res.imaginary = C1.imaginary + C2.imaginary;
        return res;
    }
int main(){
    Complex C1(1,2);
    cout<<"ComplexNumber1"<<C1.real<<"+i"<<C1.imaginary<<endl;
    Complex C2(4,5);
    cout<<"ComplexNumber2"<<C2.real<<"+i"<<C2.imaginary<<"+i"<<endl;
    Complex C3 = addComplexNumber(C1,C2);
    cout<<"Sum of ComplexNumber"<<C3.real<<"+i"<<C3.imaginary<<"+i"<<endl;
    return 0;
    }

