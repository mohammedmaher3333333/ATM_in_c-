#include<cstdlib>
#include <iostream>
#include<string>
using namespace std;

string names[10];
string passwordes[10];
double Amountes[10];

int sizeOfArray=sizeof(names)/sizeof(names[0]);

string name,pass;
int p,n,indextransfare;
int order;
double valuetransfare;

void openAccount();
void checkname();
void checkPass();
void run();
void withdrawan();
void Deposit();
void accountInformation();

        // Tusk currency converter  -->
void ExchangeRate();
void UsdTOSar();
void UsdTObr();
void UsdTOEgp();
void UsdTOEur();
void UsdTOIqd();

        //money transfer process  -->>
void transfareMoneycheckname();
void transfareMoneysend();
void transfareMoneyresive();
void exitAcount();


int main(){
    openAccount();

    checkname();

    run();

    return 0;
}

        //Tusk open a bank account  -->
void openAccount(){
    cout<<"Welcome, To your Bank :)\n"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<"Please Enter your Name :"<<endl;
        getline(cin>>ws, names[i]);
        cout<<"Please Enter your password :"<<endl;
        getline(cin>>ws, passwordes[i]);
        cout<<"Enter The Amount of money :"<<endl<<"$";
        cin >> Amountes[i];
        cin.ignore();
    }
}

        //task User check  -->
void checkname(){
    cout << "\n<-----------------welcome----------------->"<<endl;
    int x=0;
    while(true){
        cout << "\n please enter credit card (name): "<<endl;
        getline(cin, name);
            for(int i=0;i<sizeOfArray;i++){
            if(name==names[i]){
                n=i;
                checkPass();
            }
        }
    }
}

        //Password check  -->
void checkPass(){
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout << "enter your password"<<endl;
    int x=0;
    while(x<3){
    if(x>0){
    cout << "enter your password real"<<endl;}
        getline(cin, pass);
        for(int i=0;i<sizeOfArray;i++){
            if(pass==passwordes[i]){
                p=i;
                run();
            }
        }
            x++;
    }
        cout << "<--goodbye-->"<<endl;
        cout << "please enter your visa\n"<<endl;
}

void run(){
    if (p==n){
        while(true){
            cout<<"\nEnter (1) to withdraw--->";
            cout<<"\nEnter (2) to deposit---->";
            cout<<"\nEnter (3) to about------>";
            cout<<"\nEnter (4) to exchange pound-->";
            cout<<"\nEnter (5) to trans fare-->";
            cout<<"\nEnter (6) to exit------->"<<endl;

            cout<<endl<<" please choose an option: "<<endl;
            cin >> order;
            if (order==1){
                withdrawan();
            }else if (order==2){
                Deposit();
            }else if (order==3){
                accountInformation();
            }else if (order==4){
                ExchangeRate();
            }else if (order==5){
                transfareMoneycheckname();
            }else if (order==6){
                cout << "\n <---goodbye--->"<<endl;
                cin.ignore();
                checkname();
            }else{
                cout << "\n please enter valid number"<<endl;
            }
        }
    }
}

        //The process of withdrawing an amount  -->
void withdrawan(){
    double value;
    cout<<"Please Enter Amount To Withdraw :"<<endl;
    cin>>value;
    if(value>Amountes[n]){
        cout<<"Error >> Please Enter Valid Number :"<<endl;
    }else{
        Amountes[n]-=value;
/*        Amount[n]-=5;*/
        cout <<"remaining amount: "<<"$"<<Amountes[n]<<endl;
    }
}

        //The process of depositing an amount  -->
void Deposit(){
    double required;
    cout << "Please Enter The deposit Amount :"<<endl;
    cin >>required;
    if (required<1){
        cout << "Error >> Please Enter Valid Number :"<<endl;
    }else{
        Amountes[p]+=required;
        cout <<"remaining amount: "<<"$"<<Amountes[p]<<endl;
    }
}

        //customer information  -->>
void accountInformation(){
    cout<<"Your Name    :"<<names[p]<<endl;
    cout<<"Your password :"<<passwordes[p]<<endl;
/*    Amount[p]-=1;//ÑÓæã ÇáÇÓÊÚáÇã*/
    cout<<"Your amount  :"<<"$"<<Amountes[p]<<endl;
}

        //currency conversion process  -->>
void ExchangeRate(){
    opt:
    cout << "\n enter (1) dollar TO Rial  -->\n enter (2) dollar TO ruble -->\n enter (3) dollar TO Pound -->\n enter (4) dollar TO Euro  -->\n enter (5) dollar TO Dinar -->\n enter (6) back to processes->\n"<<endl;
    int op;
    cout<<"Please Enter option: "<<endl;
    cin>>op;
    switch(op){
    case 1:
        UsdTOSar();
        break;
    case 2:
        UsdTObr();
        break;
    case 3:
        UsdTOEgp();
        break;
    case 4:
        UsdTOEur();
        break;
    case 5:
        UsdTOIqd();
        break;
    case 6:
        run();
        break;
    default:
        cout << "please enter option real"<<endl;
        goto opt;
    }
}

void UsdTOSar(){ //from American dollar TO Rial
    double value;
    int swappound,x=0;
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout<<endl<<"Please enter the amount :"<<endl;
    while(x<3){
        if(x>0){
        cout<<endl<<"Please enter the amount valid:"<<endl;}
        cin>>value;
        if(value<Amountes[n]){
            swappound=value*3.75;
            Amountes[n]-=value;
            cout <<endl<<"has been returned: "<<"sar "<<swappound<<endl;
            goto m;
        }
        x++;
    }
    m:
    run();
}

void UsdTObr(){  //American dollar To Russian ruble
    double value;
    int swappound,x=0;
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout<<endl<<"Please enter the amount :"<<endl;
    while(x<3){
        if(x>0){
        cout<<endl<<"Please enter the amount valid:"<<endl;}
        cin>>value;
        if(value<Amountes[n]){
            swappound=value*74.61;
            Amountes[n]-=value;
            cout <<endl<<"has been returned: "<<"Rub "<<swappound<<endl;
            goto m1;
        }
        x++;
    }
    m1:
    run();
}

void UsdTOEgp(){ //American dollar to Egyptian Pound
    double value;
    int swappound,x=0;
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout<<endl<<"Please enter the amount :"<<endl;
    while(x<3){
        if(x>0){
        cout<<endl<<"Please enter the amount valid:"<<endl;}
        cin>>value;
        if(value<Amountes[n]){
            swappound=value*15.71;
            Amountes[n]-=value;
            cout <<endl<<"has been returned: "<<"P "<<swappound<<endl;
            goto m2;
        }
        x++;
    }
    m2:
    run();
}

void UsdTOEur(){  //American dollar to French Euro
    double value;
    int swappound,x=0;
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout<<endl<<"Please enter the amount :"<<endl;
    while(x<3){
        if(x>0){
        cout<<endl<<"Please enter the amount valid:"<<endl;}
        cin>>value;
        if(value<Amountes[n]){
            swappound=value*0.88;
            Amountes[n]-=value;
            cout <<endl<<"has been returned: "<<"E "<<swappound<<endl;
            goto m3;
        }
        x++;
    }
    m3:
    run();
}

void UsdTOIqd(){ //American dollar to Iraqi Dinar
    double value;
    int swappound,x=0;
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout<<endl<<"Please enter the amount :"<<endl;
    while(x<3){
        if(x>0){
        cout<<endl<<"Please enter the amount valid:"<<endl;}
        cin>>value;
        if(value<Amountes[n]){
            swappound=value*1460;
            Amountes[n]-=value;
            cout <<endl<<"has been returned: "<<"D"<<swappound<<endl;
            goto m4;
        }
        x++;
    }
    m4:
    run();
}

        //money transfer process  -->>
void transfareMoneycheckname(){
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout << "Please Enter The user:"<<endl;
    int x=0;
    string nametransfare;
    while(x<4){
        if(x>1){
        cout << "Please Enter The user real:"<<endl;}
        getline(cin, nametransfare);
         for(int i=0;i<sizeOfArray;i++){
            if(nametransfare==names[i]&&nametransfare!=name){
                indextransfare=i;
                transfareMoneysend();
                break;
            }
        }
            x++;
    }
        cout <<endl<< "<><>(the user not defined:)<><>"<<endl;
}

void transfareMoneysend(){
    cout <<endl<<"<--you have three tries-->"<<endl<<endl;
    cout<<"Please Enter Amount To transfare :"<<endl;
    int x=0;
    while(x<3){
        if(x>0){
        cout<<"Please Enter Amount To transfare other:"<<endl;}
        cin>>valuetransfare;
        if(valuetransfare<=Amountes[n]&&valuetransfare>0){
            Amountes[n]-=valuetransfare;
            cout <<"remaining amount: "<<"$"<<Amountes[n]<<endl;
            transfareMoneyresive();
        }
        x++;
    }
    cout <<endl<< "<><>you used three attempts<><>"<<endl;
    run();
}

void transfareMoneyresive(){
    int value=valuetransfare;
    while(true){
    for(int i=0;i<sizeOfArray;i++){
        if(indextransfare==i){
        Amountes[i]+=value;
        run();
        }
    }
    break;
}
}
