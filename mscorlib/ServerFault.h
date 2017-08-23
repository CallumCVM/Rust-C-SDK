#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Exception.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
{
{
			namespace Formatters
{
	class ServerFault : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* exceptionType; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* message; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* stackTrace; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Exception* exception; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
