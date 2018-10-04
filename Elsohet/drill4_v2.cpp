#include "std_lib_facilities.h"

int main () 
{
    double bekert_ertek;
    double val_sum=0.0;
    string mert_egys;
    vector<double> ertek;

    cout << "Please enter values in m/in/cm/ft below : \n";

    while (cin >> bekert_ertek >> mert_egys)
    {


        if (mert_egys == "m")

            bekert_ertek=bekert_ertek;

        else if (mert_egys == "cm")

            bekert_ertek = bekert_ertek/100;

        else if (mert_egys == "in")

            bekert_ertek = bekert_ertek*0.3048;

        else if (mert_egys == "ft")

            bekert_ertek=bekert_ertek*0.254;

        else {
            cout << "Hibas bemeneti ertek.\n";
            }

        ertek.push_back(bekert_ertek);
        val_sum +=bekert_ertek;

    }

    double min=0;
    
    for(int i=1; i<ertek.size();++i)
    {
        if(ertek[i]<ertek[min])
        {
            min=i;
        }
    }

    double max=0;

    for(int i=1; i<ertek.size();++i)
    {
        if(ertek[i]>ertek[max])
        {
            max=i;
        }
    }

    sort(ertek);

    cout << "Sorted values: ";

    for (int i = 0; i < ertek.size(); ++i)
        cout << ertek[i] << "m, \n";
    
    cout<<"Sum of the values: "<<val_sum<<" m\n";
    cout<<"The largest value: "<<ertek[max]<<" m\n";
    cout<<"The smallest value: "<<ertek[min]<<" m\n";
    
    return 0;
}
