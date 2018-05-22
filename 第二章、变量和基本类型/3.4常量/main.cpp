#include <iostream>
using namespace std;

int main()
{
	//illegal
	//const int buf;
	int cnt = 0;
	const int sz = cnt;
	++cnt;
	//illegal
	//++sz;
	//---------------------------------------
	//illegal 非常引用初始必须为左值
	int i = -1;
	//int  &r = 0;
	//illegal 常指针不能指向未定义
	//int *const p2 = &i2;
	const int xi = -1, &xr = 0;
	//illegal 常指针,常引用不能指向未定义
	//const int *const p3 = &i2;
	//const int *p1 = &i2;
	//const int &const r2;

	const int xi2 = xi, &xr2 = xi;
	//---------------------------------------
	//常量需要初始化
	//int i, *const cp;
	//int *p1, *const p2;
	//const int ic, &r = ic;
	//const int *const p3;
	const int *p;
	//---------------------------------------
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2;
	const int *const p3 = &i;
	const int &r2 = v2;

	r1 = v2;
	//p1 = p2;
	p2 = p1;
	//p1 = p3;
	p2 = p3;
	//*p2 = *p1;
	cout <<* p1 <<" "<< *p2;
	//---------------------------------------
	const int *p = nullptr;
	constexpr int *q = nullptr;//constexpr 只针对指针有效
	p = p1;
	//q = p1;地址不可更改
	//*p = *p1; 值不可更改
	*q = *p1;
	//---------------------------------------
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	//---------------------------------------
	int a = 3, b = 4;
	decltype(a)c = a;
	decltype((b)) d = a;

	int a1 = 3, b1 = 4;
	decltype(a1)c = a1;
	decltype(a1 = b)d = a1;



	system("pause");
	return 0;
}