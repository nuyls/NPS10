#include<iostream>
using namespace std;

int main(){
    char grade;
	int i=1,count[5] = {}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == '0') {
		   cout << "In total " << i-1 << " students."<<endl;
		   break;
		} 
		
		if(grade == 'A'){ 
		    i++;
		    count[0]++;
		
		}else if(grade == 'B'){ 
			i++;
			count[1]++;
			
		}else if(grade == 'C'){ 
			i++;
			count[2]++;
		
		}else if(grade == 'D'){ 
			i++;
			count[3]++;
		
		}else if(grade == 'F'){ 
			i++;
			count[4]++;
		
		}else{
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}
	