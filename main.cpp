/* 
Asignacion 1: Binary Digit
Nombre: Nestor Martinez
Num. Est: 802-22-3069
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double adultTickets, childTickets, adultSales, childSales, grossProfit;
    adultSales = adultTickets * 10.0;
    childSales = childTickets * 6.0;
    grossProfit = adultSales + childSales;
    

    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.\n";
    cout << "\n";

    cout << "Enter the name of the movie: ";
    getline(cin, name);

    cout << "Enter the amount of adult tickets sold: ";
    cin >> adultTickets;

    cout << "Enter the amount of child tickets sold: ";
    cin >> childTickets;


    cout << "\n";
    cout << setprecision(2) << fixed;
    cout << "Movie name:" << setw(18) << name << endl;
    cout << "Adult Tickets Sold:" << setw(10) << adultTickets << endl;
    cout << "Child Tickets Sold:" << setw(10) << childTickets << endl;
    cout << "Gross Box Office Profit:" << setw(5) << grossProfit << endl;
    cout << "Net Box Office Profit:" << setw(7) << adultTickets << endl;
    cout << "Amount Paid to Distributor: " << adultTickets << endl;


    return 0;
}
