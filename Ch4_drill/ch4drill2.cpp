#include "std_lib_facilities.h"


constexpr double cm_to_m {0.01};
constexpr double in_to_m {2.54*cm_to_m};
constexpr double ft_to_m {12.0*in_to_m};
const vector<string> legal_units {"cm","m","in","ft"};

bool legalUnit(string unit)
{
    bool legal = false;
    for (auto legal_unit : legal_units)
    {
        if (unit == legal_unit)
        {
            legal = true;
        }

    }
    return legal;
}

void printLegalUnits()
{
    cout << "\tcm for centimeters\n"
            << "\tm for meters\n"
            << "\tin for inches\n"
            << "\tft for feet\n";
}

double convertToMeter(double a , string unit)
{
    if ("cm" == unit)
    {
        return a * cm_to_m;
    }
    else if ("in" == unit)
    {
        return a * in_to_m;
    }
    else if ("ft" == unit)
    {
        return a * ft_to_m;
    }
    else {
        return a;
    }
}


int main()
{
	double a;
	double aMeter;
	double smallest;
	double largest;
	string unit{" "};
	int count;
	double sum;
	vector<double>values(0);
	
	cout << "Please give a double value and a unit: \n";
	
	printLegalUnits();
	
	while(cin >> a >> unit) 
	{
		
		if (legalUnit(unit))
        	{
            		aMeter = convertToMeter(a, unit);
            		cout << a << unit;
            		if (unit != "m")
            		{
                		cout << " (" << aMeter << "m)";
            		}
            	
		if(0 == count)
		{
			smallest = a;
			largest = a;
			
			cout << " is the first (smallest,largest)\n";
		}
		else if(aMeter < smallest)
		{
			cout << " the smallest so far. \n";
			smallest = aMeter;
		}
		else if(aMeter > largest)
		{
			cout << " the largest so far. \n";
			largest = aMeter;
		}
		else
		{
			cout << "\n";
		}
		sum += aMeter;
		values.push_back(aMeter);
		count++;
	}
	else {
            cout << "Error: no legal unit. Enter one of \n";
            printLegalUnits();
		}
	}
	
	cout << "The smallest: " << smallest << "m\n";
	cout << "The largest: " << largest << "m\n";
	cout << "Number of values entered: " << count << '\n';
	cout << "The sum of values: " << sum << "m\n";
         
	sort(values);
        
	cout << "The entered values: ";
		for (auto value : values)
		{
			cout << value << " ";
		}
		        cout << '\n';
     
       	return 0;
}
