/*******************************************************************
*Copyright(c) 2020 Ocean University of China. All rights reserved. *
*This file is created by: *
* ##*
* ##*
* ##*
* ##*
* ############*
* ##        #*
* ##       # *
* ###     #*
* ####   #*
* ################### *
* ##################### *
*******************************************************************/

#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(){
    int bigson, son;
    if((bigson = fork()) < 0){
	cout<<"creat bigson fail"<<endl;
	return 0;
    }
    else if(bigson == 0){
	if((son = fork()) < 0){
		cout << "creat c fail"<<endl;
		return 0;
	}
	else if(son == 0){
		cout << "c"<<endl;
		return 0;
	}
	else{
		cout << "I'm big son"<<endl;
		return 0;
	}
    }
    else
	cout << "I'm father"<<endl;
    return 0;
}
