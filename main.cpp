#include <windows.h>
#include <cstdio>
#include <winuser.h>
#include <conio.h>



void click(int x,int y)
{
	mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE,x*65535/1600,y*65535/900,0,0);
	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
}
int main()
{
	POINT p;
	int number;
	printf("�����������");
	scanf("%d",&number);
	int time;
	printf("\n�������ӳ�ʱ�䣺");
	scanf("%d",&time);
	printf("\n�������ٶȣ�bpm��");
	double bpm;
	scanf("%lf",&bpm);
	printf("\n���������ȡ���λ�á�����");
	_getch();
	GetCursorPos(&p);
	time*=1000;
	Sleep(time);
	int a ;
	for(int i=0;i<=number;i++)
	{
		
		click(p.x,p.y);
		keybd_event(VK_RSHIFT, 0, 0, 0);
		keybd_event(VK_OEM_2, 0, 0, 0);
		keybd_event(VK_OEM_2, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(VK_RSHIFT, 0, KEYEVENTF_KEYUP, 0);
		//A1
		//BF
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		Sleep(60000/bpm);
	//	click(1024,497);
	a= GetKeyState(VK_RBUTTON);
		

	if(a<0)
	{
		return 0;
		
	}
	}
}

