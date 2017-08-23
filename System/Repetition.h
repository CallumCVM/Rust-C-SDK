#pragma once

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
{
{
			namespace Syntax
{
	class Repetition : public CompositeExpression // 0x18
	{
	public:
		int min; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int max; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		bool lazy; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
