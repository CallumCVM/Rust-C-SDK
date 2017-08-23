#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"

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
{
{
{
				namespace Binary
{
	class SerializableTypeMetadata : public TypeMetadata // 0x20
	{
	public:
		System::Type* types; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** names; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
