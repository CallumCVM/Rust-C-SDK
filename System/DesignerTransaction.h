#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class DesignerTransaction : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* description; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool committed; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool canceled; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
