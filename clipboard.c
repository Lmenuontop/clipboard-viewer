#include <windows.h>
#include <stdio.h>
int main() {
	if(!OpenClipboard(NULL)) {
		CloseClipboard();
		return 1;
	}
	HANDLE data = GetClipboardData(CF_TEXT);
	printf("Clipboard: %s\n", data);
	
	return 0;
}
