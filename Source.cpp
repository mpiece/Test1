#pragma once
#include <iostream>
#include <string>
#include "Car.h"


using namespace std;
void print(){
	cout << "Hej!" << endl;
}

int main(int argc, char *argv){
	cout << "hello world!"<< endl;
	cout << " test 1" <<endl;
	cout << "test 2 " << endl;
	cout << "test 3" << endl;
	cout << "test 4" << endl;
	print();
	Car car("BMW");
	cout << car << endl;
	return 0;

	

}
