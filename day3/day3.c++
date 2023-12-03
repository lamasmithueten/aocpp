#include <iostream>
#include <fstream>
#include <string>


char matrix[140][140];
void checkNeighbours(int row, int column, int* sum, int* rowptr);
void checkTopRow(int row, int column, int *sum, int * rowptr);
void checkBottomRow(int row, int column, int *sum, int* rowptr);
void checkLeftSide(int row, int column, int *sum, int *rowptr);
void checkRightSide(int row, int column, int *sum, int *rowptr);
void checkTopLeft(int row, int column, int *sum, int * rowptr);
void checkBottomLeft(int row, int column, int *sum, int * rowptr);
int checkNextDigit(int row, int column);


int main (int argc, char** argv){

	int sum=0;
	std::ifstream inputfile(argv[1]);
	std::string line;
	for (int i=0; i<140; i++){
		std::getline(inputfile, line);
		char * inputptr = line.data();
		for (int j=0; j<140; j++){
			matrix[i][j] = *inputptr++;
		}
	}
	for (int i=0; i<140; i++){
		for (int j=0; j<140; j++){
			std::cout << sum << "\n";
			if(i ==0 && j==0){
				checkTopLeft(j, i, &sum, &i);
			}
			else if(i ==140 && j ==0){
				checkBottomLeft(j, i, &sum, &i);
			}
			else if(i == 0){
				checkTopRow(j, i, &sum, &i);
			}
			else if(i ==140){
				checkBottomRow(j, i, &sum, &i);
			}
			else if(j ==0){
				checkLeftSide(j, i, &sum, &i);
			}
			else if(j ==140){
				checkRightSide(j, i, &sum, &i);
			}
			else{
				checkNeighbours(j, i, &sum, &i);
			}
		}
	}
	std::cout << "Sum: " << sum <<"\n";
	return 0;
}


void checkNeighbours(int row, int column, int* sum, int *rowptr){
		std::cout << "neighbour\n";
		if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
			int neighbours= checkNextDigit(row, column);
			if (neighbours == 2){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row-1][column+2] != '1' || matrix[row-1][column+2] != '2' || matrix[row-1][column+2] != '3' || matrix[row-1][column+2] != '4' || matrix[row-1][column+2] != '5' || matrix[row-1][column+2] != '6' || matrix[row-1][column+2] != '7' || matrix[row-1][column+2] != '8' || matrix[row-1][column+2] != '9' || matrix[row-1][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column-1] != '0' || matrix[row+3][column+3] != '1' || matrix[row+3][column+3] != '2' || matrix[row+3][column+3] != '3' || matrix[row+3][column+3] != '4' || matrix[row+3][column+3] != '5' || matrix[row+3][column+3] != '6' || matrix[row+3][column+3] != '7' || matrix[row+3][column+3] != '8' || matrix[row+3][column+3] != '9' || matrix[row+3][column+3] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column] != '0' || matrix[row+3][column] != '1' || matrix[row+3][column] != '2' || matrix[row+3][column] != '3' || matrix[row+3][column] != '4' || matrix[row+3][column] != '5' || matrix[row+3][column] != '6' || matrix[row+3][column] != '7' || matrix[row+3][column] != '8' || matrix[row+3][column] != '9' || matrix[row+3][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column+1] != '0' || matrix[row+3][column+1] != '1' || matrix[row+3][column+1] != '2' || matrix[row+3][column+1] != '3' || matrix[row+3][column+1] != '4' || matrix[row+3][column+1] != '5' || matrix[row+3][column+1] != '6' || matrix[row+3][column+1] != '7' || matrix[row+3][column+1] != '8' || matrix[row+3][column+1] != '9' || matrix[row+3][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				
				*rowptr +=2;
			}	
			else if (neighbours ==1){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column] != '0' || matrix[row+2][column] != '1' || matrix[row+2][column] != '2' || matrix[row+2][column] != '3' || matrix[row+2][column] != '4' || matrix[row+2][column] != '5' || matrix[row+2][column] != '6' || matrix[row+2][column] != '7' || matrix[row+2][column] != '8' || matrix[row+2][column] != '9' || matrix[row+2][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=1;
			}
			else if (neighbours==0){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+2] != '1' || matrix[row][column+2] != '2' || matrix[row][column+2] != '3' || matrix[row][column+2] != '4' || matrix[row][column+2] != '5' || matrix[row][column+2] != '6' || matrix[row][column+2] != '7' || matrix[row][column+2] != '8' || matrix[row][column+2] != '9' || matrix[row][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column] != '0' || matrix[row+1][column] != '1' || matrix[row+1][column] != '2' || matrix[row+1][column] != '3' || matrix[row+1][column] != '4' || matrix[row+1][column] != '5' || matrix[row+1][column] != '6' || matrix[row+1][column] != '7' || matrix[row+1][column] != '8' || matrix[row+1][column] != '9' || matrix[row+1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

			}
		}
}

void checkTopRow(int row, int column,int *sum, int * rowptr){
	if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
		int neighbours= checkNextDigit(row, column);
		if (neighbours == 2){
				if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column] != '0' || matrix[row+3][column] != '1' || matrix[row+3][column] != '2' || matrix[row+3][column] != '3' || matrix[row+3][column] != '4' || matrix[row+3][column] != '5' || matrix[row+3][column] != '6' || matrix[row+3][column] != '7' || matrix[row+3][column] != '8' || matrix[row+3][column] != '9' || matrix[row+3][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column+1] != '0' || matrix[row+3][column+1] != '1' || matrix[row+3][column+1] != '2' || matrix[row+3][column+1] != '3' || matrix[row+3][column+1] != '4' || matrix[row+3][column+1] != '5' || matrix[row+3][column+1] != '6' || matrix[row+3][column+1] != '7' || matrix[row+3][column+1] != '8' || matrix[row+3][column+1] != '9' || matrix[row+3][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=2;


		}
		else if (neighbours ==1){
				if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column] != '0' || matrix[row+2][column] != '1' || matrix[row+2][column] != '2' || matrix[row+2][column] != '3' || matrix[row+2][column] != '4' || matrix[row+2][column] != '5' || matrix[row+2][column] != '6' || matrix[row+2][column] != '7' || matrix[row+2][column] != '8' || matrix[row+2][column] != '9' || matrix[row+2][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=1;

		}
		else if (neighbours == 0){
				if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column] != '0' || matrix[row][column+2] != '1' || matrix[row][column+2] != '2' || matrix[row][column+2] != '3' || matrix[row][column+2] != '4' || matrix[row][column+2] != '5' || matrix[row][column+2] != '6' || matrix[row][column+2] != '7' || matrix[row][column+2] != '8' || matrix[row][column+2] != '9' || matrix[row][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}


		}
		
	}	
}

void checkBottomRow(int row, int column, int *sum, int *rowptr){
		if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
			int neighbours= checkNextDigit(row, column);
			if (neighbours == 2){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column-1] != '0' || matrix[row+3][column-1] != '1' || matrix[row+3][column-1] != '2' || matrix[row+3][column-1] != '3' || matrix[row+3][column-1] != '4' || matrix[row+3][column-1] != '5' || matrix[row+3][column-1] != '6' || matrix[row+3][column-1] != '7' || matrix[row+3][column-1] != '8' || matrix[row+3][column-1] != '9' || matrix[row+3][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column] != '0' || matrix[row+3][column] != '1' || matrix[row+3][column] != '2' || matrix[row+3][column] != '3' || matrix[row+3][column] != '4' || matrix[row+3][column] != '5' || matrix[row+3][column] != '6' || matrix[row+3][column] != '7' || matrix[row+3][column] != '8' || matrix[row+3][column] != '9' || matrix[row+3][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=2;
			}	
			else if (neighbours ==1){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column] != '0' || matrix[row+2][column] != '1' || matrix[row+2][column] != '2' || matrix[row+2][column] != '3' || matrix[row+2][column] != '4' || matrix[row+2][column] != '5' || matrix[row+2][column] != '6' || matrix[row+2][column] != '7' || matrix[row+2][column] != '8' || matrix[row+2][column] != '9' || matrix[row+2][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=1;
			}
			else if (neighbours==0){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column] != '0' || matrix[row][column+2] != '1' || matrix[row][column+2] != '2' || matrix[row][column+2] != '3' || matrix[row][column+2] != '4' || matrix[row][column+2] != '5' || matrix[row][column+2] != '6' || matrix[row][column+2] != '7' || matrix[row][column+2] != '8' || matrix[row][column+2] != '9' || matrix[row][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
			}
		}
}

void checkLeftSide(int row, int column, int *sum, int *rowptr){
		if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
			int neighbours= checkNextDigit(row, column);
			if (neighbours == 2){

				if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column-1] != '0' || matrix[row+3][column-1] != '1' || matrix[row+3][column-1] != '2' || matrix[row+3][column-1] != '3' || matrix[row+3][column-1] != '4' || matrix[row+3][column-1] != '5' || matrix[row+3][column-1] != '6' || matrix[row+3][column-1] != '7' || matrix[row+3][column-1] != '8' || matrix[row+3][column-1] != '9' || matrix[row+3][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column] != '0' || matrix[row+3][column] != '1' || matrix[row+3][column] != '2' || matrix[row+3][column] != '3' || matrix[row+3][column] != '4' || matrix[row+3][column] != '5' || matrix[row+3][column] != '6' || matrix[row+3][column] != '7' || matrix[row+3][column] != '8' || matrix[row+3][column] != '9' || matrix[row+3][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+3] != '0' || matrix[row+2][column+3] != '1' || matrix[row+2][column+3] != '2' || matrix[row+2][column+3] != '3' || matrix[row+2][column+3] != '4' || matrix[row+2][column+3] != '5' || matrix[row+2][column+3] != '6' || matrix[row+2][column+3] != '7' || matrix[row+2][column+3] != '8' || matrix[row+2][column+3] != '9' || matrix[row+2][column+3] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				
				*rowptr +=2;
			}	
			else if (neighbours ==1){
				if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column] != '0' || matrix[row+2][column] != '1' || matrix[row+2][column] != '2' || matrix[row+2][column] != '3' || matrix[row+2][column] != '4' || matrix[row+2][column] != '5' || matrix[row+2][column] != '6' || matrix[row+2][column] != '7' || matrix[row+2][column] != '8' || matrix[row+2][column] != '9' || matrix[row+2][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=1;
			}
			else if (neighbours==0){
				if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column] != '0' || matrix[row][column+2] != '1' || matrix[row][column+2] != '2' || matrix[row][column+2] != '3' || matrix[row][column+2] != '4' || matrix[row][column+2] != '5' || matrix[row][column+2] != '6' || matrix[row][column+2] != '7' || matrix[row][column+2] != '8' || matrix[row][column+2] != '9' || matrix[row][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

			}
		}
}

void checkRightSide(int row, int column, int *sum, int *rowptr){
		if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
			int neighbours= checkNextDigit(row, column);
			if (neighbours == 2){
				if (matrix[row-1][column-1] != '0' || matrix[row-1][column-1] != '1' || matrix[row-1][column-1] != '2' || matrix[row-1][column-1] != '3' || matrix[row-1][column-1] != '4' || matrix[row-1][column-1] != '5' || matrix[row-1][column-1] != '6' || matrix[row-1][column-1] != '7' || matrix[row-1][column-1] != '8' || matrix[row-1][column-1] != '9' || matrix[row-1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				 }

				else if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column] != '0' || matrix[row-1][column] != '1' || matrix[row-1][column] != '2' || matrix[row-1][column] != '3' || matrix[row-1][column] != '4' || matrix[row-1][column] != '5' || matrix[row-1][column] != '6' || matrix[row-1][column] != '7' || matrix[row-1][column] != '8' || matrix[row-1][column] != '9' || matrix[row-1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row-1][column+1] != '0' || matrix[row-1][column+1] != '1' || matrix[row-1][column+1] != '2' || matrix[row-1][column+1] != '3' || matrix[row-1][column+1] != '4' || matrix[row-1][column+1] != '5' || matrix[row-1][column+1] != '6' || matrix[row-1][column+1] != '7' || matrix[row-1][column+1] != '8' || matrix[row-1][column+1] != '9' || matrix[row-1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
			}
		}
}


void checkTopLeft(int row, int column, int *sum, int * rowptr){
		if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
			int neighbours= checkNextDigit(row, column);
			if (neighbours == 2){
				if (matrix[row+3][column] != '0' || matrix[row+3][column] != '1' || matrix[row+3][column] != '2' || matrix[row+3][column] != '3' || matrix[row+3][column] != '4' || matrix[row+3][column] != '5' || matrix[row+3][column] != '6' || matrix[row+3][column] != '7' || matrix[row+3][column] != '8' || matrix[row+3][column] != '9' || matrix[row+3][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row][column+1] != '0' || matrix[row][column+1] != '1' || matrix[row][column+1] != '2' || matrix[row][column+1] != '3' || matrix[row][column+1] != '4' || matrix[row][column+1] != '5' || matrix[row][column+1] != '6' || matrix[row][column+1] != '7' || matrix[row][column+1] != '8' || matrix[row][column+1] != '9' || matrix[row][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column+1] != '0' || matrix[row+3][column+1] != '1' || matrix[row+3][column+1] != '2' || matrix[row+3][column+1] != '3' || matrix[row+3][column+1] != '4' || matrix[row+3][column+1] != '5' || matrix[row+3][column+1] != '6' || matrix[row+3][column+1] != '7' || matrix[row+3][column+1] != '8' || matrix[row+3][column+1] != '9' || matrix[row+3][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=2;
			}	
			else if (neighbours ==1){
				if (matrix[row+2][column] != '0' || matrix[row+2][column] != '1' || matrix[row+2][column] != '2' || matrix[row+2][column] != '3' || matrix[row+2][column] != '4' || matrix[row+2][column] != '5' || matrix[row+2][column] != '6' || matrix[row+2][column] != '7' || matrix[row+2][column] != '8' || matrix[row+2][column] != '9' || matrix[row+2][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column+1] != '0' || matrix[row+2][column+1] != '1' || matrix[row+2][column+1] != '2' || matrix[row+2][column+1] != '3' || matrix[row+2][column+1] != '4' || matrix[row+2][column+1] != '5' || matrix[row+2][column+1] != '6' || matrix[row+2][column+1] != '7' || matrix[row+2][column+1] != '8' || matrix[row+2][column+1] != '9' || matrix[row+2][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=1;
			}
			else if (neighbours==0){
				if (matrix[row][column+1] != '0' || matrix[row][column+2] != '1' || matrix[row][column+2] != '2' || matrix[row][column+2] != '3' || matrix[row][column+2] != '4' || matrix[row][column+2] != '5' || matrix[row][column+2] != '6' || matrix[row][column+2] != '7' || matrix[row][column+2] != '8' || matrix[row][column+2] != '9' || matrix[row][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column] != '0' || matrix[row+1][column] != '1' || matrix[row+1][column] != '2' || matrix[row+1][column] != '3' || matrix[row+1][column] != '4' || matrix[row+1][column] != '5' || matrix[row+1][column] != '6' || matrix[row+1][column] != '7' || matrix[row+1][column] != '8' || matrix[row+1][column] != '9' || matrix[row+1][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column+1] != '0' || matrix[row+1][column+1] != '1' || matrix[row+1][column+1] != '2' || matrix[row+1][column+1] != '3' || matrix[row+1][column+1] != '4' || matrix[row+1][column+1] != '5' || matrix[row+1][column+1] != '6' || matrix[row+1][column+1] != '7' || matrix[row+1][column+1] != '8' || matrix[row+1][column+1] != '9' || matrix[row+1][column+1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

			}
		}
}

void checkBottomLeft(int row, int column, int *sum, int * rowptr){
		if (matrix[row][column] == '0' || matrix[row][column] == '1' || matrix[row][column] == '2' || matrix[row][column] == '3' || matrix[row][column] == '4' || matrix[row][column] == '5' || matrix[row][column] == '6' || matrix[row][column] == '7' || matrix[row][column] == '8' || matrix[row][column] == '9'){
			int neighbours= checkNextDigit(row, column);
			if (neighbours == 2){
				if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column-1] != '0' || matrix[row+3][column-1] != '1' || matrix[row+3][column-1] != '2' || matrix[row+3][column-1] != '3' || matrix[row+3][column-1] != '4' || matrix[row+3][column-1] != '5' || matrix[row+3][column-1] != '6' || matrix[row+3][column-1] != '7' || matrix[row+3][column-1] != '8' || matrix[row+3][column-1] != '9' || matrix[row+3][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+3][column] != '0' || matrix[row+3][column] != '1' || matrix[row+3][column] != '2' || matrix[row+3][column] != '3' || matrix[row+3][column] != '4' || matrix[row+3][column] != '5' || matrix[row+3][column] != '6' || matrix[row+3][column] != '7' || matrix[row+3][column] != '8' || matrix[row+3][column] != '9' || matrix[row+3][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
				*rowptr +=2;
			}	
			else if (neighbours ==1){
				if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column-1] != '0' || matrix[row+2][column-1] != '1' || matrix[row+2][column-1] != '2' || matrix[row+2][column-1] != '3' || matrix[row+2][column-1] != '4' || matrix[row+2][column-1] != '5' || matrix[row+2][column-1] != '6' || matrix[row+2][column-1] != '7' || matrix[row+2][column-1] != '8' || matrix[row+2][column-1] != '9' || matrix[row+2][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+2][column] != '0' || matrix[row+2][column] != '1' || matrix[row+2][column] != '2' || matrix[row+2][column] != '3' || matrix[row+2][column] != '4' || matrix[row+2][column] != '5' || matrix[row+2][column] != '6' || matrix[row+2][column] != '7' || matrix[row+2][column] != '8' || matrix[row+2][column] != '9' || matrix[row+2][column] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}
			}
			else if (neighbours==0){
				if (matrix[row][column-1] != '0' || matrix[row][column-1] != '1' || matrix[row][column-1] != '2' || matrix[row][column-1] != '3' || matrix[row][column-1] != '4' || matrix[row][column-1] != '5' || matrix[row][column-1] != '6' || matrix[row][column-1] != '7' || matrix[row][column-1] != '8' || matrix[row][column-1] != '9' || matrix[row][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column-1] != '0' || matrix[row+1][column-1] != '1' || matrix[row+1][column-1] != '2' || matrix[row+1][column-1] != '3' || matrix[row+1][column-1] != '4' || matrix[row+1][column-1] != '5' || matrix[row+1][column-1] != '6' || matrix[row+1][column-1] != '7' || matrix[row+1][column-1] != '8' || matrix[row+1][column-1] != '9' || matrix[row+1][column-1] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

				else if (matrix[row+1][column] != '0' || matrix[row][column+2] != '1' || matrix[row][column+2] != '2' || matrix[row][column+2] != '3' || matrix[row][column+2] != '4' || matrix[row][column+2] != '5' || matrix[row][column+2] != '6' || matrix[row][column+2] != '7' || matrix[row][column+2] != '8' || matrix[row][column+2] != '9' || matrix[row][column+2] != '.' ){
					char num[4] = {matrix[row][column],matrix[row+1][column],matrix[row+2][column],'\0'}; *sum += std::stoi(num);
				}

			}
		}
}


int checkNextDigit(int row, int column){
	int amount=0;
	int* amountptr=&amount;
	if(column==140){
		*amountptr=0;
	}
	else if(column ==139){
		if(matrix[row+1][column] == '0' || matrix[row+1][column] == '1' || matrix[row+1][column] == '2' || matrix[row+1][column] == '3' || matrix[row+1][column] == '4' || matrix[row+1][column] == '5' || matrix[row+1][column] == '6' || matrix[row+1][column] == '7' || matrix[row+1][column] == '8' || matrix[row+1][column] == '9'){
		*amountptr=1;
		}
	}
	else {
		if(matrix[row+1][column] == '0' || matrix[row+1][column] == '1' || matrix[row+1][column] == '2' || matrix[row+1][column] == '3' || matrix[row+1][column] == '4' || matrix[row+1][column] == '5' || matrix[row+1][column] == '6' || matrix[row+1][column] == '7' || matrix[row+1][column] == '8' || matrix[row+1][column] == '9'){
			amount++;
	}
		if(matrix[row+2][column] == '0' || matrix[row+2][column] == '1' || matrix[row+2][column] == '2' || matrix[row+2][column] == '3' || matrix[row+2][column] == '4' || matrix[row+2][column] == '5' || matrix[row+2][column] == '6' || matrix[row+2][column] == '7' || matrix[row+2][column] == '8' || matrix[row+2][column] == '9'){
			amount++;
		}
	}
	return amount;
}
