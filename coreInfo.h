
#include <iomanip>

class CoreInfo
{
	int id;  	
	string gov;    	
	double freq_min;    	
	double freq_max;
	double freq_cur;

	double energy_package;
	double energy_dram;
	double energy_core;

	double power;

	int obj;
	 
public:
  CoreInfo();
  CoreInfo(int, string, double, double, double, double, double, double, double);
  void printCoreInfo();
  double getCoreFreq();
  int getCoreId();
  double getCoreEnergyPackage();
};




////////////////////////////implementation


CoreInfo::CoreInfo(int i, string g, double fmin, double fmax, double fcur, double ep, double ed, double ec, double p)
{
	id = i;  	
	gov = g;    	
	freq_min = fmin;    	
	freq_max = fmax;
	freq_cur = fcur;

	energy_package = ep;
	energy_dram = ed;
	energy_core = ec;

	power = p;
	
	//cout << "new obj!!!" << id << endl;
}

int CoreInfo::getCoreId()
{
	return id;
}

double CoreInfo::getCoreFreq()
{
	return freq_cur;
}

double CoreInfo::getCoreEnergyPackage()
{
	return energy_package;
}

void CoreInfo::printCoreInfo()
{
/*  cout << "Id: " 		<< id << endl;
  cout << "Gov: " 		<< gov << endl;
  cout << "Frequency min: " 	<< freq_min << endl;
  cout << "Frequency max: " 	<< freq_max << endl;
  cout << "Frequency cur: " 	<< freq_cur << endl;  
  cout << "Energy_package: " 	<< energy_package << endl;  
  cout << "Energy_dram: " 	<< energy_dram << endl;  
  cout << "Energy_core: " 	<< energy_core << endl;  
  cout << "Power: 	"	<< power << endl << endl;  

*/
//  cout 	<< "Id: " << "Gov: " << "Frequency min: " << "Frequency max: " 	<< "Frequency cur: " << "Energy_package: " << "Energy_dram: " << "Energy_core: " << "Power: 	" << endl;	

  std::cout << std::setw(2)	<< id << "|" << gov << "|" << std::setw(10) << freq_min << "|" << std::setw(10) << freq_max << "|" << std::setw(10) << freq_cur << "|" << std::setw(10) << energy_package << "|" << std::setw(10) << energy_dram << "|" << std::setw(10) << energy_core << "|" << std::setw(10) << power << "|" << endl;  

}

