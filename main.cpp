/* 
Lab 1: Box Office
Nombre: Nestor A. Martinez Rivera
Num. Est: 802-22-3069
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double adultTickets, childTickets, adultSales, childSales, grossProfit, netProfit, distributorProfit;


    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.\n";
    cout << "\n";

    cout << "Enter the name of the movie: ";
    getline(cin, name);

    cout << "Enter the amount of adult tickets sold: ";
    cin >> adultTickets;

    cout << "Enter the amount of child tickets sold: ";
    cin >> childTickets;


    adultSales = adultTickets * 10.0;
    childSales = childTickets * 6.0;
    grossProfit = adultSales + childSales;
    netProfit = grossProfit * 0.2;
    distributorProfit = grossProfit - netProfit; 


    cout << "\n";
    cout << setprecision(2) << fixed;
    cout << left << setw(30) << "Movie Name:" << "\"" + name + "\"" << endl;
    cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(10) << static_cast<int>(adultTickets) << endl;
    cout << left << setw(30) << "Child Tickets Sold:" << right << setw(10) << static_cast<int>(childTickets) << endl;
    cout << left << setw(30) << "Gross Box Office Profit:" << "$" << setw(9) << right << grossProfit << endl;
    cout << left << setw(30) << "Net Box Office Profit:" << "$" << setw(9) << right << netProfit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:" << "$" << setw(9) << right << distributorProfit << endl;

    return 0;
}
