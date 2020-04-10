//Cloud CB/ Client program
//Stage1:Advertisement:(1)Adv CB->SA: (Adv(CB, ResCB)srkey)//

// Library Functions  //
#include<stdio.h>	/* for printf() and fprintf() */
#include<sys/socket.h> /* for socket(), bind(), and connect() */
#include<arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */
#include<stdlib.h>     /* for atoi() , rand() and exit() */
#include<string.h>     /* for memory () */
#include<unistd.h>     /* for close() */
#include<time.h>        /* for timestamps if we use() */
#include <netinet/in.h>
#include"cloudCB.h" 

// Declare global variables.
char *Pre_shared_key_CB = "crkey";
char *Pre_shared_key_SA = "srkey";

// General definitions //
#define REQ_RES_ATTACK


struct Resources_of_CB  
{ 
	int CPU; 
	int Memory[100]; 
	int Network[100]; 
	int Storage[100]; 
}ResCB; 


int main( int arg c, char **arg v) //to process command line arguments.
{

	unsigned char SA, SB, CB;
	unsigned char channel;
	unsigned char Keys;
	int clientSocket; //SCloud CB connection to Server SA
	char buffer[1024];
	struct sockaddr_in serverAddr;
  	socklen_t addr_size;
   	unsigned char *pkSA, *skSA, *pkCB, *skCB;
	size_t pkSA_len, pkCB_len;
	unsigned char *ns, *nc;

}
	



