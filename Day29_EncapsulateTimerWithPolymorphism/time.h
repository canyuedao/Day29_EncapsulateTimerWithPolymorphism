#include <Windows.h>
#include <stdio.h>
#define Time_Accuracy 1

class interfaceP{
public:
	int m_num;
	virtual void print()=0;
};
class ctime{
private:	
	interfaceP *pIP;
	//void m_print();
	//void (*m_pFunc)();
	UINT uTimerID;
	static void CALLBACK pTIMECALLBACK (UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2){
		ctime *pThis=(ctime*)dwUser;

		(pThis->pIP->m_num)++;
		pThis->pIP->print();
		
		//(*(pThis->m_pFunc))();	
	}	
protected:
	char *m_cStr;
public:	
	//virtual void print(){
	//	printf("%d 1:%s\n",m_num,m_cStr);
	//	m_num++;
	//}
	int m_num;
	ctime(int);
	ctime();
	void execute(int,char*,interfaceP*);
	//void excuted(int,char*);
	void kill();
};
