// 解释下面程序片段是否合法。

/*	
	std::cout << "The sum of " << v1;
		  	  << " and " << v2;
		  	  << " is " << v1 + v2 << std::endl;
*/

// 不合法，;表示语句结束，<< 左侧加上ostream类对象cout
