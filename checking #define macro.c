#include<stdio.h>
#define DEBUG_MODE   // this is also a macro 
//#undef DEBUG_MODE   // AFTER USING THIS WE CAN UNDEFINE BU USING #UNDEF MACRO NAME
int main()
{
	#ifndef DEBUG_MODE      // we can also use ifndef   that means if not define .
	      printf("YES DEBUG mode is active \n");
	#else
	      printf("NO DEBUG mode is not  active \n");
	#endif
	return 0;
}