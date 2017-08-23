#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XDocumentType : public XNode // 0x50
	{
	public:
		UnityEngine::UnicodeString* name; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* pubid; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* sysid; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* intSubset; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x70
}
