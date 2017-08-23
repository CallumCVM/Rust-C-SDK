#pragma once

#include "..\System\ComponentModel\ListChangedEventHandler.h"
#include "..\System\ComponentModel\AddingNewEventHandler.h"
#include "..\System\Object.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JContainer : public JToken // 0x30
	{
	public:
		System::ComponentModel::ListChangedEventHandler* _listChanged; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::ComponentModel::AddingNewEventHandler* _addingNew; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		System::Object _syncRoot; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _busy; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
