#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class DesignerVerb : public MenuCommand // 0x38
	{
	public:
		UnityEngine::UnicodeString* text; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x48
}
