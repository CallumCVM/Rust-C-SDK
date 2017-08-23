#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
{
{
			namespace Serialization
{
	class RootDesignerSerializerAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* serializer; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* baseserializer; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool reload; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
