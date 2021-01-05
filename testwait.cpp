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

int main(){
    pid_t pid;
    int status, i;
    pid = fork();

    if(pid < 0)
	cout << "This error" <<endl;
    else if(pid == 0){
	cout<<"This is child process.pid="<<getpid()<<endl;
	exit(5);
    }
    else{
	sleep(1);
	cout<<"This parent process.wati for child "<<endl;
	pid = wait(&status);
	i = WEXITSTATUS(status);
	cout << "child 's pid="<<pid<<"  exit status="<<i<<endl;
    }
    return 0;
}

