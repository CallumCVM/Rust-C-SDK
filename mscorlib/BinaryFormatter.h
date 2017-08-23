#pragma once

#include "..\System\Runtime\Serialization\Formatters\FormatterAssemblyStyle.h"
#include "..\System\Runtime\Serialization\SerializationBinder.h"
#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"
#include "..\System\Runtime\Serialization\Formatters\FormatterTypeStyle.h"
#include "..\System\Runtime\Serialization\Formatters\TypeFilterLevel.h"

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
	class BinaryFormatter : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::Formatters::FormatterAssemblyStyle assembly_format; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::SerializationBinder* binder; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::StreamingContext context; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::ISurrogateSelector* surrogate_selector; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::Formatters::FormatterTypeStyle type_format; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::Formatters::TypeFilterLevel filter_level; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
