#include <iostream>
#include "main.h"

float GasCounter:: GetQmax()
{
    return Qmax;
}
string GasCounter::GetName()
{
    return Name;
}
float GasCounter::GetInterCenterDistanceBetweenFittings()
{
    return InterCenterDistanceBetweenFittings;
}
int GasCounter::GetNumTab()
{
    return NumTab;
}
string GasCounter::GetNameOfModel()
{
    return NameOfModel;
}
GasCounter::GasCounter(){}
GasCounter::GasCounter(float r_Qmax, float r_InterCenterDistanceBetweenFittings, string r_Name, int r_NumTab, string r_NameOfModel)
{
    Qmax = r_Qmax;
    Name = r_Name;
    InterCenterDistanceBetweenFittings = r_InterCenterDistanceBetweenFittings;
    NumTab = r_NumTab;
    NameOfModel = r_NameOfModel;
}
GasCounter:: ~GasCounter(){}

void GasCounter::PrintClassLines()
{
    cout << "\tName of model: " << GetNameOfModel() << "\n";
    cout << "\tVolumetric flow rate: " << GetQmax() << " m^3/h" << "\n";
    cout << "\tName: " << GetName() << "\n";
    cout << "\tDistance Between Fittings: " << GetInterCenterDistanceBetweenFittings() << "\n";
    cout << "\tInter-calibration interval: " << GetNumTab() << "\n";
    cout << "\tThe capacity of the counting device: " << StoreGas << "\n";
    cout << "\tApointment: " << Appointment << "\n";
    cout << "\n";
}
