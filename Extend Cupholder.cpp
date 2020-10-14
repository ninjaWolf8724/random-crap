#include <Windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	FreeConsole();
	mciSendString("set cdaudio door open", NULL, NULL, NULL);
    return 0;
}
