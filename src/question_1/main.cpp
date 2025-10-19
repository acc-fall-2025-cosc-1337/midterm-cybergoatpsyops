#include <iostream>
#include "question1.h"

using namespace std;

int main()
{
    double sales;
    char choice;
    
    do
    {
        cout << "Enter sales amount: ";
        cin >> sales;
        
        double commission = get_sales_commission(sales);
        
        cout << "Sales of " << sales << " yields a commission of " << commission << "." << endl;
        
        cout << "Do you want to calculate another commission? (y/n): ";
        cout << "Do you want to calculate another commission? (y/n): ";
        cin >> choice;
        cout << endl;
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}