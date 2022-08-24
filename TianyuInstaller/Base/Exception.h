#pragma once
#include "Macro.h"

namespace TianyuAPI {
	class Exception 
	{
		Private QString DATA;
		Public Exception(QString Data) {
			DATA = Data;
		}
		QString what() const noexcept {
			return DATA;
		}
	};
}
