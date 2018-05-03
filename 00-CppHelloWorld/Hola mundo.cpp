#include <iostream>
#include <fstream>
int main (){
	std::string grade [10];
	std::fstream textfile;
	textfile.open("Hola mundo.txt"); 
	std::cout << "Hola Mundo!\n";
}
textfile.close();
