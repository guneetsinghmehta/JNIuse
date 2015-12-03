#include<stdio.h>
#include"MyMain.h"
//void printmsg()
JNIEXPORT void JNICALL Java_MyMain_printmsg(JNIEnv *env,jobject obj)
{
	printf("Hello there world!");
}
