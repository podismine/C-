#include <iostream>

using namespace std;

class Screen
{
	Screen() = default;
	Screen(float h,float w,int n):height(h),weight(w),contents(n,' '){}
	Screen(float h, float w, char c) :height(h), weight(w), contents(int(h*w),c) {}



public:

private:
	float height, weight;
	string contents;
};
struct X
{
	X(int i, int j):base(i),rem(base%j){}
	int rem, base;
};
int main()
{






	system("pause");

	return 0;
}

