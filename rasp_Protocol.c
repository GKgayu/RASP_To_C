/* ******************** RASP Protocol_ALGORITHM2-Convert to C ******************** *)

Assumption:Stage0:
pre_shared_key: psk(it is generted when they register with R.... )
SA+R : srkey (key)
CB+R: crkey (key)

Stage1:Advertisement
(1)Adv CB->SA: (Adv(CB, ResCB)srkey)

Stage 2:Request the registry to check a valid cloud CB  and sends a migration request to CB
(2)SA→R:  (SA, CB, ResCB)
(3)R→SA:  sign((CB, pkCB,ResCB), skR)//valid 
(4)SA→CB:  aenc((Ns, SA , ResSA), pkCB)
(5)CB→R:  ((CB, SA , ResSA), crkey)   
(6)R→CB:  sign((SA, pkSA , ResSA)), skR)

Stage3:
(7)CB→SA:  aenc((Ns, Nc, CB), pkSA))
(8)SA→CB:  aenc(Nc, Ksc), pkC)

stage4:
(9)CB→SA:  enc((M_Reqc,SA), Ksc))
(10)SA→CB:  enc((M_Trfs, ResS), Ksc)
(11)CB→SA:  enc((M_Ack, SA), Ksc))

Stage 5:
(12)SB→R:  aenc(SB, CB), pkR)  

*/

/*
Host names: R, SA, CB , SB
Public keys:pkCB, pkSA
private keys:pkCB-1, pkSA-1
Shared Keys: crkey, srkey 
Symmetric key: Ksc
Security Mechnaisms:sign,aenc,enc 
*/

