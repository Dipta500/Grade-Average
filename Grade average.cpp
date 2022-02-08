#include <iostream>
// Write a code for exam grade 
// In The end it should give you back the result of the average of all the grade together 
using namespace std;
int main () {
	int n , rt=0 , grade[5];
	
	cout<<"\nHow many exam?" ;
	
	cin >> n;
	
	for(int i=1; i<=n; i++){
		cout<<"\n Exam " << i << " ? ";
		cin>> grade[i];
		rt = rt + grade[i];
	} // end of for loop
	
	cout<<"\n\n Anerage : "  <<rt/n;
	for (int i =1; i<=n; i++) 
	cout<<"\n" <<i<< " = " << grade[i];
	
	
	cout<<"\n\n";
	return 0;
	
}

