#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class ScriptCompilerInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* compilerCommand; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* defaultCompilerOptions; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
