#include <windows.h>

BOOL __export FAR PASCAL LibMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

unsigned char __export FAR PASCAL Test(unsigned char* test) {
    return test[0]+test[1];
}
