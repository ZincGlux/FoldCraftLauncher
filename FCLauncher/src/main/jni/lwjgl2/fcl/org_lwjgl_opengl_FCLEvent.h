/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_FCLEvent */

#ifndef _Included_org_lwjgl_opengl_FCLEvent
#define _Included_org_lwjgl_opengl_FCLEvent
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_FCLEvent_KeyPress
#define org_lwjgl_opengl_FCLEvent_KeyPress 2L
#undef org_lwjgl_opengl_FCLEvent_KeyRelease
#define org_lwjgl_opengl_FCLEvent_KeyRelease 3L
#undef org_lwjgl_opengl_FCLEvent_ButtonPress
#define org_lwjgl_opengl_FCLEvent_ButtonPress 4L
#undef org_lwjgl_opengl_FCLEvent_ButtonRelease
#define org_lwjgl_opengl_FCLEvent_ButtonRelease 5L
#undef org_lwjgl_opengl_FCLEvent_MotionNotify
#define org_lwjgl_opengl_FCLEvent_MotionNotify 6L
#undef org_lwjgl_opengl_FCLEvent_ConfigureNotify
#define org_lwjgl_opengl_FCLEvent_ConfigureNotify 22L
#undef org_lwjgl_opengl_FCLEvent_FCLMessage
#define org_lwjgl_opengl_FCLEvent_FCLMessage 37L
#undef org_lwjgl_opengl_FCLEvent_CloseRequest
#define org_lwjgl_opengl_FCLEvent_CloseRequest 0L
/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    createEventBuffer
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_FCLEvent_createEventBuffer
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    getPending
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_getPending
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nNextEvent
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nNextEvent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetType
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetType
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetFCLMessageMessage
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetFCLMessageMessage
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetButtonTime
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetButtonTime
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetButtonState
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetButtonState
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetButtonType
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetButtonType
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetButtonButton
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetButtonButton
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetButtonX
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetButtonX
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetButtonY
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetButtonY
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetKeyTime
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetKeyTime
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetKeyType
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetKeyType
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetKeyKeyCode
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetKeyKeyCode
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetKeyState
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetKeyState
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLEvent
 * Method:    nGetKeyKeyChar
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLEvent_nGetKeyKeyChar
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
