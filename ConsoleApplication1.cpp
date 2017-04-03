#include "stdafx.h"
#include <iostream>
#include<conio.h>

using namespace std;

int volume(int l=7, int w=5, int h=40);

int main(){	
	
	cout << volume(2);
	getch();

	}

int volume(int l, int w, int h) {
	return l*h*w;

}

