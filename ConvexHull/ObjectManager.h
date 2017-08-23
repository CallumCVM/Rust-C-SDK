#pragma once

#include "..\System\Collections\Generic\Stack<MIConvexHull\ConvexFaceInternal>.h"
#include "..\System\Collections\Generic\Stack<MIConvexHull\FaceConnector>.h"
#include "..\System\Collections\Generic\Stack<MIConvexHull\VertexBuffer>.h"
#include "..\System\Collections\Generic\Stack<MIConvexHull\DeferredFace>.h"

namespace MIConvexHull
{
	class ObjectManager : public Object // 0x0
	{
	public:
		System::Collections::Generic::Stack<MIConvexHull::ConvexFaceInternal> RecycledFaceStack; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Stack<MIConvexHull::FaceConnector> ConnectorStack; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Stack<MIConvexHull::VertexBuffer> EmptyBufferStack; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Stack<MIConvexHull::DeferredFace> DeferredFaceStack; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		int Dimension; // 0x30 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x38
}
