#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Models\Analytics\SessionUpdate.h"

namespace Facepunch
{
	namespace Models
{
{
		namespace Analytics
{
	class SessionClose : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Uid; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Sid; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Facepunch::Models::Analytics::SessionUpdate* FinalUpdate; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
