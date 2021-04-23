#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define pi 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//This page is condtions

int main() {
	
//	cout << "Lutfen yasiniz girin : ";
//	
//	int y;
//	
//	cin >> y;
//	
//	if(y>20 && y<30)
//	{
//		
//		cout << "Sizin yasiniz " << y;
//		
//	}else if(y<20)
//	{
//		
//		cout << "Sizin yasiniz " << y;
//		
//	}else if(y<10)
//	{
//		
//		cout << "Sizin yasiniz " << y;
//		
//	}else {
//		
//		cout << "Bulunmadi !!!";
//		
//	}
    
//    cout << "Lutfen bir rakam girin : ";
//    
//    int sayi;
//    
//    cin >> sayi;
//    
//    while(sayi>0)
//	{
//    	
//    	cout << sayi;
//    	sayi = sayi-1;
//    	
//	}

//  int a = 20;
//
//   for(a;a>0;a--) 
//   {
//   	
//   	cout << a;
//   	
//   }



   cout << "Lutfen bir rakam gir : ";
   
   int sayi;
   
   cin >> sayi;
   
   switch(sayi) 
   {
   	
   	case 1 :
   		
   		cout << "Salam";
   		
   		break;
   		
   	case 2 :
   		
   		cout << "Getdim";
   		
   		break;
   	
   	case 3 : 
   	
   	    cout << "Xos geldiniz";
   	    
   	    break;
   	    
    case 4 :
    	
    	cout << "C++ devloper";
    	
    	break;
    	
    case 5 :
    	
    	cout << "Burda hersey biter";
    	
    	break;
    	
    default :
    	
    	cout << "Lutfen 0 la 5 arasinda bir rakam girniz : ";
    	
    	break;
    	
    	
   }
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
