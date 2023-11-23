#include <iostream>

using namespace std;

int main(){
    double income = 95000;

    int sales_tax = 2 ;
    int income_tax = 5 ;
    double sales_tax_deduction = 0.02 * income;
    double income_tax_deduction = 0.05 * income;
    income = income - sales_tax_deduction - income_tax_deduction;
    cout << "The current income = " << income << endl;
    cout << "The sales_tax_deduction = " << sales_tax_deduction << endl;
    cout << "The income_tax_deduction = " << income_tax_deduction << endl;
  

}