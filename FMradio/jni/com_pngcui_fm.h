/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_neojet_scanner_key */

#ifndef _Include_com_pngcui_fm
#define _Inlcude_com_pngcui_fm

#ifdef _cplusplus
extern "C"{
#endif
	
	/*Java_packagename_classname_methodname*/
	/*open()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_Open
	(JNIEnv *,jobject);
	
	/*close()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_Close
	(JNIEnv *,jobject);
	
	/*ioctl()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_Ioctl
	(JNIEnv *,jobject ,jint num ,jint en);
	
	/*getADC()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_GetAdc
	(JNIEnv *,jobject);

	/*getFREQ()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_GetFreq
	(JNIEnv *,jobject);

	/*setFreq()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_SetFreq
	(JNIEnv *,jobject ,jint arg);

	/*OpenMute()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_OpenMute
	(JNIEnv *,jobject);

	/*CloseMute()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_CloseMute
	(JNIEnv *,jobject);

	/*search()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_HandSearch
	(JNIEnv *,jobject ,jint arg);

	/*autoSearch()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_AutoSearch
	(JNIEnv *,jobject ,jint arg ,jint cmd);

	/*SetShutDown()*/
	JNIEXPORT jint JNICALL Java_com_pngcui_fm_Jni_SetShutDown
	(JNIEnv *,jobject);

#ifdef _cplusplus
}
#endif
#endif