// HotelManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quatity
    int Qrooms = 0, Qfufu = 0, Qbanku = 0, Qampesi = 0, Qgobe = 0, Qwakye = 0;
    //food items sold
    int Srooms = 0, Sfufu = 0, Sbanku = 0, Sampesi = 0, Sgobe = 0, Swakye = 0;
    //Total price of item
    int Total_rooms = 0, Total_fufu = 0, Total_banku = 0, Total_ampesi = 0, Total_gobe = 0, Total_wakye = 0;


    cout << "\n\t Quantity of item we have";
    cout << "\n\t Room available: ";
    cin >> Qrooms;
    cout << "\n Quatity of fufu: ";
    cin >> Qfufu;
    cout << "\n Quatity of banku: ";
    cin >> Qbanku;
    cout << "\n Quatity of ampesi; ";
    cin >> Qampesi;
    cout << "\n Quatity of gobe: ";
    cin >> Qgobe;
    cout << "\n Quatity of wakye: ";
    cin >> Qwakye;

    m:
    cout << "\n\t\t\t Please select from the menu options ";
    cout << "\n\n 1) Rooms";
    cout << "\n\n 2) Fufu";
    cout << "\n\n 3) Banku";
    cout << "\n\n 4) Ampesi";
    cout << "\n\n 5) Gobe";
    cout << "\n\n 6) Wakye";
    cout << "\n 7) Information regarding sales and collections ";
    cout << "\n 8) Exit ";

    cout << "\n\n Please Enter your choice! ";
    cin >> choice;

    switch (choice) 
    {
        case 1: 
            cout << "\n\n Enter the number of rooms you want : ";

            cin >> quant;
            if (Qrooms - Srooms >= quant)
            {
                Srooms = Srooms + quant;
                Total_rooms = (Total_rooms + quant * 1200);
                cout << "\n\n\t\t" << quant << " - " << " rooms have beean allocated to you!";
            }
            else            
                cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaning in the hotel :  ";
                break;

        case 2:
            cout << "\n\n Enter Fufu Quantity : ";

            cin >> quant;
            if (Qfufu - Sfufu >= quant)
            {
                Sfufu = Sfufu + quant;
                Total_fufu = (Total_fufu + quant * 250);
                cout << "\n\n\t\t" << quant << " - " << "fufu is the order!";
            }
            else
                cout << "\n\tOnly" << Qfufu - Sfufu << "Fufu remaning in the hotel ";
            break;

        case 3:
            cout << "\n\n Enter Banku Quantity : ";

            cin >> quant;
            if (Qbanku - Sbanku >= quant)
            {
                Sbanku = Sbanku + quant;
                Total_banku = (Total_banku + quant * 130);
                cout << "\n\n\t\t" << quant << " - " << "banku is the order!";
            }
            else
                cout << "\n\tOnly" << Qbanku - Sbanku << "Banku remaning in the hotel ";
            break;

        case 4:
            cout << "\n\n Enter Ampesi Quantity : ";

            cin >> quant;
            if (Qampesi - Sampesi >= quant)
            {
                Sampesi = Sampesi + quant;
                Total_ampesi = (Total_ampesi + quant * 150);
                cout << "\n\n\t\t" << quant << " - " << "ampesi is the order!";
            }
            else
                cout << "\n\tOnly" << Qbanku - Sbanku << "Ampesi remaning in the hotel ";
            break;

        case 5:
            cout << "\n\n Enter Gobe Quantity : ";

            cin >> quant;
            if (Qgobe - Sgobe >= quant)
            {
                Sgobe = Sgobe + quant;
                Total_gobe = (Total_gobe + quant * 120);
                cout << "\n\n\t\t" << quant<< " - " << "Gobe is the order!";
            }
            else
                cout << "\n\tOnly" << Qgobe - Sgobe<< "Gobe remaning in the hotel ";
            break;

        case 6:
            cout << "\n\n Enter Wakye Quantity : ";

            cin >> quant;
            if (Qwakye - Swakye >= quant)
            {
                Swakye = Swakye + quant;
                Total_wakye = (Total_wakye + quant * 180);
                cout << "\n\n\t\t" << quant << " - " << "wakye is the order!";
            }
            else
                cout << "\n\tOnly" << Qbanku - Sbanku << "Wakye remaning in the hotel ";
            break;

        case 7:
            cout << "\n\t\tDetails of sales and collection ";
            cout << "\n\n Number of rooms we had : " << Qrooms;
            cout << "\n\n Number of rooms we gave for rent " << Srooms;
            cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
            cout << "\n\n Total rooms collection for the day : " << Total_rooms;


            
            cout << "\n\n Number of Fufu we had : " << Qfufu;
            cout << "\n\n Number of Fufu that has been sold : " << Sfufu;
            cout << "\n\n Remaining Fufu : " << Qfufu - Sfufu;
            cout << "\n\n Total ball of Fufu for the day : " << Total_fufu;

            cout << "\n\n Balls of Banku we had : " << Qbanku;
            cout << "\n\n Balls of Banku that has been sold " << Sbanku;
            cout << "\n\n Remaining banku : " << Qbanku - Sbanku;
            cout << "\n\n Total balls of banku for the day : " << Total_banku;
                        
            cout << "\n\n Number of Ampesi we had : " << Qampesi;
            cout << "\n\n Number of Ampesi that has been sold " << Sampesi;
            cout << "\n\n Remaining number of ampesi : " << Qampesi - Sampesi;
            cout << "\n\n Total rooms collection for the day : " << Total_ampesi;

            cout << "\n\n Quantiy of Gobe we had : " << Qgobe;
            cout << "\n\n Quantity of Gobe we have sold " << Sgobe;
            cout << "\n\n Remaining Gobe : " << Qgobe - Sgobe;
            cout << "\n\n Total quantity of Gobe for the day : " << Total_gobe;


            cout << "\n\n Quantity of Wakye we had : " << Qwakye;
            cout << "\n\n Quantity of Wakye we have sold " << Srooms;
            cout << "\n\n Remaining Wakye: " << Qwakye - Swakye;
            cout << "\n\n Total rooms collection for the day : " << Total_wakye;
            break;

        case 8:
            exit(0);
            break;

        default:
            cout << "\n Please select the number mentioned above! ";
    }
    goto m;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
