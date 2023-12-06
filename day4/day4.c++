#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <ctype.h>
#include <cmath>



int main(int argc, char **argv){
	
	char  array[10][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	int sum=0;
	std::ifstream inputfile(argv[1]);
	std::string line;
	while (!inputfile.eof()){
		int bonus=0;
		std::getline(inputfile, line);
		int winningNumberCount=0;
		char * ptr = line.data();
		while (*ptr++ !=':');
		while (winningNumberCount < 10){
			if (isdigit(*ptr) && *(ptr+1) == ' '){
				array[winningNumberCount++][0]=*ptr++;
			}			
			else if ( isdigit(*ptr) && isdigit(*(ptr+1))){
				array[winningNumberCount][0]=*ptr++;
				array[winningNumberCount++][1]=*ptr++;
			}
			else {
				ptr++;
			}
		}
		while(*ptr!=0){
			if (isdigit(*ptr) && *(ptr+1) == ' ' || isdigit(*ptr) && *(ptr+1) == 0){
				char a[2] = {*ptr++, 0};
				for (int i=0; i<10; i++){
					if ( strncmp(a, array[i], 2)==0){
						bonus++;
					}
				}
			}			
			else if ( isdigit(*ptr) && isdigit( *(ptr+1)) ){
				char a[3] = {*ptr++,*ptr++, 0};
				for (int i=0; i<10; i++){
					if(strncmp(array[i], a, 2)==0){
						bonus++;
					}
				}
			}
			else{
				ptr++;
			}
		}	
		bonus = pow(2, bonus-1);
		sum+=bonus;
		for(int i=0; i<10; i++){
			array[i][0]=0;
			array[i][1]=0;
			array[i][2]=0;
		}
	}
	inputfile.close();
	std::cout << sum << "\n";
	return 0;

}
