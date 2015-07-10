#ifndef _VERTEX_H
#define _VERTEX_H

#include "d3dUtil.h"

namespace Vertex
{
	struct Basic32
	{
		XMFLOAT3 Pos;
		XMFLOAT3 Normal;
		XMFLOAT2 Tex;
	};
}

class InputLayoutDesc
{
public:
	static const D3D11_INPUT_ELEMENT_DESC Basic32[3];
};

class InputLayouts
{
public:
	static void InitAll(ID3D11Device* device);
	static void DestroyAll();

	static ID3D11InputLayout* Basic32;
};
#endif//_VERTEX_H