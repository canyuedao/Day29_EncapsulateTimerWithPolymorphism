// Day29_EncapsulateTimerWithPolymorphism.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "time.h"

class c2:public interfaceP{
	void print(){
		printf("%d 2:Hello World\n",m_num);
		//m_num++;
	}
};
class c3:public interfaceP{
	void print(){
		printf("%d 3:Hello World\n",m_num);
		//m_num++;
	}
};

//class T:public ctime{
//	virtual void print()=0;
//};
//class c2:public T{
//	void print(){
//		printf("%d 2:%s\n",m_num,m_cStr);
//		m_num++;
//	}
//};
//class c3:public T{
//	void print(){
//		printf("%d 3:%s\n",m_num,m_cStr);
//		m_num++;
//	}
//};
//void sun();
//int num=0;
//int print(int b,char* cStr){
//	printf("%d %d %s\n",num++,b,cStr);
//	return 0;
//}

int _tmain(int argc, _TCHAR* argv[])
{	
	char *cStr="Hello World";
	//ctime itime;
	////void (*pFunc)()=p;
	//itime.execute(100,cStr);	
	//while(itime.m_num<=50){}
	//itime.kill();

	interfaceP *pt=new c2;
	ctime itime2;
	itime2.execute(100,cStr,pt);
	while(pt->m_num<50){}
	itime2.kill();
	interfaceP *pt1=new c3;
	//ctime itime3;
	itime2.execute(100,cStr,pt1);
	while(pt1->m_num<50){}
	itime2.kill();

	//T *pt=new c2;
	//pt->execute(100,cStr);
	//while(pt->m_num<=50){}
	//pt->kill();
	//T *pt1=new c3;
	//pt1->execute(100,cStr);
	//while(pt1->m_num<=50){}
	//pt1->kill();

	/*c2 itime2;
	itime2.execute(100,cStr);
	
	while(itime2.m_num<=50){}
	itime2.kill();
	c3 itime3;
	itime3.execute(100,cStr);
	while(itime3.m_num<=50){}
	itime3.kill();*/
	//while(1);	
	return 0;
}

//void sun(){	
//	//printf("%d Hello World\n",num++);	
//	print(10,"Hello World");
//} 

