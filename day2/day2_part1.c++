#include <iostream>
#include <fstream>
#include <string>

void isRGB(char * input, int * red, int * green, int * blue, char** inputptr){
	if (*input == ';'){
		std::cout << "Red: " << *red << " Blue: " << *blue << " Green: " << *green <<"\n";
		*red =0; *blue=0; *green=0; }
	if (*input  == '1' || *input  == '2' || *input  == '3' || *input  == '4' || *input  == '5' || *input  == '6' || *input  == '7' || *input  == '8' || *input  == '9' || *input == '0'){
		if (input[1]  == '1' || input[1]  == '2' || input[1]  == '3' || input[1]  == '4' || input[1]  == '5' || input[1]  == '6' || input[1]  == '7' || input[1]  == '8' || input[1]  == '9' || input[1] == '0'){
			if(input[3] == 'b' && input[4] == 'l' && input[5] == 'u' && input[6] == 'e'){char num[3] ={0,0, '\0' }; num[0]= *input; num[1]=*(input+1); *blue = std::stoi(num); *inputptr +=1;}
			if(input[3] == 'r' && input[4] == 'e' && input[5] == 'd' ){char num[3] ={0,0, '\0' }; num[0]= *input; num[1]=*(input+1); *red= std::stoi(num); *inputptr+=1;}
			if(input[3] == 'g' && input[4] == 'r' && input[5] == 'e' && input[6] == 'e' && input[7] == 'n'){ char num[3] ={0,0, '\0' }; num[0]= *input; num[1]=*(input+1);*green= std::stoi(num); *inputptr +=1; }
		}
		else{
			if(input[2] == 'b' && input[3] == 'l' && input[4] == 'u' && input[5] == 'e'){*blue += (*input -'0'); }
			if(input[2] == 'r' && input[3] == 'e' && input[4] == 'd' ){*red += (*input -'0'); }
			if(input[2] == 'g' && input[3] == 'r' && input[4] == 'e' && input[5] == 'e' && input[6] == 'n'){*green += (*input -'0'); }
		}
	}
}

int  main(int argc, char **argv){
	std::ifstream inputfile(argv[1]);
	std::string line;
	int red, green, blue;
	int sum=0;
	char* ptr = NULL;
	int iteration = 1;
	for (int k = 0; k<100; k++){
		int isImpossible=0;
		std::getline(inputfile, line);
		ptr = line.data();
		red=0;
		blue=0;
		green=0;
		for (int i=0; i<line.size(); i++){
			isRGB(ptr, &red, &green, &blue, &ptr );
			ptr++;
			if (red>12 || green > 13 || blue > 14){
				isImpossible++;
			}
		}
		if (isImpossible==0){
			sum+=iteration;
		}
		else {
			std::cout << "Game " << iteration << " is not possible\n";
		}
			iteration++;
	}
	std::cout << "Result: " << sum << "\n";
	return 0;
}
