#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <climits>
#include <chrono>

#include "typedefs.h"
#include "myFunctions.h"

// using namespace std;

int main() {
	std::cout<<"Hello, Ahmed!";
	mySeparate();

	// std::cout<<"-------------------------------------------------------------------------------------------"<<std::endl;

	// unsigned short var1 = 0xF0F0;			// prunes the MSBs 
	// cout << "Var1: 0x" << uppercase << hex << var1 << endl;	    
	// cout << dec;

	// cout << "Size of Double: " << sizeof(double) << endl;

	// cout << "Int Max: " << INT_MAX << endl;

	// cout << "Pi: " << M_PI << endl;

	// cout << setw(3) << 6 << endl;
	// cout << setw(3) << "+" << endl;
	// cout << setw(3) << 4 << endl;
	// cout << "---" << endl;
	// cout << setw(3) << 10 << endl;
	
	// double ff = 0.12345;
	// cout << ".2f: " << fixed << setprecision(2) << ff << endl; 

	//string str1;
	//cout << "Enter first name: ";
	//cin >> str1;
	//cout << "Str1: " << str1 << endl;	

	//string line1;
	//cout << "Enter full name: ";
	//getline(cin, line1);
	//getline(cin, line1);
	//cout << "Line1: " << line1 << endl;

	//string input1, input2, input3;
	//cout << "Enter: First|Second|Third: ";
	//getline(cin, input1, '|');
	//getline(cin, input2, '|');
	//cin >> input3;
	//cout << "In1: " << input1 << "\tIn2: " << input2 << "\tIn3: " << input3 << endl;

	// uint16 var3 = 1;
	// cout<<"I am unit16: "<<var3<<endl;

	


	// int iCount = 0;

	// for (int i = 1; i <= 100; ++i)
	// {
	// 	if (i % 4 == 0)
	// 		iCount++;
	// 	else if (i % 6 == 0 && i % 10 == 0)
	// 		iCount++;
	// }

    // int iCount = 0;
    // long long iterations = 0;  // Counter for total innermost executions

    // for (int a = 0; a < 100; ++a){
	// 	for (int b = 0; b < 100; ++b){
	// 		if((a+b) > 100) break;

    //         for (int c = 0; c < 100; ++c){
	// 			if((a+b+c) > 100) break;

    //             for (int d = 0; d < 100; ++d){
    //                 ++iterations; 
					
    //                 if (a + b + c + d == 100)
    //                     iCount++;
    //             }
	// 		}
	// 	}
	// }

    // std::cout << "iCount = " << iCount << std::endl;
    // std::cout << "Total innermost loop executions: " << std::scientific << 
	// 					std::setprecision(2) << static_cast<double>(iterations) << std::endl;

	uint32 v1=1, v2=2;
	mySwap(&v1, &v2);
	std::cout<<"V1: "<<v1<<"\t\t V2: "<<v2<<std::endl;

	uint32 var4 = 4; // static_cast<int>()

	mySeparate();
	std::cout<<"Goodbye, Ahmed!"<<std::endl;
	return 0;
}
