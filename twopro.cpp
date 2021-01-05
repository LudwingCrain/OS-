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
    int son, daughter;
    
    if((son = fork()) < 0){
	cout <<"creat son fail"<<endl;
	return 0;
    }
    else if(son == 0){
	cout <<"I'm son"<<endl;
	return 0;
    }
    else
	cout<<"I'm father" <<endl;

    if((daughter = fork()) < 0){
	cout << "creat daughter fail"<<endl;
	return 0;
    }
    else if(daughter == 0){
	cout<<"I'm daughter"<<endl;
	return 0;
    }
    else
	cout<<"I'm father"<<endl;
    return 0;
}
