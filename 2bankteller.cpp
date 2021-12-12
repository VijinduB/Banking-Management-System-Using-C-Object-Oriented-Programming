#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>


using namespace std;


class Teller{

public:
    string tellerId;
    int pw;

    void teller(){

        cout<<"\n\n\n\t\t\t\t\tEnter your teller ID    :";
        cin>>tellerId;
        cout<<"\n\n\t\t\t\t\tEnter password \t\t:";
        cin>>pw;

                system("CLS");

        if(tellerId=="teller96"){
            if(pw=1996){
                cout<<"\n\t\t\t\t** Login Successfully **"<<endl;
            }
            else{
                cout<<"!Check Your Password Again!";

            }
        }
        else{
            cout<<"!Incorrect Teller Id Check Again!"<<endl;
        }
    }

};


class Menu{

public:
     Menu(){
        cout<<"\n\n\n\t\t\t\t[1]=======Cash Deposit"<<endl;
        cout<<"\n\n\t\t\t\t[2]=======Cash Withdrawal"<<endl;
        cout<<"\n\n\t\t\t\t[3]=======Account Update"<<endl;
        cout<<"\n\n\t\t\t\t[4]=======Account Opening"<<endl;
        cout<<"\n\n\t\t\t\t[5]=======Bill Payment"<<endl;
        cout<<"\n\n\t\t\t\t[6]=======Transaction Report"<<endl;
        cout<<"\n\n\t\t\t\t[7]=======LogOut"<<endl;
    }

};

class Transaction{
public:

    double balance;
    double deposit;
    double withdr;
};
class Deposit: public Transaction{
public:
    string Accnum;
    double tot;

    void deposite(){

        tot=0;
        cout<<"\n\n\t\t\t\tEnter the account number:";
        cin>>Accnum;
        cout<<"\n\t\t\t\tEnter the deposit amount:";
        cin>>deposit;
        cout<<"\n\t\t\t\tEnter the account balance:";
        cin>>balance;
        tot=deposit+balance;
        cout<<"\n\n\t\t\t\tDeposit "<<deposit<<" successfully."<<endl;
        cout<<"\n\t\t\t\tNew account balance is "<<tot<<" rupees."<<endl;
    }
};

class Withdrawal: public Transaction{
public:
    string Accnum;
    double tot;

    void withdraw(){

        tot=0;
        cout<<"\n\n\t\t\t\tEnter the account number:";
        cin>>Accnum;
        cout<<"\n\t\t\t\tEnter the withdraw amount:";
        cin>>withdr;
        cout<<"\n\t\t\t\tEnter the account balance:";
        cin>>balance;
        if(withdr<balance){
            tot=balance-withdr;
            cout<<"\n\n\t\t\t\tWithdraw "<<withdr<<" successfully."<<endl;
            cout<<"\n\t\t\t\tNew account balance is "<<tot<<" rupees."<<endl;
        }
        else{
            cout<<"\nwithdrawal amount greater than current balance please withdraw lower amount than current account balance*\n";
        }

    }
};
class BillPayment:public Transaction{

public:
    int typ;
    string billNum;
    double cash,bill;

    void billpay(){

    cout<<"\n\n\t\t\t\t\tSelect type of bill:\n\n\t\t\t\t******************************";
    cout<<"\n\n\t\t\t\t\t[01]====CEB";
    cout<<"\n\t\t\t\t\t[02]====MOBITEL";
    cout<<"\n\t\t\t\t\t[03]====DIALOG";
    cout<<"\n\t\t\t\t\t[04]====SLT\n\n\t\t\t\t******************************\n";

    cout<<"\n\n\n\t\t\t\tEnter the bill type:";
    cin>>typ;

    if(typ==1 || typ==2 || typ==3 || typ==4){
        if(typ==1){
            cout<<"\n\n\n\t\t\t\tWELCOME TO CEB ONLINE BILL PAYMENT";
            cout<<"\n\n\t\t\t\tEnter the bill number:";
            cin>>billNum;
            cout<<"\n\t\t\t\tEnter the cash given by customer:";
            cin>>cash;
            cout<<"\n\t\t\t\tEnter the bill amount:";
            cin>>bill;
            if(cash>bill){
                balance=cash-bill;
                cout<<"\n\n\t\t\t\tPAYMENT HAVE SUCCEFULLY COMPLETED****";
                cout<<"\n\t\t\t\tBalance "<<balance<<" rupees.";
            }
            else{
                cout<<"\n\t\t\tSorry! Can't pay this due to insufficient cash.\n\t\t\tAnother "<<bill-cash<<" rupees need to pay this bill.";
            }
        }
        if(typ==2){
            cout<<"\n\n\t\t\t\tWELCOME TO MOBITEL ONLINE BILL PAYMENT";
            cout<<"\n\n\t\t\t\tEnter the bill number:";
            cin>>billNum;
            cout<<"\n\t\t\t\tEnter the cash given by customer:";
            cin>>cash;
            cout<<"\n\t\t\t\tEnter the bill amount:";
            cin>>bill;
            if(cash>bill){
            balance=cash-bill;
            cout<<"\n\n\t\t\t\tPAYMENT HAVE SUCCEFULLY COMPLETED****";
            cout<<"\n\t\t\t\tBalance "<<balance<<" rupees.";
            }
            else{
                cout<<"\n\t\t\tSorry! Can't pay this due to insufficient cash.\n\t\t\tAnother "<<bill-cash<<" rupees need to pay this bill.";
            }

        }

        if(typ==3){
            cout<<"\n\n\t\t\t\tWELCOME TO DIALOG ONLINE BILL PAYMENT";
            cout<<"\n\n\t\t\t\tEnter the bill number:";
            cin>>billNum;
            cout<<"\n\t\t\t\tEnter the cash given by customer:";
            cin>>cash;
            cout<<"\n\t\t\t\tEnter the bill amount:";
            cin>>bill;
            if(cash>bill){
            balance=cash-bill;
            cout<<"\n\n\t\t\t\tPAYMENT HAVE SUCCEFULLY COMPLETED****";
            cout<<"\n\t\t\t\tBalance "<<balance<<" rupees.";
            }
             else{
                cout<<"\n\t\t\tSorry! Can't pay this due to insufficient cash.\n\t\t\tAnother "<<bill-cash<<" rupees need to pay this bill.";
            }
        }

        if(typ==4){
            cout<<"\n\n\t\t\t\tWELCOME TO SLT ONLINE BILL PAYMENT";
            cout<<"\n\n\t\t\t\tEnter the bill number:";
            cin>>billNum;
            cout<<"\n\t\t\t\tEnter the cash given by customer:";
            cin>>cash;
            cout<<"\n\t\t\t\tEnter the bill amount:";
            cin>>bill;
            if(cash>bill){
            balance=cash-bill;
            cout<<"\n\n\t\t\t\tPAYMENT HAVE SUCCEFULLY COMPLETED****";
            cout<<"\n\t\t\t\tBalance "<<balance<<" rupees.";
            }
            else{
                cout<<"\n\t\t\tSorry! Can't pay this due to insufficient cash.\n\t\t\tAnother "<<bill-cash<<" rupees need to pay this bill.";
            }
        }
    }
    else{

        cout<<"!!!SORRY... Check Again Your Bill Type.";
    }

    }

};

class AccountOpening{
public:
    string name,fname,address,bday,Id,tel;
    char age;
    int typ,atyp;
    double dep,tot;

    void selectAccount(){
        tot=0;
        cout<<"\nWhich account do customer wants to open?";
        cout<<"\n\n\t\t\t\t[1]======Savings\n\t\t\t\t[2]======Fixed Deposit\n";
        cout<<"\nSelect Account Type:";
        cin>>typ;
        system("CLS");

        if(typ==1){

            cout<<"\n\nName with initial:";
            cin>>name;
            cout<<"\nPermanent Address:";
            cin>>address;
            cout<<"\nBirthday(DD/MM/YYYY):";
            cin>>bday;
            cout<<"\nAge greater than 18?(y/n):";
            cin>>age;
            if(age=='y'){
                cout<<"\n\t[01]--+18Yes";
                cout<<"\n\t[02]--NormalAcc";
                cout<<"\n\t[03]--womensfortune";
                cout<<"\n\t[04]--olderpersons";
                cout<<"\nWhich product customer needs to open?";
                cin>>atyp;
                cout<<"\nEnter ID number:";
                cin>>Id;
            }
            else{
                 cout<<"\nBirth registered number:";
                 cin>>Id;
            }
                cout<<"\nContact number:";
                cin>>tel;

                cout<<"\n\n\t\t\t\t**Successfully Registered\n";
                cout<<"\n\n\n\t\t\t\tAccount Number\t\t:12345*****\n";
                cout<<"\t\t\t\tName\t\t\t:"<<name;
        }
        if(typ==2){
            cout<<"\n\nName with initial:";
            cin>>name;
            cout<<"\nPermanent Address:";
            cin>>address;
            cout<<"\nBirthday(DD/MM/YYYY):";
            cin>>bday;
            cout<<"\nSelect time period for deposit:";
            cout<<"\n\t[01]--03 Months";
            cout<<"\n\t[02]--06 Months";
            cout<<"\n\t[03]--12 Months\n";

            cout<<"Select product:";
            cin>>atyp;
            cout<<"\nEnter Id number:";
            cin>>Id;
            cout<<"\nContact number:";
            cin>>tel;
            cout<<"\nEnter deposit amount:";
            cin>>dep;
            switch(atyp)
            {
            case 01:
            {
                tot=dep+dep*(8/100);
                cout<<"\n\n**Successfully opened fixed deposit account\n\n";
                cout<<"\nAccount Number\t:22345*****\n";
                cout<<"Name\t\t\t:"<<name;
                cout<<"\nDeposited amount is "<<dep<<" rupees\n";
                cout<<"After selected time period you will receive "<<tot<<" rupees.";
            }
            case 02:
            {
                tot=dep+(dep*10/100);
                cout<<"\n\n**Successfully opened fixed deposit account\n\n";
                cout<<"\nAccount Number\t:22345*****\n";
                cout<<"Name\t\t\t:"<<name;
                cout<<"\nDeposited amount is "<<dep<<" rupees\n";
                cout<<"After selected time period you will receive "<<tot<<" rupees.";
            }
            case 03:
            {
                tot=dep+(dep*12/100);
                cout<<"\n\n**Successfully opened fixed deposit account\n\n";
                cout<<"\nAccount Number\t:22345*****\n";
                cout<<"Name\t\t\t:"<<name;
                cout<<"\nDeposited amount is "<<dep<<" rupees\n";
                cout<<"After selected time period you will receive "<<tot<<" rupees.";
            }
            }


        }
    }
    };

void logoname();
void datetime();
int main(){

    int i;
    char select;
    logoname();

    cout<<"\n\n\t\t\t\t    --Do You Want To Login To System--\n\t\t\t\t"<<endl;

    system("PAUSE");

    Teller tel;
    tel.teller();
    if( tel.tellerId=="teller96" && tel.pw==1996){
    ofstream transreport("TransactionReport.txt");
    do{

    Menu show;
    cout<<"\nEnter key:";
    cin>>i;

    if(i==1){
        system("CLS");
        Deposit dep;
        dep.deposite();
        transreport<<"\t\t"<<dep.Accnum<<"\t\tcd\t"<<dep.deposit<<endl;

    }
    if(i==2){
        system("CLS");
        Withdrawal withdr;
        withdr.withdraw();
        if(withdr.withdr<withdr.balance){
        transreport<<"\t\t"<<withdr.Accnum<<"\t\twd\t"<<withdr.withdr<<endl;
        }
        else{
            cout<<"";
        }

    }
    if(i==3){
        system("CLS");
        string update,accnum;
        cout<<"\nEnter the account number:";
        cin>>accnum;
        ifstream updatefile("AccountUpdate.txt");
        while(getline(updatefile,update)){
            cout<<"\t\t"<<update<<endl;
        }
        updatefile.close();
    }
    if(i==4){
        system("CLS");
        AccountOpening acc;
        acc.selectAccount();
    }
    if(i==5){
        system("CLS");
        BillPayment bill;
        bill.billpay();
        if(bill.cash>bill.bill){

            transreport<<"\t\t"<<"BillPay"<<"\t\tcd\t"<<bill.bill<<endl;

        }
        else{
            cout<<"\n\t\tInsufficient Cash.";
        }

    }
    if(i==6){
        system("CLS");
        logoname();
        cout<<"\n\t";
        datetime();
        string report;
        ifstream actreport("TransactionReport.txt");
        while(getline(actreport,report)){
            cout<<"\n\n\t\t"<<report<<endl;
        }
        actreport.close();
    }

    if(i==7){
        system("CLS");
        cout<<"\n\n\n\t\t\t\tYou Are Now LogOut..\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        system("pause");
        break;
    }

    cout<<"\n\nAgain to main menu press key -0-(zero)"<<endl;
    cin>>select;


system("CLS");
    }while(select=='0');
    }
    else{
        cout<<"\n\n\n\t\t\t\t!!!SORRY.Check Again Incorrect Details";
    }
}

//datetime() function based on tutorials point site.
void datetime(){

    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "\t\t\t~Transaction Report Of " << dt <<endl;
}

void logoname(){

    cout<<"\n\n\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\t\t\t\t|\t\t\t\t\t|";
    cout<<"\n\t\t\t\t|\t  **********************\t|\n\t\t\t\t|\t**************************\t|";
    cout<<"\n\t\t\t\t|*****Teller System [Southern Bank]*****|\n\t\t\t\t|\t\t\t\t\t|\n";
    cout<<"\t\t\t\t|\t**************************\t|\n\t\t\t\t|\t  **********************\t|\n";
    cout<<"\t\t\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
}
