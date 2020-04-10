/* ******************** RASP Protocol_ALGORITHM2-Convert to C ******************** *)
Assumption:Stage0:
pre_shared_key: psk(it is generted when they register with R.... )
SA+R : srkey (key)
CB+R: crkey (key)

Stage1:Advertisement
(1)Adv CB->SA: (Adv(CB, ResCB)srkey)

Stage 2:Request the registry to check a valid cloud CB  and sends a migration request to CB
(2)SA→R:  (SA, CB, ResCB)
(3)R→SA:  sign((CB, pkCB,ResCB), skR) Signed register's key
(4)SA→CB:  aenc((Ns, SA , ReqSA), pkCB)
(5)CB→R:  ((CB, SA , ReqSA), crkey)   
(6)R→CB:  sign((SA, pkSA , ReqSA)), skR)

Stage3:
(7)CB→SA:  aenc((Ns, Nc, CB), pkSA))
(8)SA→CB:  aenc(Nc, Ksc), pkC)

stage4:
(9)CB→SA:  enc((M_Reqc,SA), Ksc))
(10)SA→CB:  enc((M_Trfs, ResS), Ksc)
(11)CB→SA:  enc((M_Ack, SA), Ksc))

Stage 5:
(12)SB→R:  aenc(SB, CB), pkR) */

/* Declaration Parts
Host names: R, SA, CB , SB, Nonces Na, Nb
Public keys:pkCB, pkSA
private keys:pkCB-1, pkSA-1
Shared Keys: crkey, srkey 
Symmetric key: Ksc
Security Mechnaisms:sign,aenc,enc
 
*---------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<openssl/rand.h>


//nonce-32 bit creation function
int create_nonce (nonce_t *nce)
{
	RAND_bytes(unsigned char *nce, int num);
	return(0);
	
}

//(4)SA→CB:  aenc((Ns, SA , ReqSA), pkCB)
int aencrypt_message ( nonce_t *ns, ReqSA *msg, int *id, BIGNUM *key_pub)
{	





}



