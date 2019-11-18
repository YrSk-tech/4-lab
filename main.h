#pragma once
#include <iostream>
using namespace std;

class GasCounter
{
    private:

        float Qmax ;
        float InterCenterDistanceBetweenFittings;
        string Name;

    protected:

        int NumTab;
        string NameOfModel;

    public:
        string Appointment;
        int StoreGas;

        float GetQmax();
        float GetInterCenterDistanceBetweenFittings();
        string GetName();
        int GetNumTab();
        string GetNameOfModel();

        void PrintClassLines();

    GasCounter();
    GasCounter(float r_Qmax, float r_InterCenterDistanceBetweenFittings, string r_Name, int r_NumTab, string r_NameOfModel);
    ~GasCounter();
};