#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int list[5] = {2,4,5,6,7,};
	
	int pList [] = {12,34,56,43};
	
	cout << list[1];


     int dizi [5];

     int result = 0;
     
     for(int a = 0;a<5; a++)
     {
     	
        cin >> dizi [a];
    
	 }
	 
	 cout << dizi [3];
	 
	 
	 for(int a = 0; a < 5; a++)
	 {
	 	
	 	result = result + dizi[a];
	 	
	 	cout << dizi[a];
	 	
	 }
	 
	 cout << result;
	
	
	return 0;
}
