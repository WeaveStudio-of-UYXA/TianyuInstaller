#pragma once
#include "Macro.h"

namespace TianyuAPI {
	class TianyuException :public QException
	{
		Public void raise() const {
			throw *this;
		}
		Public TianyuException *clone() const {
			return new TianyuException(*this);
		}
	};
}
