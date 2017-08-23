#pragma once

#include "..\System\ComponentModel\AsyncOperation.h"
#include "..\System\ComponentModel\DoWorkEventHandler.h"
#include "..\System\ComponentModel\ProgressChangedEventHandler.h"
#include "..\System\ComponentModel\RunWorkerCompletedEventHandler.h"

namespace System
{
	namespace ComponentModel
{
	class BackgroundWorker : public Component // 0x30
	{
	public:
		System::ComponentModel::AsyncOperation* async; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::DoWorkEventHandler* DoWork; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::ProgressChangedEventHandler* ProgressChanged; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::RunWorkerCompletedEventHandler* RunWorkerCompleted; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool cancel_pending; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool report_progress; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
		bool support_cancel; // 0x52 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
