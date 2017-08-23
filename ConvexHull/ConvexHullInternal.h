#pragma once

#include "..\UnityEngine\List.h"
#include "..\MIConvexHull\FaceList.h"
#include "..\MIConvexHull\VertexWrap.h"
#include "..\MIConvexHull\ConvexFaceInternal.h"
#include "..\System\Collections\Generic\Stack<MIConvexHull\ConvexFaceInternal>.h"
#include "..\MIConvexHull\VertexBuffer.h"
#include "..\System\Collections\Generic\HashSet<MIConvexHull\VertexWrap>.h"
#include "..\MIConvexHull\ConnectorList.h"
#include "..\MIConvexHull\ObjectManager.h"
#include "..\MIConvexHull\MathHelper.h"

namespace MIConvexHull
{
	class ConvexHullInternal : public Object // 0x0
	{
	public:
		UnityEngine::List<MIConvexHull.VertexWrap>* InputVertices; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<MIConvexHull.VertexWrap>* ConvexHull; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		MIConvexHull::FaceList* UnprocessedFaces; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<MIConvexHull.ConvexFaceInternal>* ConvexFaces; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		MIConvexHull::VertexWrap* CurrentVertex; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		MIConvexHull::VertexWrap* FurthestVertex; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		double* Center; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		MIConvexHull::ConvexFaceInternal* UpdateBuffer; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		int* UpdateIndices; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Generic::Stack<MIConvexHull::ConvexFaceInternal> TraverseStack; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		MIConvexHull::VertexBuffer* EmptyBuffer; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		MIConvexHull::VertexBuffer* BeyondBuffer; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<MIConvexHull.ConvexFaceInternal>* AffectedFaceBuffer; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<MIConvexHull.DeferredFace>* ConeFaceBuffer; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::HashSet<MIConvexHull::VertexWrap> SingularVertices; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		MIConvexHull::ConnectorList* ConnectorTable; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		MIConvexHull::ObjectManager* ObjectManager; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		MIConvexHull::MathHelper* MathHelper; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		bool Computed; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		int Dimension; // 0xa4 (size: 0x4, flags: 0x21, type: 0x8)
		double MaxDistance; // 0xa8 (size: 0x8, flags: 0x1, type: 0xd)
	}; // size = 0xb0
}
