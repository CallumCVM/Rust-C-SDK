#pragma once

#include "..\System\Diagnostics\SymbolStore\ISymbolDocumentWriter.h"
#include "..\System\Reflection\Emit\SequencePoint.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class SequencePointList : public Object // 0x0
	{
	public:
		System::Diagnostics::SymbolStore::ISymbolDocumentWriter* doc; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::SequencePoint* points; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int count; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
