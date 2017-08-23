#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"

namespace Facepunch
{
	namespace Models
{
{
		namespace Database
{
	class QueryResponse : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Content; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Id; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* AuthorId; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* AuthType; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		System::DateTime Created; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		System::DateTime Updated; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
