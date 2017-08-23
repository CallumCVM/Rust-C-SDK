#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Collections
{
{
		namespace Specialized
{
	class NameValueCollection : public NameObjectCollectionBase // 0x58
	{
	public:
		UnityEngine::UnicodeString** cachedAllKeys; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** cachedAll; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x68
}
