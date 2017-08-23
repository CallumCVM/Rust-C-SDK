#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class Evidence : public Object // 0x0
	{
	public:
		bool _locked; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::Collections::ArrayList* hostEvidenceList; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* assemblyEvidenceList; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int _hashCode; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
