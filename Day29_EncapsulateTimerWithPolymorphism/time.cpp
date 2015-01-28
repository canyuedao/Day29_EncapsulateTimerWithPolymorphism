#include "time.h"
#include <stdio.h>
#pragma comment(lib,"Winmm.lib")

//int num=0;
ctime::ctime(){
	m_num=0;
}
ctime::ctime(int a=0){
	m_num=a;
}
//void ctime::execute(int iTime,void (*p)()){	
//	m_pFunc=p;
//	uTimerID=timeSetEvent(iTime,Time_Accuracy,pTIMECALLBACK,(DWORD_PTR)this,TIME_PERIODIC);	
//}
void ctime::execute(int iTime,char *pStr,interfaceP *p){	
	pIP=p;
	m_cStr=pStr;
	uTimerID=timeSetEvent(iTime,Time_Accuracy,pTIMECALLBACK,(DWORD_PTR)this,TIME_PERIODIC);	
	p->m_num=0;
}
//void ctime::print(){	
//	printf("%d %s\n",num++,cStr);	
//}
void ctime::kill(){
	timeKillEvent(uTimerID);
}