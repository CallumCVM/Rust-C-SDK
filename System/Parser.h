#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
{
{
			namespace Syntax
{
	class Parser : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* pattern; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* caps; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* refs; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int ptr; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int num_groups; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int gap; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
