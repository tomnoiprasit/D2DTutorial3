#pragma once
#include "resource.h"
ID2D1Factory * pD2DFactory = NULL;
ID2D1HwndRenderTarget* pD2DHRT = NULL;

IWICImagingFactory* pWICImagingFactory = NULL;
IWICBitmapDecoder* pWICBitmapDecoder = NULL;
IWICFormatConverter* pWICFormatConverter = NULL;
IWICBitmapFrameDecode* pBitmapFrameDecode = NULL;

ID2D1Bitmap* pD2DBitmap = NULL;
HRESULT hr;

void Setup(HWND);
void ReleaseThemAll();