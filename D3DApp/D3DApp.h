#pragma once

#include "resource.h"

LPD3DXFONT MakeFont();
void FontPrint(LPD3DXFONT pfont, int x, int y, char* pText, int iLen, D3DCOLOR color);
//ªÊ÷∆3D≥°æ∞
VOID Direct3DRender();
HRESULT InitDirect3D(HWND hWnd);
