#include <Rogue/Util.h>

namespace Rogue {
	
	int Util::strLength(char* str) {
		int len = 0;
		while (str[len] != '\0')
			len++;
		return len;
	}
	
} // namespace Rogue