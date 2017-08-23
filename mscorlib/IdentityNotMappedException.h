#pragma once

#include "..\System\Security\Principal\IdentityReferenceCollection.h"

namespace System
{
	namespace Security
{
{
		namespace Principal
{
	class IdentityNotMappedException : public SystemException // 0x60
	{
	public:
		System::Security::Principal::IdentityReferenceCollection* _coll; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
