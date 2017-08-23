#pragma once

#include "..\System\Security\AccessControl\AceQualifier.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class QualifiedAce : public KnownAce // 0x30
	{
	public:
		System::Security::AccessControl::AceQualifier ace_qualifier; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		bool is_callback; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* opaque; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x40
}
