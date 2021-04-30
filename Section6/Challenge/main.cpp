#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
    
    cout << "$25 for small room, $35 for large room." << endl;
    cout << "Tax is 6%" << endl;
    
    const double priceSmall{25.0};
    const double priceLarge{35.0};
    const double salesTax{0.06};
    
    cout << "Enter the amount of small rooms you want cleaned: ";
    int sRooms{0};
    cin >> sRooms;
    
    cout << "Enter the amount of large rooms you want cleaned: ";
    int lRooms{0};
    cin >> lRooms;
    
    cout << "Total amount calculated." << endl;
    
    cout << "Total amount: $" << ((priceSmall * sRooms) + (priceLarge * lRooms)) + ((priceSmall * sRooms) + (priceLarge * lRooms)) * salesTax << endl;
    

    

    
    
}
	
