#include<iostream>
#include "Canvas.h"
using namespace std;

Canvas::Canvas(int x, int y)
{
	height = y;
	width = x;

}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int startX = x; // center point
	int startY = y;
	int r = ray;

	int x1;
	int y1;

	for (x1 = 0; x1 < width; x1++)
		for (y1 = 0; y1 < height; y1++)
			if ((((x1 - startX) * (x1 - startX) + (y1 - startY) * (y1 - startY)) <= r * r) == true && (((x1 - startX) * (x1 - startX) + (y1 - startY) * (y1 - startY)) <= (r - 1) * (r - 1)) == false)
			{
				m[x1][y1] = ch;
			}


}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	int startX = x; // center point
	int startY = y;
	int r = ray;

	int x1;
	int y1;

	for (x1 = 0; x1 < width; x1++)
		for (y1 = 0; y1 < height; y1++)
			if ((((x1 - startX) * (x1 - startX) + (y1 - startY) * (y1 - startY)) <= r * r) == true)
			{
				m[x1][y1] = ch;
			}


}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
		m[top][i] = m[bottom][i] = ch;
	for (int i = top; i <= bottom; i++)
		m[i][left] = m[i][right] = ch;

}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
		for (int j = top; j <= bottom; j++)
			m[i][j] = ch;
}
void Canvas::SetPoint(int x, int y, char ch)
{
	m[x][y] = ch;
}
void Canvas::DrawLine(int x0, int y0, int x1, int y1, char ch)
{

	int dx, dy, p, x, y;

	dx = x1 - x0;
	dy = y1 - y0;

	x = x0;
	y = y0;

	p = 2 * dy - dx;

	while (x < x1)
	{
		if (p >= 0)
		{
			m[x][y]= ch;
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			m[x][y] = ch;;
			p = p + 2 * dy;
		}
		x = x + 1;
	}
}
void Canvas::Print()
{
	for (int i = 0; i <= width; i++)
	{
		for (int j = 0; j <= height; j++)
			cout << m[i][j];
		cout << endl;
	}
}
void Canvas::Clear()
{
	int i;
	for ( i = 0; i <= width; i++)
		for (int j = 0; j <= height; j++)
			m[i][j] = 32;
}