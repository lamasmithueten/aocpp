#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <ctype.h>
#include <cmath>



int main(int argc, char **argv){
	
	char  array[10][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	int wonCards[209];
	for (int i=0; i<209; i++){
		wonCards[i]=0;
	}
	int *arrayPtr=wonCards;
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
						std::cout << a << " ";
						bonus++;
					}
				}
			}			
			else if ( isdigit(*ptr) && isdigit( *(ptr+1)) ){
				char a[3] = {*ptr++,*ptr++, 0};
				for (int i=0; i<10; i++){
					if(strncmp(array[i], a, 2)==0){
						std::cout << a << " ";
						bonus++;
					}
				}
			}
			else{
				ptr++;
			}
		}	
		if (bonus>0){*arrayPtr+=1;}
		std::cout << *arrayPtr<< "\n";
		for (int i=1; i<=bonus; i++){
			*(arrayPtr+i)+=*arrayPtr;
		}
		for(int i=0; i<10; i++){
			array[i][0]=0;
			array[i][1]=0;
		}
		arrayPtr++;
	}
	for(int i=0; i<209; i++){
		std::cout << wonCards[i] << "\n";
		sum+=wonCards[i];
	}
	inputfile.close();
	std::cout <<  sum << "\n";
	return 0;

}
