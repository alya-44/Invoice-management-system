#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main()
{
    int yy = 0;
    int g = 1;
    while (yy < g)
    {
        int Year, Month, Day;
        string CustomerName;
        string productName;
        string invoiceDetails = " ";
        long double price = 0;
        long double totalprice = 0;
        long double itemTotal = 0;
        int quantity;
        int count;
        int x;
        int y;
        cout << "** WELCOME TO THE INVOICE SYSTEM **\n";
        cout << " \n Enter the Customer name :";
        getline(cin >> ws, CustomerName);
        do//? first loop
        {
            cout << "\nEnter 1 to display food items.\n";
            cout << "Enter 2 to display Electrical appliances.\n";
            cout << "Enter 3 to display school supplies.\n";
            cout << "Enter 4 to display the fashion and accessories section.\n";
            cin >> x;
            do //? second loop
            {
                switch (x)//! main switch 
                {
                case 1:
                    cout << "==*== Discover our items and Enter a product number to see the price and add it to your order. ==*==\n";
                    cout << " 1) Rice \n 2) Sugar \n 3) Lentils \n 4) Flour\n 5) Salt \n 6) Beans \n 7) Pasta \n";
                    cout << " 8) Oil \n 9) Eggs \n 10) Oranges \n 11) Chicken \n 12) Tomatoes \n 13) Apple \n 14) Grapes \n 15) Fish \n ";
                    cin >> y;
                    switch (y)//* food
                    {
                    case 1:
                        productName = "Rice ";
                        price = 1500;
                        cout << "Rice = " << price << "\n"; break;
                    case 2:
                        productName = "Sugar ";
                        price = 500;
                        cout << "Sugar = " << price << "\n"; break;
                    case 3:
                        productName = "Lentils ";
                        price = 750;
                        cout << "Lentils = " << price << "\n"; break;
                    case 4:
                        productName = "Flour ";
                        price = 1600;
                        cout << "Flour = " << price << "\n"; break;
                    case 5:
                        productName = "Salt ";
                        price = 1500;
                        cout << "Salt = " << price << "\n"; break;
                    case 6:
                        productName = "Beans ";
                        price = 250;
                        cout << "Beans = " << price << "\n"; break;
                    case 7:
                        productName = "Pasta ";
                        price = 2000;
                        cout << "Pasta = " << price << "\n"; break;
                    case 8:
                        productName = "Oil ";
                        price = 1000;
                        cout << "Oil = " << price << "\n"; break;
                    case 9:
                        productName = "Eggs ";
                        price = 750;
                        cout << "Eggs = " << price << "\n";  break;
                    case 10:
                        productName = "Oranges";
                        price = 200;
                        cout << "Oranges = " << price << "\n"; break;
                    case 11:
                        productName = "Chicken";
                        price = 500;
                        cout << "Chicken = " << price << "\n"; break;
                    case 12:
                        productName = "Tomatoes";
                        price = 100;
                        cout << "Tomatoes = " << price << "\n"; break;
                    case 13:
                        productName = "Apple";
                        price = 1000;
                        cout << "Apple = " << price << "\n"; break;
                    case 14:
                        productName = "Grapes";
                        price = 200;
                        cout << "Grapes = " << price << "\n"; break;
                    case 15:
                        productName = "Fish ";
                        price = 2500;
                        cout << "Fish = " << price << "\n"; break;
                    default:
                        cerr << "Invalid choice !!" << endl; break;
                    }
                    if (price != 0)
                    {
                        cout << " Enter quantity :";
                        cin >> quantity;
                        itemTotal = price * quantity;
                        invoiceDetails += " Product Name --> " + productName + " / Quantity --> " + to_string(quantity) + " / Unit Price --> " + to_string(itemTotal) + "\n";
                        cout << " itemTotal = " << itemTotal << "\n";
                        cout << productName << price << " * " << quantity << " = " << itemTotal << "IQD\n";
                        totalprice += itemTotal;
                        break;
                    }
                case 2:
                    cout << "==*== Discover our items and Enter a product number to see the price and add it to your order. ==*==\n";
                    cout << " 1) Electric Generator \t 2) Refrigerator \n 3) Washing Machine \t 4) Air Conditioner (Split AC)\n";
                    cout << " 5) Fan \t\t 6) Phone Charger \n 7) Electric Iron \t 8) Vacuum Cleaner \n 9) Water Dispenser \t 10) Electric Cooke \n";
                    cout << " 11) Juicer \t\t 12) Meat Grinder \n 13) Electric Oven \t 14) Hand Blender \n ";
                    cout << "15) Vegetable Chopper \t 16) Blender \n 17) Juicer / Blender \t 18) Coffee Grinder \n ";
                    cout << "19) Laptop \t\t 20) Game Console \n 21)Satellite Receiver   22) Television (TV)\n ";
                    cin >> y;
                    switch (y) //* Electrical appliances
                    {
                    case 1:
                        productName = "Electric Generator ";
                        price = 50000;
                        cout << "Electric Generator = " << price << "\n"; break;
                    case 2:
                        productName = "Refrigerator ";
                        price = 55000;
                        cout << "Refrigerator = " << price << "\n";  break;
                    case 3:
                        productName = "Washing Machine ";
                        price = 75000;
                        cout << "Washing Machine = " << price << "\n"; break;
                    case 4:
                        productName = "Air Conditioner ";
                        price = 46000;
                        cout << "Air Conditioner (Split AC) = " << price << "\n"; break;
                    case 5:
                        productName = "Fan ";
                        price = 12000;
                        cout << "Fan = " << price << "\n"; break;
                    case 6:
                        productName = "Phone Charger ";
                        price = 22000;
                        cout << "Phone Charger = " << price << "\n"; break;
                    case 7:
                        productName = "Electric Iron ";
                        price = 250000;
                        cout << "Electric Iron = " << price << "\n";  break;
                    case 8:
                        productName = "Vacuum Cleaner ";
                        price = 200000;
                        cout << "Vacuum Cleaner = " << price << "\n"; break;
                    case 9:
                        productName = "Water Dispenser  ";
                        price = 550000;
                        cout << "Water Dispenser = " << price << "\n"; break;
                    case 10:
                        productName = "Electric Cooke ";
                        price = 600000;
                        cout << "Electric Cooke = " << price << "\n"; break;
                    case 11:
                        productName = "Juicer ";
                        price = 780000;
                        cout << "Juicer  = " << price << "\n"; break;
                    case 12:
                        productName = "Meat Grinder ";
                        price = 5800000;
                        cout << "Meat Grinder = " << price << "\n"; break;
                    case 13:
                        productName = "Electric Oven ";
                        price = 50000;
                        cout << "Electric Oven = " << price << "\n"; break;
                    case 14:
                        productName = "Hand Blender ";
                        price = 70000;
                        cout << "Hand Blender = " << price << "\n"; break;
                    case 15:
                        productName = "Vegetable Chopper ";
                        price = 90000;
                        cout << "Vegetable Chopper = " << price << "\n"; break;
                    case 16:
                        productName = "Blender ";
                        price = 80000;
                        cout << "Blender = " << price << "\n";  break;
                    case 17:
                        productName = "Juicer / Blender  ";
                        price = 40000;
                        cout << "Juicer / Blender = " << price << "\n"; break;
                    case 18:
                        productName = "Coffee Grinder ";
                        price = 600000;
                        cout << "Coffee Grinder = " << price << "\n"; break;
                    case 19:
                        productName = "Laptop ";
                        price = 950000;
                        cout << "Laptop = " << price << "\n"; break;
                    case 20:
                        productName = "Game Console ";
                        price = 69000;
                        cout << "Game Console = " << price << "\n"; break;
                    case 21:
                        productName = "Satellite Receiver ";
                        price = 70000;
                        cout << "Satellite Receiver = " << price << "\n"; break;
                    case 22:
                        productName = "Television (TV) ";
                        price = 250000;
                        cout << "Television (TV) = " << price << "\n"; break;
                    default:
                        cout << "Invalid choice!!"; break;
                    }
                    if (price != 0)
                    {
                        cout << " Enter quantity :";
                        cin >> quantity;
                        itemTotal = price * quantity;
                        invoiceDetails += " Product Name --> " + productName + " / Quantity --> " + to_string(quantity) + " / Unit Price --> " + to_string(itemTotal) + "\n";
                        cout << " itemTotal = " << itemTotal << "\n";
                        cout << productName << price << " * " << quantity << " = " << itemTotal << "IQD\n";
                        totalprice += itemTotal;
                        break;
                    }
                case 3:
                    cout << "==*== Discover our items and Enter a product number to see the price and add it to your order. ==*==\n";
                    cout << " 1) Pencil \t \t 2) Color Pencil / Crayon \n 3) Whiteboard Marker \t 4) Marker \n";
                    cout << " 5) Ballpoint Pen \t 6) pen \n 7) Grid Notebook \t 8) File / Folder \n 9) Paper \t\t 10) Drawing Book \n";
                    cout << " 11) Notebook \t\t 12) Calculator \n 13) Stickers \t\t 14) Homework Notebook  \n ";
                    cout << "15) School Bag \t 16) School Bag \n 17) Water Bottle  \t 18) Set Square \n ";
                    cout << "19) Protractor \t 20) Compass \n 21) Eraser \t\t 22) Ruler  \n ";
                    cout << "23) Color Pencils \t 24) Watercolors \n 25) Crayons \t\t 26) Glue \n 27) Scissors\n ";
                    cin >> y;
                    switch (y) //* school supplies
                    {
                    case 1:
                        productName = "Pencil ";
                        price = 500;
                        cout << "Pencil = " << price << "\n"; break;
                    case 2:
                        productName = "Color Pencil / Crayon ";
                        price = 500;
                        cout << "Color Pencil / Crayon = " << price << "\n"; break;
                    case 3:
                        productName = "Whiteboard Marker ";
                        price = 750;
                        cout << "Whiteboard Marker = " << price << "\n"; break;
                    case 4:
                        productName = "Marker  ";
                        price = 250;
                        cout << "Marker = " << price << "\n"; break;
                    case 5:
                        productName = "Ballpoint Pen  ";
                        price = 250;
                        cout << "Ballpoint Pen = " << price << "\n"; break;
                    case 6:
                        productName = "pen ";
                        price = 500;
                        cout << "pen = " << price << "\n"; break;
                    case 7:
                        productName = "Grid Notebook ";
                        price = 500;
                        cout << "Grid Notebook = " << price << "\n"; break;
                    case 8:
                        productName = "File / Folder ";
                        price = 1000;
                        cout << "File / Folder = " << price << "\n"; break;
                    case 9:
                        productName = "Paper ";
                        price = 250;
                        cout << "Paper = " << price << "\n"; break;
                    case 10:
                        productName = "Drawing Book ";
                        price = 500;
                        cout << "Drawing Book = " << price << "\n"; break;
                    case 11:
                        productName = "Notebook ";
                        price = 1000;
                        cout << "Notebook = " << price << "\n"; break;
                    case 12:
                        productName = "Calculator ";
                        price = 35000;
                        cout << "Calculator = " << price << "\n"; break;
                    case 13:
                        productName = "Stickers ";
                        price = 1000;
                        cout << "Stickers = " << price << "\n"; break;
                    case 14:
                        productName = "Homework Notebook ";
                        price = 2000;
                        cout << "Homework Notebook = " << price << "\n"; break;
                    case 15:
                        productName = "Stapler ";
                        price = 25000;
                        cout << "Stapler = " << price << "\n"; break;
                    case 16:
                        productName = "School Bag ";
                        price = 2500;
                        cout << "School Bag = " << price << "\n"; break;
                    case 17:
                        productName = "Water Bottle ";
                        price = 3000;
                        cout << "Water Bottle = " << price << "\n"; break;
                    case 18:
                        productName = "Set Square ";
                        price = 500;
                        cout << "Set Square = " << price << "\n"; break;
                    case 19:
                        productName = "Protractor ";
                        price = 500;
                        cout << "Protractor = " << price << "\n";break;
                    case 20:
                        productName = "Compass ";
                        price = 500;
                        cout << "Compass = " << price << "\n"; break;
                    case 21:
                        productName = "Eraser ";
                        price = 500;
                        cout << "Eraser = " << price << ""; break;
                    case 22:
                        productName = "Ruler ";
                        price = 500;
                        cout << "Ruler = " << price << ""; break;
                    case 23:
                        productName = "Color Pencils ";
                        price = 2000;
                        cout << "Color Pencils = " << price << "\n"; break;
                    case 24:
                        productName = "Watercolors ";
                        price = 1500;
                        cout << "Watercolors = " << price << "\n"; break;
                    case 25:
                        productName = "Crayons ";
                        price = 500;
                        cout << "Crayons = " << price << "\n"; break;
                    case 26:
                        productName = "Glue ";
                        price = 500;
                        cout << "Glue = " << price << "\n"; break;
                    case 27:
                        productName = "Scissors ";
                        price = 1000;
                        cout << "Scissors = " << price << "\n"; break;
                    default:
                        cout << "Invalid choice!!" << endl; break;
                    }
                    if (price != 0)
                    {
                        cout << " Enter quantity :";
                        cin >> quantity;
                        itemTotal = price * quantity;
                        invoiceDetails += " Product Name --> " + productName + " / Quantity --> " + to_string(quantity) + " / Unit Price --> " + to_string(itemTotal) + "\n";
                        cout << " itemTotal = " << itemTotal << "\n";
                        cout << productName << price << " * " << quantity << " = " << itemTotal << "IQD\n";
                        totalprice += itemTotal;
                        break;
                    }
                case 4:
                    cout << "==*== Discover our items and Enter a product number to see the price and add it to your order. ==*==\n";
                    cout << " 1) Shirt \t\t 2) Dress Shirt \n 3) Blouse \t\t 4) Sweater \n 5) Knitwear  \t\t 6) Jacket \n ";
                    cout << "7) Coat \t\t 8) Vest \n 9) Suit \t\t 10) Pajamas \n 11) Sleepwear \t\t 12) Tracksuit  \n ";
                    cout << "13) Sportswear \t 14) Sneakers \n 15) Dress \t\t 16) Evening Dress  \n 17) Short Dress  \t 18) Long Dress \n ";
                    cout << "19) Formal Dress \t 20) Abaya \n 21) Overcoat \t\t 22) Fur Coat \n 23) Raincoat \t\t 24) Cape \n 25) Sneakers \t\t 26) Shoes \n ";
                    cout << "27) High Heels\t\t 28) Boots \n 29) Ankle Boots  \t 30) Flats \n 31) Open Shoes \n ";
                    cin >> y;
                    switch (y) //* fashion and accessories section
                    {
                    case 1:
                        productName = "Shirt ";
                        price = 50000;
                        cout << "Shirt = " << price << "\n"; break;
                    case 2:
                        productName = "Dress Shirt ";
                        price = 25000;
                        cout << "Dress Shirt = " << price << "\n"; break;
                    case 3:
                        productName = "Blouse  ";
                        price = 15000;
                        cout << "Blouse = " << price << "\n"; break;
                    case 4:
                        productName = "Sweater ";
                        price = 5000;
                        cout << "Sweater = " << price << "\n"; break;
                    case 5:
                        productName = "Knitwear ";
                        price = 10000;
                        cout << "Knitwear = " << price << "\n"; break;
                    case 6:
                        productName = "Jacket ";
                        price = 50000;
                        cout << "Jacket = " << price << "\n"; break;
                    case 7:
                        productName = "Coat ";
                        price = 8000;
                        cout << "Coat = " << price << "\n"; break;
                    case 8:
                        productName = "Vest ";
                        price = 20000;
                        cout << "Vest = " << price << "\n"; break;
                    case 9:
                        productName = "Suit  ";
                        price = 30000;
                        cout << "Suit = " << price << "\n"; break;
                    case 10:
                        productName = "Pajamas ";
                        price = 5000;
                        cout << "Pajamas = " << price << "\n"; break;
                    case 11:
                        productName = "Sleepwear  ";
                        price = 5000;
                        cout << "Sleepwear = " << price << "\n"; break;
                    case 12:
                        productName = "Tracksuit ";
                        price = 15000;
                        cout << "Tracksuit = " << price << "\n"; break;
                    case 13:
                        productName = "Sportswear ";
                        price = 5000;
                        cout << "Sportswear = " << price << "\n"; break;
                    case 14:
                        productName = "Sneakers ";
                        price = 15000;
                        cout << "Sneakers = " << price << "\n"; break;
                    case 15:
                        productName = "Dress ";
                        price = 90000;
                        cout << "Dress = " << price << "\n"; break;
                    case 16:
                        productName = "Evening Dress ";
                        price = 55000;
                        cout << "Evening Dress = " << price << "\n";break;
                    case 17:
                        productName = "Short Dress ";
                        price = 80000;
                        cout << "Short Dress = " << price << "\n"; break;
                    case 18:
                        productName = "Long Dress ";
                        price = 60000;
                        cout << "Long Dress = " << price << "\n"; break;
                    case 19:
                        productName = "Formal Dress ";
                        price = 30000;
                        cout << "Formal Dress = " << price << "\n"; break;
                    case 20:
                        productName = "Abaya ";
                        price = 155000;
                        cout << "Abaya = " << price << "\n"; break;
                    case 21:productName = "Overcoat ";
                        price = 5000;
                        cout << "Overcoat = " << price << "\n"; break;
                    case 22:productName = "Fur Coat ";
                        price = 16000;
                        cout << "Fur Coat = " << price << "\n"; break;
                    case 23:productName = "Raincoat ";
                        price = 10000;
                        cout << "Raincoat = " << price << "\n"; break;
                    case 24:productName = "Cape ";
                        price = 500;
                        cout << "Cape = " << price << "\n"; break;
                    case 25:productName = "Sneakers ";
                        price = 25000;
                        cout << "Sneakers = " << price << "\n"; break;
                    case 26:productName = "Shoes ";
                        price = 35000;
                        cout << "Shoes = " << price << "\n"; break;
                    case 27:productName = "High Heels ";
                        price = 55000;
                        cout << "High Heels = " << price << "\n"; break;
                    case 28:productName = "Boots ";
                        price = 500;
                        cout << "Boots = " << price << "\n"; break;
                    case 29: productName = "Ankle Boots ";
                        price = 25000;
                        cout << "Ankle Boots = " << price << "\n"; break;
                    case 30:productName = "Flats ";
                        price = 500;
                        cout << "Flats = " << price << "\n"; break;
                    case 31:productName = "Open Shoes ";
                        price = 15000;
                        cout << "Open Shoes = " << price << "\n";break;
                    default:
                        cout << "Invalid choice!!"; break;
                    }
                    if (price != 0)
                    {
                        cout << " Enter quantity :";
                        cin >> quantity;
                        itemTotal = price * quantity;
                        invoiceDetails +=" Product Name --> " + productName + " / Quantity --> " + to_string(quantity) + " / Unit Price --> " + to_string(itemTotal) + "\n";
                        cout << " itemTotal = " << itemTotal << "\n";
                        cout << productName << price << " * " << quantity << " = " << itemTotal << "IQD\n";
                        totalprice += itemTotal;
                        break;
                    }
                    default:
                        cout << "invalid input !" << endl;
                        break;
                }
                system("pause");
                cin.get();
                system("cls");
                cout << " Do you want to add more items to your cart ? \n";
                cout << "Press 1 to continue shopping or 0 to view the invoice :";
                cin >> count;
                cin.get();
                system("cls");
            } while (count == 1);
            cout << "Do you want to add more items ?? " << endl;
            cout << "press 1) Yes, return to main menu \n press 0) No, view invoice : ";
            cin >> count;
        }
        while (count == 1);
        cin.get();
        system("cls");
        cout << "\nEnter Year , Month , Day :";
        cin >> Year >> Month >> Day;
        cout << "\n====*==== INVOICE ====*====\n";
        cout << Year << "/" << Month << "/" << Day << "\n";
        cout << " CustomerName : " << CustomerName << "\n";
        cout << invoiceDetails << endl;
        cout << " totalprice : " << totalprice << "IQD\n";
        cout << "\n Your invoice has been successfully processed.\n";
        cout << " Thank you for choosing our system.\n";
        cout << " We wish you a wonderful shopping experience.\n";
        cout << "\n *============***===========*\n\n";
        return 0;
    }
    system("pause");
    cin.get();
    system("cls");
}
