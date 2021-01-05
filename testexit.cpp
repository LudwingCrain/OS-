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
    cout<<"process will exit"<<endl;
    exit(0);
    cout<<"exit is failed"<<endl;
    return 0;
}

