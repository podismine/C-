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
	//illegal �ǳ����ó�ʼ����Ϊ��ֵ
	int i = -1;
	//int  &r = 0;
	//illegal ��ָ�벻��ָ��δ����
	//int *const p2 = &i2;
	const int xi = -1, &xr = 0;
	//illegal ��ָ��,�����ò���ָ��δ����
	//const int *const p3 = &i2;
	//const int *p1 = &i2;
	//const int &const r2;

	const int xi2 = xi, &xr2 = xi;
	//---------------------------------------
	//������Ҫ��ʼ��
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
	constexpr int *q = nullptr;//constexpr ֻ���ָ����Ч
	p = p1;
	//q = p1;��ַ���ɸ���
	//*p = *p1; ֵ���ɸ���
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