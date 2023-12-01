#include <iostream>
#include <fstream>
#include <string>
#include <regex>



void isNumber(char *input, char *goal, int *setToLast){
	if (*input  == '1' || *input  == '2' || *input  == '3' || *input  == '4' || *input  == '5' || *input  == '6' || *input  == '7' || *input  == '8' || *input  == '9' || *input == '0'){
		*goal = *input; 
		*setToLast +=1;
	}
	else if (input[0] == 'o' && input[1] == 'n'&&  input[2] == 'e' ){*goal = '1'; *setToLast += 1; }
        else if (input[0] == 't' &&  input[1] =='w' && input[2] == 'o'){*goal = '2'; *setToLast += 1;  }
        else if (input[0] == 't' &&  input[1] == 'h' && input[2] == 'r' && input[3]== 'e' && input[4] =='e' ){*goal = '3'; *setToLast += 1;  }
        else if (input[0] == 'f' && input[1] == 'o' && input[2] == 'u' && input[3] =='r'){*goal = '4'; *setToLast += 1;  }
        else if (input[0] == 'f' &&  input[1] == 'i' && input[2] == 'v' && input[3] == 'e'){*goal = '5'; *setToLast += 1;  }
        else if (input[0] == 's' && input[1] == 'i' && input[2] =='x'){*goal = '6'; *setToLast += 1;  }
        else if (input[0] == 's' &&  input[1] == 'e' && input[2] == 'v' && input[3] =='e' && input[4] =='n'){*goal = '7'; *setToLast += 1;  }
        else if (input[0] == 'e' &&  input[1] =='i' && input[2] == 'g' && input[3] == 'h' && input[4] == 't' ){*goal = '8'; *setToLast += 1;  }
        else if (input[0] == 'n' && input[1] =='i' && input[2] =='n' && input[3] == 'e'){*goal = '9'; *setToLast += 1;  }

}

int main(int argc, char **argv){

	std::ifstream inputfile(argv[1]);
	std::string line;
	char *ptr;
	int result;
	int sum = 0;
	int rotation = 0;
	while (!inputfile.eof()){
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
		std::cout << ++rotation << ". first: "<< first <<" last:" <<last << "\n";
		if(last=='0')result=first -'0'+(first-'0')*10;
		else result =(first-'0')*10+last-'0';
		std::cout << "result: "<<result << "\n";
		sum += result;
	}
	std::cout << sum <<"\n";
	return 0;
}
