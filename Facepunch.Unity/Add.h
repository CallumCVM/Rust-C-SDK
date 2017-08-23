#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Models\Auth.h"

namespace Facepunch
{
	namespace Models
{
{
		namespace Database
{
	class Add : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Parent; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Content; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Facepunch::Models::Auth* Auth; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
