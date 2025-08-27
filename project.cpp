#include <iostream>
#include <string>
using namespace std;

enum enrelegion {
	islam = 1 ,
	Christianity = 2 ,
	Judaism = 3 ,
	};

void print_list(){
	cout << "******************************" << endl ;
	cout << "                    relegion          " <<endl;
	cout << "******************************" << endl ;
	cout << "1- islam " << endl ;
	cout << "2- Christianity " << endl ;
	cout << "3- Judaism " << endl ;
	cout << "******************************" << endl ;
	cout << "please enter your relegion ? : " ;
	
}

enrelegion read_input(int &RI ) {

	
	cin >> RI ; 
	return (enrelegion)RI ;
	
	
	}

int write_result(int &RI){
	
	if (RI == 1) {
		cout << "your relegion is islam " ; 
	}
	else if (RI == 2) {
		cout << "your relegion is Christianity " ; 
	}
	else if (RI == 3) {
		cout << "your relegion is Judaism " ; 
	}
	else {
		cout << "wrong value, pleaserty again " ;
		}
	return 0 ;
}




int main()
{
	print_list();
	int RI ;
	
	read_input(RI) ;
	write_result(RI) ;
	
}