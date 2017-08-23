#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace Rust
{
	namespace Ai
{
{
		namespace HTN
{
	class PrimitiveTaskSelector : public Selector // 0x30
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::List<Apex.AI.ICompositeScorer>* _preconditions; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Apex.AI.ICompositeScorer>* _effects; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x48
}
