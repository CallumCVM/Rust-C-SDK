#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class ListMatchResponse : public BasicResponse // 0x20
	{
	public:
		UnityEngine::List<UnityEngine.Networking.Match.MatchDesc>* <matches>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
