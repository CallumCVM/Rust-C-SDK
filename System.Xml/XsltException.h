#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltException : public SystemException // 0x60
	{
	public:
		UnityEngine::UnicodeString* sourceUri; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* templateFrames; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
