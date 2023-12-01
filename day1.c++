#include <iostream>
#include <fstream>
#include <string>



void isNumber(char *input, char *goal, int *setToLast){
	if (*input  == '1' || *input  == '2' || *input  == '3' || *input  == '4' || *input  == '5' || *input  == '6' || *input  == '7' || *input  == '8' || *input  == '9' || *input == '0'){
		*goal = *input; 
		*setToLast +=1;
	}
}

int main(int argc, char **argv){

	std::ifstream inputfile(argv[1]);
	std::string line;
	char *ptr;
	int result;
	int sum = 0;
	while (!inputfile.eof()){
		int result=0;
		std::getline(inputfile, line);
		ptr=line.data();
		char first = '0';
		char last = '0';
		int setToLast = 0;
		for (int i =0; i<line.size(); i++){
			if (!setToLast){
				isNumber(ptr, &first, &setToLast);
			}			
			else{
				isNumber(ptr, &last, &setToLast);
			}
			ptr++;
		}
		ptr=NULL;
		std::cout <<"first: "<< first <<" last:" <<last << "\n";
		if(last=='0')result=first -'0'+(first-'0')*10;
		else result =(first-'0')*10+last-'0';
		std::cout << "result: "<<result << "\n";
		sum += result;
	}
	std::cout << sum <<"\n";
	return 0;
}
