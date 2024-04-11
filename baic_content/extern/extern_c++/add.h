// #ifndef ADD_H
// #define ADD_H
// extern int add(int x, int y);
// #endif
//也可以这样写，通用操作
#ifdef __cplusplus
extern "C"{
#endif
int add(int x,int y);
#ifdef __cplusplus
}
#endif