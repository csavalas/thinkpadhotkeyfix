// Virtual Key Reference:
// https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

#define WINVER 0x0500
#include <windows.h>
#include <string>

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
    int argc;
    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
    ip.ki.wVk = std::stoi(lpCmdLine, 0, 16);
    ip.ki.dwFlags = !KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    return 0;
}

