#pragma once

#include "..\System\CodeDom\CodeTypeReferenceCollection.h"
#include "..\System\CodeDom\CodeTypeMemberCollection.h"
#include "..\System\Reflection\TypeAttributes.h"
#include "..\System\CodeDom\CodeTypeParameterCollection.h"
#include "..\System\EventHandler.h"

namespace System
{
	namespace CodeDom
{
	class CodeTypeDeclaration : public CodeTypeMember // 0x50
	{
	public:
		System::CodeDom::CodeTypeReferenceCollection* baseTypes; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeMemberCollection* members; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeParameterCollection* typeParameters; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateBaseTypes; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateMembers; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::TypeAttributes attributes; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		bool isEnum; // 0x7c (size: 0x1, flags: 0x1, type: 0x2)
		bool isStruct; // 0x7d (size: 0x1, flags: 0x1, type: 0x2)
		int populated; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		bool isPartial; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
