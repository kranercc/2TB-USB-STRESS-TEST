#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() {

	
	FILE * date, * dateout;
	dateout = fopen("date.txt", "a");
	date = fopen("date.txt", "r");
	
	
	char c;
	

	while ( 1 ) {
		Sleep(1 / 60);
		//citim din fisierul date
		fscanf(date, "%c", &c);

		//scriem in fisierul date cu functia append
		fprintf(dateout, "%c", c);
		

	}
	
	fclose(dateout);
	fclose(date);

	
	return 0;


}
