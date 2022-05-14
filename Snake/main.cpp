#include"controller.h"
#include<Windows.h>
#pragma comment(lib,"winmm.lib")
int main(int argc,int* argv[]) {
	mciSendStringW(L"play Sounds/loading.mp3", 0, 0, 0);		//播放音频
	Controller c;		//定义一个controller类变量c；
	c.Game();			//整个游戏循环
	return 0;
}