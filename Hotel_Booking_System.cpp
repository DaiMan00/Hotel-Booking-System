#include <iostream>
using namespace std;

int main ()
{
    int choice;
    int quantity;

    //Quantity of items
    int Q_room=0, Q_pasta=0, Q_pizza=0;
    //Number of items sold
    int S_room=0, S_pasta=0, S_pizza=0;
    //Revenues from the items
    int R_room=0, R_pasta=0, R_pizza=0;

    cout << "\n\t\t Quantity of items that the hotel has";
    cout << "\n Number of hotel rooms : " ;
    cin >> Q_room ;
    cout << "\n Number of pastas : " ;
    cin >> Q_pasta ;
    cout << "\n Number of pizzas : " ;
    cin >> Q_pizza ;

    m:
    cout << "\n\n\t\t Please select the items from the menu";
    cout << "\n 1) Hotel Room";
    cout << "\n 2) Pasta";
    cout << "\n 3) Pizza";
    cout << "\n 4) Information regarding sales and collection";
    cout << "\n 5) Exit";

    cout << "\n\n\t\t Please select the item you need by inputing a number from 1 to 5 : ";
    cin >> choice;


    switch(choice)
    {
        case 1:
            cout << "\nEnter the number of rooms you need to book: " ;
            cin >> quantity;
            
            if (Q_room - S_room >= quantity)
            {
                S_room = S_room + quantity;
                R_room = R_room + 2000 * quantity;
                cout << "\n " << quantity << " room/rooms have been booked by you!";

            }
            else
            {
                cout << "\n Only " << Q_room - S_room << "rooms are available at the moment";
                break;
            }
        case 2:
            cout << "\nEnter the number of pastas you need to order: " ;
            cin >> quantity;
            
            if (Q_pasta - S_pasta >= quantity)
            {
                S_pasta = S_pasta + quantity;
                R_pasta = R_pasta + 25 * quantity;
                cout << "\n " << quantity << " pasta/pastas have been ordered by you!";

            }
            else
            {
                cout << "\n Only " << Q_pasta - S_pasta << "pastas are available at the moment";
                break;
            }
        case 3:
            cout << "\nEnter the number of pizzas you need to order: " ;
            cin >> quantity;
            
            if (Q_pizza - S_pizza >= quantity)
            {
                S_pizza = S_pizza + quantity;
                R_pizza = R_pizza + 60 * quantity;
                cout << "\n " << quantity << " pizza/pizzas have been ordered by you!";

            }
            else
            {
                cout << "\n Only " << Q_pizza - S_pizza << "pizzas are available at the moment";
                break;
            }
        case 4:
            cout << "\n\n\t\t Details of sales and collection of items";

            cout << "\nNumber of rooms we have : " << Q_room;
            cout << "\nNumber of rooms we sold : " << S_room;
            cout << "\nRemaining rooms : " << Q_room - S_room; 
            cout << "\nTotal sales from hotel rooms : " << R_room;


            cout << "\nNumber of pastas we have : " << Q_pasta;
            cout << "\nNumber of pastas we sold : " << S_pasta;
            cout << "\nRemaining pastas : " << Q_pasta - S_pasta;
            cout << "\nTotal sales from pastas : " << R_pasta;

            cout << "\nNumber of pizzas we have : " << Q_pizza;
            cout << "\nNumber of pizzas we sold : " << S_pasta;
            cout << "\nRemaining pizzas : " << Q_pizza - S_pizza;
            cout << "\nTotal sales from pizzas : " << R_pizza;
            
            cout << "\n Total sales of the day : " << R_room + R_pasta + R_pizza;
            
            break;
        case 5:
            exit(0);

            default:
                cout << "\n Please select the numbers in the menu";

    }
    goto m;
    
    return 0;
}