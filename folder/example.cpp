#include <iostream>
#include <String>

using namespace std;

int main(args []){

	if(args.size()>0){
		std::cout<<"args[0]";
	}
	else
	std::cout<<"no arguments where used in command line"<<std::endl;
}