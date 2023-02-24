#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
    int Srooms=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;

    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_chicken=0;

    cout << "Hello world!" << endl;
    cout<<"\n\tQuantity of items we have:";
    cout<<"\nRooms available:";
    cin>>Qrooms;
    cout<<"\nPastas available:";
    cin>>Qpasta;
    cout<<"\nBurgers available:";
    cin>>Qburger;
    cout<<"\nNoodles available:";
    cin>>Qnoodle;
     cout<<"\nShake available:";
    cin>>Qshake;
    cout<<"\nChicken-rolls available:";
    cin>>Qchicken;

    m:
    cout<<"\n\n\t\tPlease select from the menu options";

    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken-Roll";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice:";
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"\n\n Enter number of rooms you want:";
        cin>>quant;
        if(Qrooms-Srooms >= quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*2000;
            cout<<"\n\n\t\t"<<quant<<" room have alloted to you";
        }
        else
        {
            cout<<"\n\tOnly"<<Qrooms-Srooms<<" rooms remaining in the hotel";
            break;
        }

    case 2:
        cout<<"\n\n Enter number of pastas you want:";
        cin>>quant;
        if(Qpasta-Spasta >= quant)
        {
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*200;
            cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qpasta-Spasta<<" pastas remaining in the hotel";
            break;
        }
    case 3:
        cout<<"\n\n Enter number of burgers you want:";
        cin>>quant;
        if(Qburger-Sburger >= quant)
        {
            Sburger=Sburger+quant;
            Total_burger=Total_burger+quant*300;
            cout<<"\n\n\t\t"<<quant<<" burger is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qburger-Sburger<<" burger remaining in the hotel";
            break;
        }
    case 4:
        cout<<"\n\n Enter number of noodles you want:";
        cin>>quant;
        if(Qnoodle-Snoodle >= quant)
        {
            Snoodle=Snoodle+quant;
            Total_noodle=Total_noodle+quant*100;
            cout<<"\n\n\t\t"<<quant<<" noodle is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qnoodle-Snoodle<<" noodle remaining in the hotel";
            break;
        }
    case 5:
        cout<<"\n\n Enter number of shakes you want:";
        cin>>quant;
        if(Qshake-Sshake >= quant)
        {
            Sshake=Sshake+quant;
            Total_shake=Total_shake+quant*100;
            cout<<"\n\n\t\t"<<quant<<" shake is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qshake-Sshake<<" burger remaining in the hotel";
            break;
        }
    case 6:
        cout<<"\n\n Enter number of chicken-rolls you want:";
        cin>>quant;
        if(Qchicken-Schicken >= quant)
        {
            Schicken=Schicken+quant;
            Total_chicken=Total_chicken+quant*200;
            cout<<"\n\n\t\t"<<quant<<" Chicken rolls is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qchicken-Schicken<<" chicken-rolls remaining in the hotel";
            break;
        }
    case 7:
        cout<<"Details of Sales and Collections";
        cout<<"\n\n Number of room we had:"<<Qrooms;
        cout<<"\n\n Number of room we gave for rent:"<<Srooms;
        cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection of the day:"<<Total_rooms;

        cout<<"\n\n Number of pasta we had:"<<Qpasta;
        cout<<"\n\n Number of pasta we sold:"<<Spasta;
        cout<<"\n\n Remaining pasta:"<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection of the day:"<<Total_pasta;

        cout<<"\n\n Number of burger we had:"<<Qburger;
        cout<<"\n\n Number of burger we sold:"<<Sburger;
        cout<<"\n\n Remaining burger:"<<Qburger-Sburger;
        cout<<"\n\n Total burger collection of the day:"<<Total_burger;

        cout<<"\n\n Number of noodle we had:"<<Qnoodle;
        cout<<"\n\n Number of noodle we sold"<<Snoodle;
        cout<<"\n\n Remaining noodle:"<<Qnoodle-Snoodle;
        cout<<"\n\n Total noodle collection of the day:"<<Total_noodle;

        cout<<"\n\n Number of shake we had:"<<Qshake;
        cout<<"\n\n Number of shake we sold:"<<Sshake;
        cout<<"\n\n Remaining shake:"<<Qshake-Sshake;
        cout<<"\n\n Total shake collection of the day:"<<Total_shake;

        cout<<"\n\n Number of chicken-roll we had:"<<Qchicken;
        cout<<"\n\n Number of chicken we sold:"<<Schicken;
        cout<<"\n\n Remaining chicken:"<<Qchicken-Schicken;
        cout<<"\n\n Total chicken roll collection of the day:"<<Total_chicken;

        cout<<"\n\n\n Total collection of the day:"<<Total_rooms+Total_pasta+Total_burger+Total_noodle+Total_shake+Total_chicken;
        break;
    case 8:
        exit(0);
    default:
        cout<<"Please select from number mentioned above";
    }
    goto m;
}
