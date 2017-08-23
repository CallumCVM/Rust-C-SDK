#pragma once

#include "..\UnityEngine\List.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class CommonAcl : public GenericAcl // 0x0
	{
	public:
		bool is_container; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_ds; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char revision; // 0x12 (size: 0x1, flags: 0x1, type: 0x5)
		UnityEngine::List<System.Security.AccessControl.GenericAce>* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
