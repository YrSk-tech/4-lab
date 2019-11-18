#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main()
{
    GasCounter Elster(2.5,250,"Elster",8,"Elster 45");
    Elster.StoreGas = 12;
    Elster.Appointment ="Gas Cheking";
    Elster.PrintClassLines();

    GasCounter Metrix(2.5,240,"Metrix",7 ,"Metrix C43");
    Metrix.StoreGas = 13;
    Metrix.Appointment = "Gas Cheking";
    Metrix.PrintClassLines();

    GasCounter Vizar(2.5, 250,"Vizar",8,"Vizar G4");
    Vizar.StoreGas = 14;
    Vizar.Appointment = "Gas Cheking";
    Vizar.PrintClassLines();

    return 0;
}
