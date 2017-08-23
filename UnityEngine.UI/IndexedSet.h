#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace UI
{
{
		namespace Collections
{
			template <typename T0>
	class IndexedSet : public Object // 0x0
	{
	public:
		UnityEngine::List<T>* m_List; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
		System.Collections.Generic.Dictionary<T,int> m_Dictionary; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
