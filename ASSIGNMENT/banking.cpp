#include<iostream>
using namespace std;
class SavingAccount{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
    public:
    SavingAccount(string name,int accNumber,double balance,
                 double rate){
        accountHolderName = name;
        accountNumber = accNumber;
        this->balance = balance;
        interestRate = rate;
   }
    void deposit(double amount){
        if (amount>0){
            balance+=amount;
            cout<<"deposited"<<amount<<endl;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }
    void withdraw(double amount){
        if(amount > 0 && amount <= balance ){
            balance-=amount;
            cout<<"withdrawn"<<amount<<endl;
        }else{
            cout<<"insufficient amount"<<endl;
        }
    }
    void applyinterest(){
        double interest = balance*interestRate/100;
        balance += interest;
        cout<<"interest applied"<<interest<<endl;
    }
    void display(){
        cout<<"[SavingAccount]"<<endl;
        cout<<"AccountHolder"<<accountHolderName<<endl;
        cout<<"AccountNumber"<<accountNumber<<endl;
        cout<<"Balance"<<balance<<endl;
        cout<<"InterestRate"<<interestRate<<endl;
    }
};
class CheckingAccount{
    private:
    string accountHolderName;
    int accountNumber;
    double Balance;
    double transactionFee;
    public:
    CheckingAccount(string name,int accNumber,double balance,
                 double fee){
        accountHolderName = name;
        accountNumber = accNumber;
        this->Balance = balance;
        transactionFee = fee;
   }
    void deposit(double amount){
        if (amount>0){
            Balance+=amount;
            cout<<"deposited"<<amount<<endl;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }
    void withdraw(double amount){
        if(amount < 0 ){
            cout<<" invalid withdrawn amount"<<amount<<endl;
            return;
        }
        double total = amount + transactionFee;
        if(total <= Balance){
            Balance-=total;
            cout<<"withdrwn"<<amount<<"transactionFee"<<transactionFee<<endl;        }else{
            cout<<"insufficient balance"<<endl;
    }
 }

    void display(){
        cout<<"[CheckingAccount]"<<endl;
        cout<<"AccountHolder"<<accountHolderName<<endl;
        cout<<"AccountNumber"<<accountNumber<<endl;
        cout<<"Balance"<<Balance<<endl;
        cout<<"transactionFee"<<transactionFee<<endl;
    }
};
int main(){
SavingAccount savings("abc",1001,300.0,3.0);
CheckingAccount checking("b",1102,3000.0,4.0);
    savings.display();
    savings.deposit(2000);
    savings.withdraw(1000);
    savings.applyinterest();
    savings.display();

    checking.display();
    checking.deposit(500);
    checking.withdraw(100);
    checking.display();
    return 0;
}
           
