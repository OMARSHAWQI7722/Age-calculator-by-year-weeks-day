#include <iostream>
#include <ctime>



using namespace std;
int main () {
	int num;
	int result;
	int age_day,age_week;
	
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int currentYear = 1900 + ltm->tm_year;
	
	cout<<"Enter Your Birthday:";
	cin>>num;
	result = currentYear - num;
	
	cout<<"Your Age is:"<<result<<" Years"<<endl;
	
	age_day = result*365;
	age_week=result*7;
	
		cout<<"Your Age By week is: "<<age_week<<" Week\n";
	cout<<"Your Age By day is: "<<age_day<<" Day";

	
	
	return 0;
	
	
		
}