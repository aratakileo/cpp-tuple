#ifndef _TeaCondemns_TUPLE
#define _TeaCondemns_TUPLE

#include <iostream>

namespace tuple {
	// item of tuple
	template<std::size_t i, typename item>
	struct leaf {
	    item value;
	};
	
	
	template<std::size_t i, typename... items>
	struct impl;
	
	
	// empty tuple
	template<std::size_t i>
	struct impl<i>{};
	
	
	template<std::size_t i, typename item, typename... items>
	struct impl<i, item, items...> :
	    public leaf<i, item>,
	    public impl<i + 1, items...> {};
	

	// at<0>(tuple) = ...;
	// ... = at<0>(tuple);
	template<std::size_t i, typename item, typename... items>
	item& at(impl<i, item, items...>& _tuple) {
	    return _tuple.leaf<i, item>::value;
	}
	
	
	template<typename... items>
	using tuple = impl<0, items...>;
}
#endif
