#include"controller.h"
#include<Windows.h>
#pragma comment(lib,"winmm.lib")
int main(int argc,int* argv[]) {
	mciSendStringW(L"play Sounds/loading.mp3", 0, 0, 0);		//������Ƶ
	Controller c;		//����һ��controller�����c��
	c.Game();			//������Ϸѭ��
	return 0;
}