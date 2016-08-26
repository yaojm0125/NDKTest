#include <String.h>
#include <jni.h>

jstring com_example_yaojm_ndkdemo_MainActivity_sayHello(JNIEnv *env,jobject thiz){

    return (*env)->NewStringUTF(env,"Hello from JNI !");

}