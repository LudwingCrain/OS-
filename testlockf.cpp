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

#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<cstdlib>

using namespace std;

//lockf（fd，mode，size）mode=0 - mode=1 +

int main(){
    int pid1, pid2;

    if((pid1 = fork())<0){
	cout << "fail creat1"<<endl;
    	return 0;
    }
    else if(pid1 == 0){
	lockf(1, 1, 0);
	cout <<"pid="<<pid1<<" ";
	cout <<"Child1 process:b" <<endl;
	lockf(1, 0, 0);
	return 0;
    }
    else{
	lockf(1, 1, 0);
	cout <<"Parent process:a" <<endl;
	lockf(1, 0, 0);
    }

    if((pid2 = fork())<0){
        cout << "fail creat2"<<endl;
        return 0;
    }
    else if(pid2 == 0){
        lockf(1, 1, 0);
        cout <<"pid="<<pid1<<" ";
        cout <<"Child2 process:c" <<endl;
        lockf(1, 0, 0);
        return 0;
    }
    else{
        lockf(1, 1, 0);
        cout <<"Parent process:a" <<endl;
        lockf(1, 0, 0);
    }
    
}
