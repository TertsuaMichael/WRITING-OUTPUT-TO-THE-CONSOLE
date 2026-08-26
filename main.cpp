#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    double brick=10000;
    cout<<"Brick=       $"<<brick<<endl;

    //T-Funds
    double Tfunds=.58*brick;
    cout<<"T-Funds=     $"<<Tfunds<<endl;

    double Workstation=.10 * brick;
    cout<<"Workstation= $"<<Workstation<<endl;

    double Family = .10 * brick;
    cout<<"Family=      $"<<Family<<endl;

    double Investments = .05 * brick;
    cout<<"Investments= $"<<Investments<<endl;

    double Clothes = .02 * brick;
    cout<<"Clothes=     $"<<Clothes<<endl;

    double Sisters = .01 * brick;
    cout<<"Sisters=     $"<<Sisters<<endl;

    double Charity = .03 * brick;
    cout<<"Charity=     $"<<Charity<<endl;

    double Apartment = .05 * brick;
    cout<<"Apartment=   $"<<Apartment<<endl;

    double Expenses = .06 * brick;
    cout<<"Expenses=    $"<<Expenses<<endl;

    double net_allocation =Workstation+Family+Investments+Clothes+Sisters+Charity+Apartment+Expenses;
    cout<<"Bugdet=      $"<<net_allocation;


    return 0;

}
