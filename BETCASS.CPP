//ABHINAV NARAIN //
#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class casino
{
private:
    char press;
    int luck,a,age;
    double amount,oldamount;
    string name;
public:
    void exchange();
};
void casino::exchange()
    {
        srand(time(0));
        do
        {
        cout<<"                ||||||||||---------> WE WELCOME YOU <-------------||||||||||"<<endl;
        cout<<"\n           The one who are in luck get amount 3 Time more they BET \n";
        cout<<"\n                    If you lost you also lost money \n";
        cout<<" \n Pls  Enter  Your  NAME:"                          ;
        getline(cin,name);
        cin.ignore();
        cout<<"                 THIS GAME IS FOR ABOVE 18+\n";
        cout<<"enter age  \n";
        cin>>age;
        if(age<18)
        {
            cout<<"YOU ARE NOT ELIGIBLE TO PLAY THIS GAME\n";
        }
        else if(age>=18)
        {
        cout<<"\n         THE GREAT CASINO WELCOME YOU:"<<" / / "<< name <<" / / "<<" :HOPE YOU WIN "<<endl;
        cout<<"Amount you want to bet:"<<endl;
        cin>>oldamount;
        cout<<"\n           Don't choose number greater than 10\n";
        cout<<"\n                  WISH YOUR LUCK\n         ";
        cout<<"  CHOOSE NUMBER FROM 1 to 10"<<endl;
        cin>>a;
        if(a>10)
        {
            cout<<"Don't enter number greater than 10"<<endl;
        }
        else if(a>0 || a<10)
        {

          luck=rand()%10+1;
            if(luck==a)
            {
                cout<<"         CONGO you win\n";
                cout<<"\n        $$$$$$$$$$$$$$$  \n";
                amount=oldamount*3;
                cout<<"         new amount after WIN = "<<amount<<"Rs"<<endl;
                cout<<"\n        $$$$$$$$$$$$$$$  \n";
            }
            else if(luck!=a)
            {
                cout<<"                 Try one more time\n";
                cout<<"              YOU loss= "<<oldamount<<"Rs"<<endl;
                cout<<"\n           Winning number is: "<<"----->   "<<luck<<"   <-----"<<endl;
            }
        }
        }

        cout<<"         THANKYOU FOR PLAYING \n";
        cout<<"          \n FOR PLAY AGAIN \n";
        cout<<"        \n press Y for play again \n";
        cout<<"        \n press N for exit \n";
        cin>>press;
        cin.ignore();
        }while(press=='Y' || press=='y');
}
int main()
{
    casino ob1;
    ob1.exchange();
}

