#include <iostream>
#include <iomanip>

using namespace std;

// constant variables
const double SQUIRREL_PRICE = 1000.00;

// function prototypes
void ShowUsage();
void MakePurchase(int& iTotalSquirrel);
void DisplayPurchase(const int iTotalSquirrel);
void DisplayTotal(const int iTotalSquirrel);

int main()
{
    // variables
    char action;
    int squirrel = 0;

    // introduction
    cout << setfill('*') << setw(61) << "\n";
    cout << setw(54) << " Welcome to my Johnny Utah's Squirrel Surf Shop " << setw(7) << "\n";
    cout << setw(62) << "\n\n";

    ShowUsage();

    do
    {
        cout << "\nPlease enter selection: ";
        cin >> action;
        switch (action) // determines user input
        {
            case 's':
            case 'S':
                ShowUsage();
                break;
            case 'p':
            case 'P':
                MakePurchase(squirrel);
                break;
            case 'c':
            case 'C':
                DisplayPurchase(squirrel);
                break;
            case 't':
            case 'T':
                DisplayTotal(squirrel);
                break;
            case 'q':
                action = 'Q';
            case 'Q':
                break;
            default:
                cout << "Invalid selection. Try again\n";
        }
    }
    while (action != 'Q'); // repeats until acceptable input is entered

    // once 'Q' is entered, quit program
    system("pause");
    system("cls");
    return 0;
}

void ShowUsage()
{
    cout << "\nTo show program usage 'S'\n";
    cout << "To purchase a surfboard press 'P'\n";
    cout << "To display current purchases press 'C'\n";
    cout << "To display total amount due press 'T'\n";
    cout << "To quit the program press 'Q'\n";
}

void MakePurchase(int& iTotalSquirrel)
{
    int quantity;
    cout << "\nPlease enter the quantity of XXXS squirrel surfboards you would like to purchase: ";
    cin >> quantity;
    iTotalSquirrel += quantity;
}

void DisplayPurchase(int iTotalSquirrel)
{
    cout << fixed << setprecision(0);
    if (iTotalSquirrel < 1)
        cout << "No purchases made yet" << endl;
    else
        cout << "The total number of XXXS squirrel surfboards is " << iTotalSquirrel << endl;
}

void DisplayTotal(int iTotalSquirrel)
{
    cout << fixed << setprecision(2);
    if (iTotalSquirrel < 1)
        cout << "No purchases made yet" << endl;
    else
        cout << "The total number of XXXS squirrel surfboards is " << iTotalSquirrel << " at a total of $" << iTotalSquirrel * SQUIRREL_PRICE << endl;
}