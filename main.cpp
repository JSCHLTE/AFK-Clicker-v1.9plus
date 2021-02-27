#include <iostream>
#include <Windows.h>
using namespace std;

void menu()
{
		system("Color a");
cout << "	  ____  _____  __  _         __  _      ____   __  __  _    ___  ____  \n";
cout << "	 /    ||     ||  |/ ]       /  ]| |    |    | /  ]|  |/ ]  /  _]|    \  \n";
cout << "	|  o  ||   __||  ' /       /  / | |     |  | /  / |  ' /  /  [_ |  D  ) \n";
cout << "	|     ||  |_  |    \      /  /  | |___  |  |/  /  |    \ |    _]|    /  \n";
cout << "	|  _  ||   _] |     |    /   \_ |     | |  /   \_ |     \|   [_ |    \ \n";
cout << "	|  |  ||  |   |  .  |    \     ||     | |  \     ||  .  ||     ||  .  \ \n";
cout << "	|__|__||__|   |__|\_|     \____||_____||____\____||__|\_||_____||__|\_| \n\n";
                                                                       
	cout << "AFKClicker (COMBAT UPDATE VERSION) by Jordan/CLOUT3D\n\n";
	cout << "DO NOT ENABLE LEFT CLICK AUTO CLICKER ON SERVERS THIS WILL RESULT IN A BAN.\n\n";
	cout << "Left Click -> Press 'X' to enable and 'Z' to disable Left Click Auto Click.\n\n";
	cout << "Right Click -> Press 'V' to enable and 'C' to disable Right Click Auto Click.\n\n";
}

void clicker()
{
	bool click = false; //sets left click to false
	bool Rclick = false; // sets right click to false

	while (true)
	{
		//Left Click
		if (GetAsyncKeyState('X')) //toggle on (lmb)
		{
			click = true; 
		}
		else if (GetAsyncKeyState('Z')) //toggle off (lmb)
		{
			click = false;
		}
		if (click == true) 
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1000); //Adujst Speed | (Warning settings this value below 1 WILL cause come crashes. Try at your own risk. THE LOWER THE VALUE THE FASTER)
		}
		//Right Click
				if (GetAsyncKeyState('V')) //toggle on (rmb)
		{
			Rclick = true; 
		}
		else if (GetAsyncKeyState('C')) //toggle off (rmb)
		{
			Rclick = false;
		}
		if (Rclick == true)
		{
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			Sleep(1); //Adjust Speed | (Warning settings this value below 1 WILL cause come crashes. Try at your own risk. THE LOWER THE VALUE THE FASTER)
		}
		
	}
}		

int main()
{
	menu();
	clicker();

	return 0;
}
