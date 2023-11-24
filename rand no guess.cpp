#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
   
	srand(static_cast<unsigned int>(time(nullptr)));
	int secretnumber=rand() %100+1;
	 int guess;
	cout<<"enter any number from 1-100"<<endl;
	cin>>guess;
	cout<<guess<<endl;
	if(guess==secretnumber)
	{
	    	cout<<"ur guess is correct"<<endl;
	}
  else if(guess<secretnumber)
  	{
	    	cout<<"ur guess is is less than the number"<<endl;
	}
	else
		{
	    	cout<<"ur guess is greater than the number"<<endl;
	}
    cout<<"the random number is "<<secretnumber<<"."<<endl;
}